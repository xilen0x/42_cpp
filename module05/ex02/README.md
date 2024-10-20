# C++ - Module 05
## Objetivos de aprendizaje:

- Excepciones, jerarquía de clases y polimorfismo.

[Ver diagrama ejercicios](https://www.figma.com/board/l1LExauleqdByPDgwFQ1Z3/CPP-Module05?node-id=0-1&node-type=canvas&t=yroIf03W4DCg1c3e-0)

# Ejercicio 02: "Formularios Concretos"
**Objetivo**

Crear un sistema más avanzado donde los formularios realizan acciones concretas. En este ejercicio, convertirás la clase Form en una clase abstracta (llamada AForm) y crearás clases derivadas que implementan acciones específicas. Aquí es donde se introduce el concepto de polimorfismo.

**Claves del ejercicio**

### Renombrar Form a AForm y hacerla una clase abstracta
La clase AForm define los atributos y funciones que serán comunes a todos los formularios.

Será abstracta porque tiene al menos un método virtual puro (execute()), lo que significa que no se puede instanciar directamente.

Todas las subclases derivadas de AForm deberán implementar su propia versión del método execute().

### Mantener los atributos privados en AForm
Los atributos de AForm (heredados de Form en el ejercicio anterior) son:

        Nombre constante del formulario.
        Estado de firma (bool), que empieza como false.
        Nivel requerido para firmar el formulario.
        Nivel requerido para ejecutar el formulario.

### Control de excepciones
Si el nivel requerido es inválido (menor a 1 o mayor a 150), lanza:

	GradeTooHighException si el nivel es demasiado alto (menor que 1).
	GradeTooLowException si el nivel es demasiado bajo (mayor que 150).
Si un burócrata intenta firmar o ejecutar un formulario sin tener el nivel adecuado, también se lanzan excepciones:

	GradeTooLowException si no tiene suficiente nivel para firmar o ejecutar.
	FormNotSignedException si intenta ejecutar un formulario que no ha sido firmado.

### Método execute(Bureaucrat const & executor)
Define un método execute() en la clase AForm que será virtual puro.

En las subclases derivadas (como ShrubberyCreationForm), este método implementará una acción específica.

Antes de ejecutar la acción, debes verificar dos cosas:
- El formulario debe estar firmado.
- El burócrata debe tener un nivel igual o superior al requerido para ejecutar.

### Formularios concretos que heredan de AForm

Crea tres clases derivadas que heredan de AForm, cada una con su propio comportamiento específico:

	ShrubberyCreationForm
		Nivel requerido para firmar: 145
        Nivel requerido para ejecutar: 137
        Acción: Crea un archivo <target>_shrubbery con árboles ASCII.

    RobotomyRequestForm
    	Nivel requerido para firmar: 72
        Nivel requerido para ejecutar: 45
        Acción: Imprime ruidos de taladro y, con una probabilidad del 50%, informa que la robotización del objetivo fue exitosa o fallida.

    PresidentialPardonForm
        Nivel requerido para firmar: 25
        Nivel requerido para ejecutar: 5
        Acción: Informa que el objetivo fue perdonado por Zaphod Beeblebrox.

### Agregar executeForm() en Bureaucrat
Implementa en la clase Bureaucrat un método llamado executeForm(AForm const & form) que intenta ejecutar un formulario.

Imprime:

        <bureaucrat> executed <form>

Si falla, imprime un mensaje con el error específico que ocurrió.

## Resumen del Ejercicio 02

Este ejercicio introduce polimorfismo mediante la clase abstracta AForm. Los formularios concretos (ShrubberyCreationForm, RobotomyRequestForm, PresidentialPardonForm) implementan su propio comportamiento a través de la función execute(). Además, se sigue utilizando control de acceso mediante niveles jerárquicos y excepciones para manejar errores.