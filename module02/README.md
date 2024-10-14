# C++ - Module 02
## Objetivos de aprendizaje:

-	Polymorphism
-	Operator overloading
-	Orthodox Canonical class form

## 1. Polymorphism
El polimorfismo es un principio fundamental de la programación orientada a objetos que permite que se puedan utilizar objetos de diferentes clases a través de una interfaz común.

Características clave:

* Permite que diferentes objetos respondan de manera única a la misma llamada de método.
* Proporciona una forma de usar un tipo más general para representar tipos más específicos.
* Facilita la extensibilidad y flexibilidad en el diseño de programas.


Ejemplo de Polymorfismo

```cpp
// Suma dos enteros
int sumar(int a, int b) {
    return a + b;
}

// Suma dos números de punto flotante
double sumar(double a, double b) {
    return a + b;
}

// Suma tres enteros
int sumar(int a, int b, int c) {
    return a + b + c;
}

int main(){
	int resultado1 = sumar(5, 3);           // Usa la primera versión
	double resultado2 = sumar(3.14, 2.86);  // Usa la segunda versión
	int resultado3 = sumar(1, 2, 3);        // Usa la tercera versión
	return 0;
}
```

## 2. Operator Overloading

La sobrecarga de operadores permite definir el comportamiento de los operadores (como +, -, *, etc.) para tipos de datos personalizados (clases). Esto permite que los objetos de las clases se comporten como tipos de datos nativos al utilizar estos operadores.

Ejemplo

Declaración (OperatorOverloading.hpp)

```cpp

#include <iostream>

class Complex {
	public:
		double real;
		double imag;

		Complex(double r, double i);

		// Sobrecarga del operador +
		Complex operator+(const Complex& other);
};

// Sobrecarga del operador de salida <<
std::ostream& operator<<(std::ostream& os, const Complex& c);

```

Implementación (OperatorOverloading.cpp)

```cpp

#include "OperatorOverloading.hpp"

// Constructor
Complex::Complex(double r, double i) : real(r), imag(i) {}

// Sobrecarga del operador +
Complex Complex::operator+(const Complex& other) {
    return Complex(real + other.real, imag + other.imag);
}

// Sobrecarga del operador de salida <<
std::ostream& operator<<(std::ostream& os, const Complex& c) {
    os << c.real << " + " << c.imag << "i";
    return os;
}

// Uso de la sobrecarga de operadores en main
int main() {
    Complex c1(2.0, 3.0);
    Complex c2(4.0, 5.0);

    Complex c3 = c1 + c2; // Usa la sobrecarga de +
    
    std::cout << "Resultado de la suma: " << c3 << std::endl; // Imprime: Resultado de la suma: 6 + 8i

    return 0;
}
```

## 3. Orthodox Canonical Class Form

La forma canónica ortodoxa de la clase se refiere a un conjunto de reglas para definir las funciones de construcción y destrucción de una clase en C++. Esto incluye el constructor por defecto, el constructor de copia, el operador de asignación y el destructor. Siguiendo esta forma, se asegura que los objetos de la clase se manejen correctamente en términos de gestión de memoria y copias.

Ejemplo

Declaración (OrthodoxCanonicalForm.hpp)

```cpp

#include <iostream>

class CanonicalClass {
private:
    int* data; // Puntero a memoria dinámica

public:
    // Constructor por defecto
    CanonicalClass();

    // Constructor de copia
    CanonicalClass(const CanonicalClass& other);

    // Operador de asignación
    CanonicalClass& operator=(const CanonicalClass& other);

    // Destructor
    ~CanonicalClass();

    void setData(int value);
    void display() const;
};
```

Implementación (OrthodoxCanonicalForm.cpp)

```cpp

#include "OrthodoxCanonicalForm.hpp"

// Constructor por defecto
CanonicalClass::CanonicalClass() {
    data = new int(0); // Inicializa con 0
}

// Constructor de copia
CanonicalClass::CanonicalClass(const CanonicalClass& other) {
    data = new int(*other.data); // Copia el valor del puntero
}

// Operador de asignación
CanonicalClass& CanonicalClass::operator=(const CanonicalClass& other) {
    if (this != &other) { // Evita la auto-asignación
        delete data; // Liberar memoria existente
        data = new int(*other.data); // Copia el valor
    }
    return *this;
}

// Destructor
CanonicalClass::~CanonicalClass() {
    delete data; // Liberar memoria
}

// Método para establecer el valor
void CanonicalClass::setData(int value) {
    *data = value;
}

// Método para mostrar el valor
void CanonicalClass::display() const {
    std::cout << "Data: " << *data << std::endl;
}

// Uso de la forma canónica en main
int main() {
    CanonicalClass obj1;
    obj1.setData(42);
    obj1.display(); // Imprime: Data: 42

    CanonicalClass obj2 = obj1; // Llama al constructor de copia
    obj2.display(); // Imprime: Data: 42

    CanonicalClass obj3;
    obj3 = obj1; // Llama al operador de asignación
    obj3.display(); // Imprime: Data: 42

    return 0;
}
```
