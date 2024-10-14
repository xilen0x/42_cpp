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
En ciertos programas podría haber múltiples bibliotecas o módulos con nombres similares para sus funciones o variables, lo que podría provocar colisiones de nombres(conflictos), lo que puede generar errores difíciles de rastrear. Los namespaces ayudan a evitar estos conflictos.

Los namespaces en C++ son una característica que permite organizar el código en grupos o "espacios de nombres" para evitar conflictos entre nombres de una variables, funciones, clases, o cualquier otro objeto declarado en el código. 


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
Las member functions son funciones que están definidas dentro de una clase y que operan sobre objetos de esa clase. Representan el comportamiento o las acciones que los objetos de la clase pueden realizar.

Las funciones miembro pueden acceder directamente a las data members (miembros de datos) de la clase. Si los miembros de datos son privados, solo las funciones miembro (y las clases amigas) pueden acceder a ellos.

Ejemplo:

MyClass.hpp
```c++
//Declaración

class MyClass {
	private:
    	std::string name;
    	int 		age;
	
	public:
	// Declaración de funciones miembro
	    void setAge(int edad);
		void setName(const std::string& name);
		std::string getName() const;
		int getAge() const;
		void introduce() const;
};

```
MyClass.cpp
```c++
//Implementación

void MyClass::setAge(int a) {
    if (a > 0) {
        age = a;
    } else {
        std::cout << "Invalid age!" << std::endl;
    }
}

void MyClass::setName(const std::string& n) {
    name = n;
}

std::string MyClass::getName() const {
    return name;
}

int MyClass::getAge() const {
    return age;
}

void MyClass::introduce() const {
    std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << std::endl;
}

//**************main*************
int main()
{
	MyClass person;

	person.setName("John");
	person.setAge(21);
	person.introduce();
	return (0);
}
```

Output:
```bash
Hello, my name is John and I am 21 years old.
```
## Stdio streams
Las "Stdio streams" en C++ son flujos de entrada y salida que permiten la comunicación entre un programa y su entorno (como la consola o archivos). Estos flujos provienen de la biblioteca C (stdio.h) y son utilizados en C++ a través de la biblioteca <iostream>.

Existen tres flujos estándar importantes que C++ hereda del C (de la biblioteca stdio.h):

1. Entrada estándar (stdin).
2. Salida estándar (stdout).
3. Error estándar (stderr).

#### 1.Entrada estándar (stdin).
El flujo stdin se utiliza para recibir datos de entrada desde el usuario o desde un archivo en la entrada estándar. En C++, el objeto es std::cin que permite leer entradas del teclado o de archivos.

Ejemplo:
```c++
#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;  // Lee el número ingresado
    std::cout << "You entered: " << number << std::endl;
    return 0;
}
```

En C++, std::cin es un objeto que representa la entrada estándar y se utiliza con el operador >> para leer datos.

#### 2. Salida estándar (stdout).
El flujo stdout se utiliza para enviar datos de salida al entorno del programa, típicamente a la consola. En C++, el objeto equivalente es std::cout, que permite mostrar datos en la consola.

Ejemplo:
```c++

#include <iostream>

int main() {
    std::cout << "Hello, world!" << std::endl;  // Muestra salida en la consola
    return 0;
}
```

En C++, std::cout se utiliza junto con el operador << para enviar datos a la salida estándar(consola).

#### 3. Error estándar (stderr).
El flujo stderr es utilizado para enviar mensajes de error u otra información importante que el programa quiera separar del flujo de salida estándar. En C++, el objeto equivalente es std::cerr, que permite mostrar mensajes de error en la consola de manera inmediata.

Ejemplo:

```c++

#include <iostream>

int main() {
    std::cerr << "An error occurred!" << std::endl;  // Muestra mensaje de error
    return 1;
}
```

En C++, std::cerr es el flujo de salida estándar de errores. A diferencia de std::cout, no utiliza bufferización (no almacena datos en buffer), lo que significa que los mensajes de error se muestran inmediatamente.

```md
| Flujo   | Objeto C++ | Uso                              |
|---------|------------|----------------------------------|
| Entrada | std::cin   | Para leer datos de entrada       |
| Salida  | std::cout  | Para mostrar salida              |
| Error   | std::cerr  | Para mostrar mensajes de error   |

```

## Initialization lists
En C++, una initialization list (lista de inicialización) es una forma especial de inicializar miembros de una clase antes de que se ejecute el cuerpo del constructor. Se utiliza cuando se necesitan inicializar miembros de la clase o inicializar correctamente las clases base (en el caso de herencia) de manera eficiente y clara.

Las listas de inicialización se encuentran justo después de los dos puntos (:) en la definición del constructor, y permiten inicializar los miembros de la clase directamente en el momento de la construcción, en lugar de asignarles valores dentro del cuerpo del constructor.

Ejemplo:

MyClass.hpp
```c++
//Declaración

class MyClass {
	private:
		const int _x;
		const int _y;

	public:
		// Constructor con lista de inicialización ya que _x e _y son const
		MyClass(int a, int b);

		int getX() const;
		int getY() const;
};
```

MyClass.cpp
```c++
// Definición del constructor con lista de inicialización
MyClass::MyClass(int a, int b) : _x(a), _y(b) {
}

// Implementación de los métodos getters
int MyClass::getX() const {
    return _x;
}

int MyClass::getY() const {
    return _y;
}

/*******************MAIN*******************/

int main() {
	MyClass obj(10, 20);

	std::cout << "x: " << obj.getX() << std::endl;
	std::cout << "y: " << obj.getY() << std::endl;

	return 0;
}
```
En este ejemplo, los miembros *x* e *y* se inicializan directamente con los valores *a* y *b* en la lista de inicialización. Esto es más eficiente que asignarles valores dentro del cuerpo del constructor porque se evita la construcción inicial por defecto seguida de la reasignación.

## Static
La palabra clave static tiene diferentes significados dependiendo del contexto en el que se use: en funciones, variables de una función, y miembros de clase.

#### Variables locales estáticas

Cuando declaras una variable con **static** dentro de una función, la variable retiene su valor entre llamadas a la función. En lugar de ser creada y destruida cada vez que se llama a la función, se crea solo una vez, la primera vez que se ejecuta la función, y luego permanece en la memoria durante la vida del programa.

```c++
#include <iostream>

void countCalls() {
    static int count = 0;  // Solo se inicializa una vez
    count++;
    std::cout << "Call count: " << count << std::endl;
}

int main() {
    countCalls();
    countCalls();
    countCalls();
    return 0;
}
```

Salida:

	Call count: 1
	Call count: 2
	Call count: 3

#### Funciones estáticas

Una función estática en C++ tiene las siguientes características principales:

* Pertenece a la clase en lugar de a instancias específicas de la clase.Esto significa que solo existe una copia de la función estática, independientemente de cuántos objetos de la clase se creen.
* Puede ser llamada sin necesidad de crear un objeto de la clase. Se puede acceder directamente usando el nombre de la clase y el operador de resolución de ámbito (::).
* Solo puede acceder a otros miembros estáticos (variables o funciones) de la clase directamente. No tiene acceso a miembros no estáticos sin un objeto.
* No tiene acceso al puntero "this", ya que no está asociada a ningún objeto específico.
* Se declara usando la palabra clave "static" dentro de la definición de la clase.
* Puede definirse dentro o fuera de la declaración de la clase. Si se define fuera, no se usa la palabra "static" en la definición.
* Se utiliza comúnmente para operaciones que no dependen del estado de objetos individuales, como contadores o funciones de utilidad relacionadas con la clase.

Ejemplo1
```cpp

class MyClass {
public:
    static void sayHello() {
        std::cout << "Hello from a static function!" << std::endl;
    }
};

int main() {
    MyClass::sayHello();  // Se llama sin necesidad de instanciar la clase
    return 0;
}
```
Ejemplo2
```cpp
class MyClass {
public:
    static int getNextNumber() {
        static int number = 0;
        return ++number;
    }
};

int main() {
    // Llamada a la función estática sin crear un objeto
    int num = MyClass::getNextNumber();
}
```

#### Miembros estáticos en una clase

Un miembro estático de una clase es compartido por todas las instancias de esa clase. En lugar de tener una copia de ese miembro por cada objeto creado, hay solo una copia que es compartida entre todos los objetos.

Ejemplo
```cpp

class MyClass {
public:
    static int sharedValue;  // Declaración de un miembro estático
};

int MyClass::sharedValue = 10;  // Definición e inicialización del miembro estático

int main() {
    MyClass obj1;
    MyClass obj2;

    std::cout << obj1.sharedValue << std::endl;  // Salida: 10
    obj2.sharedValue = 20;
    std::cout << obj1.sharedValue << std::endl;  // Salida: 20 (comparten la misma variable estática)
    return (0);
}
```

## Const
La palabra clave **const** en C++ se utiliza para declarar constantes, es decir, variables cuyo valor no puede cambiar después de haber sido inicializado. Puede aplicarse a variables, parámetros de funciones, funciones miembro, y más. Su uso asegura la inmutabilidad de los datos.

### Variables constantes

Una variable **const** se inicializa cuando se declara y no puede modificarse después.

```cpp
const int x = 10;
x = 20;  // Error: no se puede modificar una variable const
```
### Punteros constantes
Los punteros también pueden ser constantes. Hay tres variaciones de punteros con const:

1. **El valor apuntado es constante**: no se puede modificar el valor al que apunta el puntero, pero se puede cambiar a dónde apunta.

```cpp
int 		a = 10;
int 		b = 20;
const int*	ptr = &a;  // El valor apuntado es constante
*ptr = 30;  // Error: no se puede modificar a través del puntero
ptr = &b;   // Válido: el puntero puede apuntar a otra dirección
```

2. **El puntero es constante**: no se puede cambiar la dirección a la que apunta el puntero, pero sí el valor al que apunta.

```cpp

int a = 10;
int* const ptr = &a;  // El puntero es constante
*ptr = 30;  // Válido: se puede modificar el valor apuntado
ptr = &b;   // Error: no se puede cambiar la dirección del puntero
```

3. **El valor y el puntero son constantes**: ni el puntero ni el valor apuntado pueden modificarse.

```cpp

    int a = 10;
    const int* const ptr = &a;  // El puntero y el valor apuntado son constantes
    *ptr = 30;  // Error: no se puede modificar el valor apuntado
    ptr = &b;   // Error: no se puede cambiar la dirección del puntero
```

### Funciones miembro constantes

En C++, una función miembro constante no puede modificar los miembros de la clase. Se declara añadiendo const después de la declaración de la función.

```cpp
class MyClass {
private:
    int value;

public:
    MyClass(int v) : value(v) {}

    int getValue() const {  // Función miembro constante
        // value++;  // Error: no se puede modificar el valor
        return value;
    }
};
```
Aquí, getValue() es una función constante, lo que significa que no puede modificar el valor de ningún miembro de la clase. Esto es útil para asegurar que las funciones que deberían solo leer datos no puedan alterar el estado del objeto.

### Parámetros de funciones constantes

Si un parámetro se pasa por referencia y no debe modificarse dentro de la función, se declara como const. Esto también permite que la función acepte objetos temporales como argumentos.

```cpp

void printValue(const int& x) {
    // x = 20;  // Error: no se puede modificar x
    std::cout << x << std::endl;
}
```
## Combinando static y const

Es común ver variables que son tanto static como const en las clases. Estas variables son compartidas entre todas las instancias de la clase y su valor no cambia después de la inicialización.

```cpp

class MyClass {
public:
    static const int constantValue = 100;  // Miembro estático y constante
};
```
Dado que es static, solo hay una copia compartida entre todas las instancias de la clase, y dado que es const, no puede modificarse.