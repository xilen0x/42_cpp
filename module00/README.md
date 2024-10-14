# C++ - Module 00
## Objetivos de aprendizaje:

-	Namespaces
-	classes
-	member functions
-	stdio streams
-	initialization lists
-	static
-	const

## Namespaces
Los namespaces en C++ son una característica que permite organizar el código en grupos o "espacios de nombres" para evitar conflictos entre identificadores. 
En C++, un identificador puede ser el nombre de una variable, función, clase, o cualquier otro objeto declarado en el código. 

Si en tu programa tienes múltiples bibliotecas o módulos con nombres similares para sus funciones o variables, pueden ocurrir colisiones de nombres (conflictos), lo que puede generar errores difíciles de rastrear. Los namespaces ayudan a evitar estos conflictos.

Ejemplo:

```c++
#include <iostream>

namespace ns1 {
    int a = 10;
    void funcion() {
        std::cout << "Función en ns1\n";
    }
}

namespace ns2 {
    int a = 20;
    void funcion() {
        std::cout << "Función en ns2\n";
    }
}

int main()
{
    ns1::funcion();  // Llama a la función de ns1
    ns2::funcion();  // Llama a la función de ns2

    std::cout << "Valor de a en ns1: " << ns1::a << "\n";
    std::cout << "Valor de a en ns2: " << ns2::a << "\n";
    
    return 0;
}

```
Output:
```bash
Función en ns1
Función en ns2
Valor de a en ns1: 10
Valor de a en ns2: 20
```

## Classes
Una clase es una estructura que podemos utilizar como una plantilla para crear objetos(o instancias).
Define un conjunto de atributos (datos) y métodos (funciones) que los objetos de esa clase tendrán.
En esencia, una clase es una abstracción de un concepto del mundo real. 

Elementos principales de una clase:
    
	Atributos: Son las propiedades o datos que describen al objeto.
    Métodos: Son las funciones(acciones) que el objeto puede realizar.

Ejemplo:

Coche.hpp

```c++
//Definition of the class
#pragma once
#include <string>

class Coche {
	private:
		std::string _marca;
		std::string _modelo;
		std::string _color;
		int 		_velocidad;

	public:
		// Constructor
		Coche(std::string marca, std::string modelo, std::string color);

		// Methods
		void acelerar(int incremento);
		void frenar(int decremento);
		std::string obtenerInfo() const;
};

```
Coche.cpp
```c++
//Implementation of the class
#include "Coche.hpp"
#include <algorithm>

// Constructor
Coche::Coche(std::string marca, std::string modelo, std::string color) 
    : marca(marca), modelo(modelo), color(color), velocidad(0) {}

// Methods
void Coche::acelerar(int incremento) {
    velocidad += incremento;
}

void Coche::frenar(int decremento) {
    velocidad = std::max(0, velocidad - decremento);
}

std::string Coche::obtenerInfo() const {
    return (marca + " " + modelo + " de color " + color + 
           ", velocidad actual: " + std::to_string(velocidad) + " km/h");
}

//--------------------MAIN-------------------
int main() {
    Coche miCoche("Toyota", "Corolla", "Rojo");
    miCoche.acelerar(50);
    std::cout << miCoche.obtenerInfo() << std::endl;
	miCoche.acelerar(30);
    std::cout << miCoche.obtenerInfo() << std::endl;
	miCoche.frenar(20);
	std::cout << miCoche.obtenerInfo() << std::endl;
    return (0);
}
```
Output:
```bash
Toyota Corolla de color Rojo, velocidad actual: 50 km/h
```

## Member functions

## Stdio streams

## Initialization lists

## Static

## Const
