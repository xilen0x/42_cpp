# C++ - Module 04
## Objetivos de aprendizaje:

-	Subtype polymorphism
-	Abstract classes
-	Interfaces

## 1. Subtype Polymorphism

El polimorfismo por subtipo (Subtype Polymorphism), también conocido como polimorfismo de inclusión, es una forma de polimorfismo en la que un puntero o referencia a una clase base puede apuntar a una instancia de una clase derivada. Esto permite tratar a los objetos de las clases derivadas como si fueran de la clase base, y utilizar las funciones virtuales para invocar el comportamiento específico de la clase derivada.

Ejemplo

Declaración (SubtypePolymorphism.hpp)

```cpp

#include <iostream>

// Clase base
class Animal {
public:
    virtual void makeSound() const; // Método virtual
};

// Clases derivadas
class Dog : public Animal {
public:
    void makeSound() const override;
};

class Cat : public Animal {
public:
    void makeSound() const override;
};

```

Implementación (SubtypePolymorphism.cpp)

```cpp

#include "SubtypePolymorphism.hpp"

// Implementación del método makeSound de Animal
void Animal::makeSound() const {
    std::cout << "Animal makes a sound." << std::endl;
}

// Implementación del método makeSound de Dog
void Dog::makeSound() const {
    std::cout << "Dog barks." << std::endl;
}

// Implementación del método makeSound de Cat
void Cat::makeSound() const {
    std::cout << "Cat meows." << std::endl;
}

// Uso del polimorfismo por subtipo en main
int main() {
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    animal1->makeSound(); // Llama a Dog::makeSound()
    animal2->makeSound(); // Llama a Cat::makeSound()

    delete animal1;
    delete animal2;

    return 0;
}
```

### Explicación

Polimorfismo por subtipo permite que los objetos Dog y Cat se traten como objetos de la clase base Animal, pero con la capacidad de llamar a las funciones específicas de Dog y Cat gracias a la palabra clave virtual y al uso de punteros a la clase base.

Salida esperada:

	Dog barks.
	Cat meows.

## 2. Abstract Classes

Una clase abstracta es una clase que no puede ser instanciada directamente y que tiene al menos una función virtual pura (declarada con = 0). Estas clases sirven como base para otras clases que implementarán las funciones virtuales puras.

Ejemplo

Declaración (AbstractClass.hpp)

```cpp

#include <iostream>

// Clase abstracta
class Shape {
public:
    virtual void draw() const = 0; // Método virtual puro
};

// Clases derivadas
class Circle : public Shape {
public:
    void draw() const override; // Implementación de la función pura
};

class Square : public Shape {
public:
    void draw() const override; // Implementación de la función pura
};
```

Implementación (AbstractClass.cpp)

```cpp

#include "AbstractClass.hpp"

// Implementación del método draw de Circle
void Circle::draw() const {
    std::cout << "Drawing a circle." << std::endl;
}

// Implementación del método draw de Square
void Square::draw() const {
    std::cout << "Drawing a square." << std::endl;
}

// Uso de clases abstractas en main
int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Square();

    shape1->draw(); // Llama a Circle::draw()
    shape2->draw(); // Llama a Square::draw()

    delete shape1;
    delete shape2;

    return 0;
}
```

### Explicación

Clase abstracta: Shape tiene un método virtual puro draw(), lo que la convierte en una clase abstracta. Las clases derivadas Circle y Square implementan ese método para proporcionar su propio comportamiento.

Salida esperada:

	Drawing a circle.
	Drawing a square.

## 3. Interfaces

Una interfaz en C++ es una clase abstracta que solo contiene funciones virtuales puras, es decir, no contiene implementación alguna, solo la declaración de los métodos. Las interfaces permiten definir un contrato que las clases derivadas deben cumplir. En C++, no existe una palabra clave específica para definir una interfaz, pero se puede lograr utilizando clases abstractas con funciones puras.

Ejemplo

Declaración (Interface.hpp)

```cpp
#include <iostream>

// Definición de una interfaz (clase abstracta)
class IShape {
public:
    virtual void draw() const = 0;  // Función virtual pura
    virtual double area() const = 0; // Función virtual pura
    virtual ~IShape() {}             // Destructor virtual
};

// Clases que implementan la interfaz
class Circle : public IShape {
private:
    double radius;
public:
    Circle(double r);
    void draw() const override;
    double area() const override;
};

class Square : public IShape {
private:
    double side;
public:
    Square(double s);
    void draw() const override;
    double area() const override;
};

```
Implementación (Interface.cpp)

```cpp
#include "Interface.hpp"

// Constructor de Circle
Circle::Circle(double r) : radius(r) {}

// Implementación de draw() para Circle
void Circle::draw() const {
    std::cout << "Drawing a circle." << std::endl;
}

// Implementación de area() para Circle
double Circle::area() const {
    return 3.14159 * radius * radius; // Área del círculo
}

// Constructor de Square
Square::Square(double s) : side(s) {}

// Implementación de draw() para Square
void Square::draw() const {
    std::cout << "Drawing a square." << std::endl;
}

// Implementación de area() para Square
double Square::area() const {
    return side * side; // Área del cuadrado
}

// Uso de la interfaz en main
int main() {
    IShape* shape1 = new Circle(5.0);
    IShape* shape2 = new Square(4.0);

    shape1->draw();
    std::cout << "Area of circle: " << shape1->area() << std::endl;

    shape2->draw();
    std::cout << "Area of square: " << shape2->area() << std::endl;

    delete shape1;
    delete shape2;

    return 0;
}
```

### Explicación

**Interfaz**: IShape es una interfaz que obliga a las clases derivadas a implementar las funciones draw() y area().

**Clases derivadas**: Circle y Square implementan esas funciones, proporcionando su propio comportamiento para dibujar y calcular el área.

Salida esperada:

	Drawing a circle.
	Area of circle: 78.5397
	Drawing a square.
	Area of square: 16