# C++ - Module 06
## Objetivos de aprendizaje:

* Comprender los castings en C++ y cómo aplicarlos.
* Diferenciar y aplicar los castings: static_cast, dynamic_cast, const_cast y reinterpret_cast.
* Trabajar con conversiones explícitas y manejar posibles errores o límites en los datos.

## Exercise 00: Conversion of scalar types

### Requisitos

#### 1.- Clase ScalarConverter. 
Debe contener únicamente un método estático:

```static void convert(const std::string& literal);```

Esta clase no debe ser instanciable.

#### 2.- Tareas del método convert:

* Detectar el tipo del literal pasado como parámetro:
        
    Ejemplo

        char → : 'a'
        int → : 42
        float → : 42.0f
        double → : 42.0
        Pseudo-literales: Manejar los casos especiales: -inf, +inf, nan, -inff, +inff y nanf.

* Realizar conversiones explícitas del tipo detectado a los demás tipos escalares.

* Imprimir los resultados según el formato especificado:

        ./convert 42.0f
        char: '*'
        int: 42
        float: 42.0f
        double: 42.0

Si una conversión no tiene sentido (como convertir nan a int) o excede los límites del tipo de datos, imprimir un mensaje informativo.

### Consideraciones especiales

1. No instanciable:

La clase ScalarConverter debe ser diseñada para que no pueda instanciarse. Esto puede lograrse definiendo el constructor como privado y no implementándolo.

2. Tipos no imprimibles:

Para los valores char, si no es imprimible (valores ASCII no visibles), debe mostrarse un mensaje como:

        char: Non displayable

3. Errores de conversión:

Si la conversión es imposible o genera un desbordamiento, se debe imprimir:

        int: impossible

4. Uso de límites numéricos:

Se debe usar <limits> para detectar y manejar casos extremos.

--------------------

# Casting / Ejemplo práctico:
## 1. Comprender los castings en C++ y cómo aplicarlos

Los castings permiten convertir un tipo de dato en otro. Por ejemplo:
Ejemplo:

```C
#include <iostream>

int main() {
    double pi = 3.14159;
    
    // Casting explícito a int
    int integerPart = static_cast<int>(pi);

    std::cout << "Original: " << pi << std::endl;
    std::cout << "Entero (con static_cast): " << integerPart << std::endl;

    return 0;
}
```

Salida:
```
Original: 3.14159
Entero (con static_cast): 3
```
Aquí usamos static_cast para convertir explícitamente un double en un int, descartando la parte decimal.

## 2. Diferenciar y aplicar los castings en C++
Tipos de castings:

1. **static_cast**: Conversión segura y en tiempo de compilación.
2. **dynamic_cast**: Conversión de tipos relacionados por herencia (requiere polimorfismo).
3. **const_cast**: Elimina o agrega la calificación const.
4. **reinterpret_cast**: Convierte tipos de punteros de forma arbitraria (más peligroso).

Ejemplo de cada uno:

```C
#include <iostream>
#include <typeinfo>

class Base {
public:
    virtual ~Base() {}
};

class Derived : public Base {};

int main() {
    // static_cast
    double num = 42.5;
    int integer = static_cast<int>(num);
    std::cout << "static_cast: " << integer << std::endl;

    // dynamic_cast
    Base* b = new Derived();
    Derived* d = dynamic_cast<Derived*>(b);
    if (d) {
        std::cout << "dynamic_cast: Conversion exitosa." << std::endl;
    }

    // const_cast
    const int constantValue = 10;
    int* nonConst = const_cast<int*>(&constantValue);
    *nonConst = 20; // Solo permitido si se asegura que el original no es realmente const.
    std::cout << "const_cast: " << *nonConst << std::endl;

    // reinterpret_cast
    int val = 65;
    char* c = reinterpret_cast<char*>(&val);
    std::cout << "reinterpret_cast: " << *c << std::endl;

    delete b;
    return 0;
}
```

Salida:

static_cast: 42
dynamic_cast: Conversion exitosa.
const_cast: 20
reinterpret_cast: A

## 3. Trabajar con conversiones explícitas y manejar errores

Es importante manejar errores al realizar conversiones. Por ejemplo:
Ejemplo:

```C
#include <iostream>
#include <string>
#include <limits>

int main() {
    std::string input = "9999999999"; // Ejemplo de número grande.
    try {
        int value = std::stoi(input); // Conversión a entero.
        std::cout << "Valor convertido: " << value << std::endl;
    } catch (const std::out_of_range&) {
        std::cerr << "Error: Valor fuera de rango para un int." << std::endl;
    } catch (const std::invalid_argument&) {
        std::cerr << "Error: Valor no es convertible." << std::endl;
    }
    return 0;
}
```
Salida:

```Error: Valor fuera de rango para un int.```

Aquí usamos std::stoi para convertir una cadena a un entero, pero el valor supera el límite de un entero (INT_MAX), lo que genera un error.

Estos ejemplos muestran cómo funcionan los castings en diferentes contextos, cómo diferenciarlos y cómo manejar errores al trabajar con conversiones en C++.
