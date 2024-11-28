# C++ - Module 05
## Objetivos de aprendizaje:

- Excepciones, jerarquía de clases y polimorfismo.

# Ejercicio 00: "Bureaucrat"
**Objetivo**

Crear la clase Bureaucrat con un sistema de niveles jerárquicos (del 1 al 150), donde 1 es el mejor nivel y 150 es el más bajo. Esta clase incluye control de errores mediante excepciones si se intenta asignar un nivel fuera del rango permitido.

**Claves del ejercicio**

Un Bureaucrat tiene un nombre constante (es decir, no se puede cambiar una vez asignado) y un nivel o "grade" (que puede cambiarse).

Si un nivel es inválido (<1 o >150), se debe lanzar una excepción:
		
		GradeTooHighException si es menor que 1.
        GradeTooLowException si es mayor que 150.

Se implementan getters para acceder al nombre y al nivel.

Implementa dos funciones:

        incrementGrade() --> (reduce su número).
        decrementGrade() --> (aumenta su número).

Sobrecarga del operador << para mostrar el nombre y nivel del burócrata en un formato específico.

![clase UML](https://raw.githubusercontent.com/xilen0x/42_cpp/refs/heads/main/module05/ex00/buro00.png?token=GHSAT0AAAAAAC3EXOPFVDCHVH7IDV3A5MVEZ2IOLKQ)
