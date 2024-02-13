# Funciones Variádicas
Las funciones variádicas son funciones que aceptan un número variable de argumentos. Proporcionan la flexibilidad para trabajar con funciones donde el número de entradas puede no ser conocido hasta el tiempo de ejecución. Este documento cubre los aspectos esenciales de las funciones variádicas, sus aplicaciones y las mejores prácticas.

## Definición
Una función variádica es una función de aridad indefinida, lo que significa que puede tomar un número variable de argumentos en lugar de un número fijo. En muchos lenguajes de programación, esto se logra utilizando una sintaxis o palabras clave especiales diseñadas para manejar múltiples argumentos de manera dinámica.

## Sintaxis

int nombre_funcion(tipo_de_dato nombre_variable, ...);

## Archivo de Cabecera
Las funciones variádicas son particularmente útiles en escenarios donde el comportamiento de la función necesita adaptarse en función del número y tipo de entradas proporcionadas por el usuario, como funciones de formateo y registro.

#include <stdarg.h>

## Tipo
Las funciones variádicas pueden categorizarse basadas en los tipos de argumentos que aceptan:

**- Funciones Variádicas Homogéneas:** Estas funciones aceptan un número indefinido de argumentos, pero todos del mismo tipo.

**- Funciones Variádicas Heterogéneas:** Estas funciones pueden aceptar argumentos de diferentes tipos.

## Caso de Uso
Las funciones variádicas son particularmente útiles en escenarios donde el comportamiento de la función necesita adaptarse en función del número y tipo de entradas proporcionadas por el usuario, como funciones de formateo y registro.

## Uso
Un caso de uso común para las funciones variádicas es en la implementación de la función printf en C y funciones similares en otros lenguajes, las cuales necesitan aceptar un número arbitrario de argumentos de varios tipos.

printf("Esto es un %s con %d argumentos variádicos.\n", "string", 2, "argumentos");

## Útil para printf
La función printf en C es un ejemplo principal de una función variádica, mostrando su capacidad para manejar diferentes tipos y números de argumentos de manera eficiente para la salida formateada.

## Consideraciones

Al implementar funciones variádicas, considere lo siguiente:

**- Seguridad de Tipo:** Asegúrese de que la función maneje correctamente los tipos de los argumentos proporcionados.

**- Rendimiento:** Pasar un gran número de argumentos puede impactar el rendimiento.

**- Legibilidad:** Use funciones variádicas juiciosamente para mantener la claridad del código.

## Implementaciones

### Macros

#### va_start
**- Propósito:** Inicializa un objeto va_list para ser usado con las macros va_arg y va_end. Debe ser llamado primero antes de usar va_arg.

**- Uso:** va_start(va_list ap, ultimo_param_fijo);

**- Parámetros:**

    **- ap:** Una variable de tipo va_list que será inicializada para apuntar al primer argumento variable.
    
    **- ultimo_param_fijo:** El nombre del último parámetro fijo antes de que comiencen los argumentos variables. Esto es utilizado por va_start para localizar el primer argumento variable.

#### va_arg
**- Propósito:** Recupera el siguiente argumento en la lista de parámetros del tipo especificado.

**- Uso:** tipo va_arg(va_list ap, tipo);

**- Parámetros:**

  **- ap:** El objeto va_list inicializado por va_start.
    
  **- tipo:** El tipo del siguiente argumento que será recuperado. Este nombre de tipo debe coincidir con el tipo real del argumento.

**Devuelve:** El valor del siguiente argumento del tipo especificado.


#### va_copy

**- Propósito:** Crea una copia de un objeto va_list. Es útil cuando necesita recorrer la lista de argumentos más de una vez o en funciones anidadas donde el va_list original podría ser alterado.

**- Uso:** va_copy(va_list dest, va_list src);

**- Parámetros:**

  **- dest:** El va_list que será una copia de src.
  **- src:** El va_list a copiar.

Nota: Después de usar va_copy, el va_list copiado (dest) debe ser liberado usando va_end.

#### va_end

**- Propósito:** Limpia un objeto va_list después de que ha sido utilizado. Debe ser llamado antes de que la función retorne.

**- Uso:** va_end(va_list ap);

**- Parámetros:**

   **- ap:** El objeto va_list que fue inicializado por va_start y potencialmente utilizado por va_arg.

Nota: No llamar a va_end puede resultar en fugas de memoria u otro comportamiento indefinido.
