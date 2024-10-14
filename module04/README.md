# C++ - Module 04
## Objetivos de aprendizaje:

-	Subtype polymorphism
-	Abstract classes
-	Interfaces

[Ver diagrama ejercicios](https://www.figma.com/board/OXsTNXgr2Av1C4MkDaNXly/CPP-Module04?node-id=0-1&t=i3LsCsDymZvhTsCu-1)

## 1. Subtype Polymorphism

El polimorfismo por subtipo (Subtype Polymorphism), también conocido como polimorfismo de inclusión, es una forma de polimorfismo en la que un puntero o referencia a una clase base puede apuntar a una instancia de una clase derivada. Esto permite tratar a los objetos de las clases derivadas como si fueran de la clase base, y utilizar las funciones virtuales para invocar el comportamiento específico de la clase derivada.

Ejemplo

Declaración (SubtypePolymorphism.hpp)

```cpp

#include <iostream>

// Clase base
class Animal {
public:
    virtual ~Animal() {}  // Destructor virtual para evitar problemas al eliminar subclases
    virtual void makeSound() const;  // Método virtual que las subclases sobrescriben
};

// Clases derivadas
class Dog : public Animal {
public:
    void makeSound() const;
};

class Cat : public Animal {
public:
    void makeSound() const;
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
int main()
{
	Animal* animals[2];

    // Crear instancias de Dog y Cat y asignarlas a punteros de tipo Animal
    animals[0] = new Dog();
    animals[1] = new Cat();

    // Llamada polimórfica: invoca makeSound() según el tipo real del objeto
    for (int i = 0; i < 2; ++i) {
        animals[i]->makeSound();  // Resuelve dinámicamente la función adecuada
    }

    // Liberar la memoria
    for (int i = 0; i < 2; ++i) {
        delete animals[i];
    }
    return 0;
}
```

### Explicación

Clase Animal:

Define un método virtual makeSound() que puede ser sobrescrito por las subclases (Dog y Cat). En este caso, la clase Animal tiene una implementación predeterminada (genérica) que imprime "Some generic animal sound".

Clases Dog y Cat:

Sobrescriben el método makeSound() sin usar override (no disponible en C++98) y proporcionan sus propias implementaciones específicas: "Woof!" para Dog y "Meow!" para Cat.

Polimorfismo en acción:

En main(), creamos punteros de tipo Animal*, pero los inicializamos con objetos de tipo Dog y Cat. Luego, llamamos a makeSound() a través del puntero de Animal. Debido al polimorfismo, la implementación correcta de makeSound() (de Dog o Cat) se ejecuta según el tipo real del objeto apuntado.

Salida esperada:

	Woof!
	Meow!


## 2. Abstract Classes

Una clase abstracta es una clase que no puede ser instanciada directamente y que tiene al menos una función virtual pura (declarada con = 0). Estas clases sirven como base para otras clases que implementarán las funciones virtuales puras.

Ejemplo

Declaración (AbstractClass.hpp)

```cpp

#include <iostream>

// Clase abstracta
class Shape {
	public:
		virtual ~Shape() {} // Destructor virtual para evitar problemas al eliminar subclases
		virtual void draw() const = 0; // Método virtual puro
};

// Clases derivadas
class Circle : public Shape {
	public:
		void draw() const; // Implementación de la función pura
};

class Square : public Shape {
	public:
		void draw() const; // Implementación de la función pura
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
		void draw() const;
		double area() const;
};

class Square : public IShape {
	private:
		double side;
	public:
		Square(double s);
		void draw() const;
		double area() const;
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
    IShape* shape1 = new Circle(5.0);// Crear un círculo con radio 5.0
    IShape* shape2 = new Square(4.0);//Crear un cuadrado con lado 4.0

    shape1->draw();
    std::cout << "Area of circle: " << shape1->area() << std::endl;

    shape2->draw();
    std::cout << "Area of square: " << shape2->area() << std::endl;

    delete shape1;
    delete shape2;

    return (0);
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