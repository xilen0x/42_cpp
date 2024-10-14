# C++ - Module 01
## Objetivos de aprendizaje:

-	Memory allocation
-	Pointers to members,
-	References
-	Switch statement

## Memory allocation

La asignación de memoria en C++ se puede realizar de forma automática(stack) o dinámica(heap) utilizando new y delete. La asignación dinámica permite que la memoria se asigne en tiempo de ejecución, lo que es útil cuando no se conoce de antemano la cantidad de memoria necesaria.

Ejemplo

Declaración (MemoryAllocation.hpp)

```cpp

#include <iostream>

class MemoryAllocator {
	public:
    	int* allocateMemory(int size);
    	void deallocateMemory(int* ptr);
};

```
Implementación (MemoryAllocation.cpp)

```cpp

#include "MemoryAllocation.hpp"

// Asigna memoria dinámica para un arreglo de enteros
int* MemoryAllocator::allocateMemory(int size) {
    return new int[size];  // Asignación de memoria en el heap
}

// Libera la memoria asignada
void MemoryAllocator::deallocateMemory(int* ptr) {
    delete[] ptr;  // Liberación de memoria
}
```
Uso en main.cpp

```cpp

#include "MemoryAllocation.hpp"

int main() {
    MemoryAllocator allocator;
    int size = 5;

    // Asignar memoria
    int* arr = allocator.allocateMemory(size);
    
    // Usar la memoria asignada
    for (int i = 0; i < size; ++i) {
        arr[i] = i * 10;
        std::cout << arr[i] << " ";  // Imprime: 0 10 20 30 40
    }
    std::cout << std::endl;

    // Liberar memoria
    allocator.deallocateMemory(arr);
    
    return 0;
}
```

## Pointers to members
Los punteros a miembros en C++ son punteros que apuntan a variables o funciones de una clase. Se utilizan para referirse a miembros de una clase cuando se tiene una referencia a un objeto de esa clase, lo que permite la manipulación dinámica de sus miembros.

Ejemplo

Declaración (PointersToMembers.hpp)

```cpp

#include <iostream>

class MyClass {
public:
    int value;

    void displayValue() const;
};
```

Implementación (PointersToMembers.cpp)

```cpp

#include "PointersToMembers.hpp"

// Definición de la función miembro
void MyClass::displayValue() const {
    std::cout << "Value: " << value << std::endl;
}

// Uso de punteros a miembros en main
int main() {
    MyClass obj;
    obj.value = 42;

    // Puntero a miembro
    int MyClass::*ptrToMember = &MyClass::value;

    // Acceder al miembro a través del puntero
    std::cout << "Accessing member through pointer: " << obj.*ptrToMember << std::endl; // Imprime: 42

    // Puntero a función miembro
    void (MyClass::*funcPtr)() const = &MyClass::displayValue;
    (obj.*funcPtr)();  // Llama a la función miembro

    return 0;
}
```

## References
Las referencias en C++ son un alias para otra variable, lo que significa que cualquier operación realizada en la referencia afecta a la variable original. Las referencias son útiles para evitar copias innecesarias de datos y para pasar argumentos a funciones sin usar punteros.

Ejemplo

Declaración (References.hpp)

```cpp
#include <iostream>

class ReferenceExample {
public:
    void modifyValue(int& ref);
};
```
Implementación (References.cpp)

```cpp
#include "References.hpp"

// Modifica el valor a través de una referencia
void ReferenceExample::modifyValue(int& ref) {
    ref += 10;  // Incrementa el valor original en 10
}

// Uso de referencias en main
int main() {
    ReferenceExample example;
    int num = 20;

    std::cout << "Original value: " << num << std::endl; // Imprime: 20
    example.modifyValue(num);  // Pasa num por referencia
    std::cout << "Modified value: " << num << std::endl; // Imprime: 30

    return 0;
}
```

## Switch statement
La instrucción switch es una estructura de control que permite seleccionar una de varias opciones a ejecutar, en función del valor de una expresión. Es una alternativa más clara a múltiples sentencias if-else cuando se trata de comparar una misma variable con diferentes valores.
Ejemplo
Declaración (SwitchStatement.hpp)

```cpp

#include <iostream>

class SwitchExample {
	public:
    	void evaluateOption(int option);
};

```

Implementación (SwitchStatement.cpp)

```cpp

#include "SwitchStatement.hpp"

// Evalúa una opción utilizando una declaración switch
void SwitchExample::evaluateOption(int option) {
    switch (option) {
        case 1:
            std::cout << "Opción 1 seleccionada." << std::endl;
            break;
        case 2:
            std::cout << "Opción 2 seleccionada." << std::endl;
            break;
        case 3:
            std::cout << "Opción 3 seleccionada." << std::endl;
            break;
        default:
            std::cout << "Opción no válida." << std::endl;
            break;
    }
}

// Uso de switch en main
int main() {
    SwitchExample	example;
    int 			userOption;

    std::cout << "Ingrese una opción (1-3): ";
    std::cin >> userOption;

    example.evaluateOption(userOption);

    return (0);
}
```