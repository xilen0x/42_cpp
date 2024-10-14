# C++ - Module 03
## Objetivos de aprendizaje:

-	Inheritance

## Inheritance
La herencia es uno de los pilares fundamentales de la programación orientada a objetos. Permite que una clase "derivada"(subclase) herede las propiedades y comportamientos de una clase "base"(superclase). Esto facilita la reutilización de código y la creación de estructuras jerárquicas de clases.

En C++, la herencia permite que la clase derivada utilice los miembros(variables y funciones) de la clase base. Además, se pueden redefinir(override) las funciones en la clase derivada para que se comporten de manera diferente. La herencia puede ser pública, privada o protegida, lo que controla la visibilidad de los miembros heredados.

Ejemplo

Declaración (Inheritance.hpp)

```cpp

#include <iostream>

// Clase base
class Animal {
	public:
		// Método de la clase base
		void makeSound() const;
};

// Clase derivada de Animal
class Dog : public Animal {
	public:
		// Método sobrescrito en la clase derivada
		void makeSound() const;
};

```

Implementación (Inheritance.cpp)

```cpp

#include "Inheritance.hpp"

// Implementación del método de la clase base
void Animal::makeSound() const {
    std::cout << "The animal makes a sound." << std::endl;
}

// Implementación del método de la clase derivada
void Dog::makeSound() const {
    std::cout << "The dog barks." << std::endl;
}

// Uso de la herencia en main
int main() {
    Animal	genericAnimal;
    Dog 	myDog;

    genericAnimal.makeSound();  // Llama al método de Animal
    myDog.makeSound();          // Llama al método sobrescrito en Dog

    return 0;
}
```
Salida:

	The animal makes a sound.
	The dog barks.
