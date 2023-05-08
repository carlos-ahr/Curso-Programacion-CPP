# Curso-Programacion-CPP

## 18-04-2023

### 1. Estructura básica de un programa

Un programa se estructura de la siguiente manera generalmente:

1. Autor*
2. Descripcion*
3. Librerias
4. Clases
5. Funciones
6. Variables
7. Bloque princial

> No se nececita crear pero se considera buena practica*

Un ejemplo de un codigo con una buena estrucura seria

```cpp
/*
Autor: Carlos Herrera

Descripcion: Es un programa de ejemplo para entender la estructura de un programa en C++
*/

#include <lib1>
#include "./lib2.h"

class miClase{
    //Clase ejemplo
};
void miFuncion(void){
    //Funcion ejemplo
}

int var1;
char var2;

int main(void){
    //Codigo de ejemplo
    return 0;
}
```

### 2. Entrada y salida de datos

Para la entrada y la salida de datos se usa la libreria `iostream`, esta libreria incluye 2 metodos en el espacio de nombre `std` los cuales son `cin` y `cout` para entrada y salida de datos respectivamente.

Uso de `cin`

```cpp
cin >> var; //Guarda el valor ingresado en var
```

Uso de `cout`

```cpp
cout << "Hola"; // Escribe en la terminal "Hola
```

Aparte incluye `endl` para dar saltos de linea (enter) en la salida de datos.

### 3. Tipos de datos simples

En C++ existen varios tipos de datos simples, estos nos ayudan a declarar variables y funciones ya que C++ es un lenguaje de alto tipado, es decir, se nececita especificar todo para que el compilador optimice los recursos.

Los tipos de datos simples son:

1. Enteros (Integer -> `int`)
2. Punto flotante o decimales (Floating point -> `float`)
3. Caracteres (Character -> `char`)
4. Booleanos (Boolean -> `bool`)
5. Vacio (Void -> `void`)

---

## 19-04-2023

### 1. Compuertas logicas

- not -> `!`
- or -> `||`
- and -> `&&`

### 2. Estructuras de control

1. Si? `if`
2. Si?, Si no `if else`
3. Para `for`Mientras `while`
4. Hacer mientras `do while`

## 03-05-2023

### COMPUERTAS

- NOT `!`
- OR `||`
- AND `&&`

```cpp
!true       // evalua ta false
!false      // evalua a true 
```

&& OPERATOR (and)

| a     | b     | a && b |
| ----- | ----- | ------ |
| true  | true  | true   |
| true  | false | false  |
| false | true  | false  |
| false | false | false  |

|| OPERATOR (or)

| a     | b     | a && b |
| ----- | ----- | ------ |
| true  | true  | true   |
| true  | false | true   |
| false | true  | true   |
| false | false | false  |

### ESTRUCTURAS DE CONTROL

- if else
- while
- do while
- for
- switch

### Operadores Aritmeticos

- suma `+`
- resa `-`
- multiplicacion `*`
- division `/`
- residuo `%`

- aumento `++`
- decremento `--`

### Operaadores de asignacion

- igual a `=`
- igual a la suma `=+`
- igual a la resta `=-`
- igual a la multiplicacion `=*`
- igual a la division `=/`

```python
acumulador = 30
acumulador =+ 10
```

### Operadores de Comparación

- menor que `<`
- mayor que `>`
- menor o igual que `<=`
- mayor o igual que `>=`
- igual que `==`
