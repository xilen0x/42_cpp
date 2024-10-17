# C++ - Module 05
## Objetivos de aprendizaje:

- Excepciones, jerarquía de clases y polimorfismo.

[Ver diagrama ejercicios](https://www.figma.com/board/l1LExauleqdByPDgwFQ1Z3/CPP-Module05?node-id=0-1&node-type=canvas&t=yroIf03W4DCg1c3e-0)

# Ejercicio 01: "Form"
**Objetivo**

Crear la clase Form, que representa formularios que los burócratas deben firmar. Esta clase tiene atributos constantes para el nombre, los niveles requeridos para firmar y ejecutar, y una bandera booleana para saber si el formulario ya está firmado o no.

**Claves del ejercicio**

La clase Form tiene los siguientes atributos privados:

        _name (string constante).
        _signed (Estado de firma de tipo bool, inicializado false).
		_gradeToSign (Nivel requerido para firmar).
        _gradeToExecute (Nivel requerido para ejecutar).

Si los niveles requeridos son inválidos, se lanzan excepciones:

        GradeTooHighException si el nivel es menor a 1.
        GradeTooLowException si el nivel es mayor a 150.

Implementa un método **beSigned(Bureaucrat &)** que verifica si el burócrata tiene un nivel lo suficientemente alto para firmar el formulario.

Si no tiene el nivel requerido, lanza una **GradeTooLowException**.

Se agrega el método **signForm()** en la clase Bureaucrat para intentar firmar un formulario. 

Imprime un mensaje indicando si el burócrata pudo o no firmar el formulario.