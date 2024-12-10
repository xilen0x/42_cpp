# C++ - Module 09
## Objetivos de aprendizaje:

- STL

**STL** (Standard Template Library) es una biblioteca estándar en C++ que proporciona un conjunto de clases y funciones genéricas diseñadas para manejar estructuras de datos y algoritmos comunes. Es una parte integral de la biblioteca estándar de C++ y sigue el paradigma de la programación genérica, lo que permite escribir código flexible y reutilizable.

### Principales componentes de STL:

*   Contenedores (Containers): Son estructuras de datos genéricas que almacenan colecciones de elementos. 

Algunos ejemplos comunes incluyen:

    Secuenciales: vector, deque, list, array.
    Asociativos: set, map, multiset, multimap.
    Basados en hash (a partir de C++11): unordered_set, unordered_map, etc.

* Iteradores (Iterators): Actúan como punteros generales para recorrer elementos dentro de contenedores. Los iteradores abstraen el acceso a los elementos y son clave en la interoperabilidad entre algoritmos y contenedores.

* Algoritmos: Son un conjunto de funciones genéricas para realizar operaciones como búsquedas, ordenamientos, transformaciones, entre otras. 

    Ejemplos incluyen:

        sort, find, for_each, count, copy, reverse, etc.

* Adaptadores (Adaptors): Son contenedores o funciones que transforman interfaces, haciendo que sea más fácil usar otros componentes del STL. 

Ejemplos:

        Contenedores adaptados: stack, queue, priority_queue.
        Funciones adaptadas: adaptadores de funciones como bind, not1.

* Funciones y Objetos de Función: Incluyen herramientas como predicados (funciones que devuelven booleanos) y objetos de función (funciones encapsuladas en clases) que permiten personalizar el comportamiento de los algoritmos. 

Ejemplos:
        less, greater, plus, minus, etc.