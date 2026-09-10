*Este proyecto ha sido creado como parte del currículo de 42 por Alejandro Prieto.*

## Descripción
Este proyecto consiste en la creación de una función `get_next_line()` que lee línea por línea desde un descriptor de archivo (file descriptor). El objetivo principal es aprender a utilizar variables estáticas en C para mantener el estado entre llamadas consecutivas, así como gestionar dinámicamente la memoria y optimizar la lectura de archivos sin cargar el contenido completo en memoria.

La función permite leer de cualquier tipo de descriptor de archivo (archivos regulares, stdin, sockets, etc.) y devuelve cada línea de forma secuencial, incluyendo el salto de línea (`\n`) al final de cada línea, excepto en la última si el archivo no termina con uno.

## Instrucciones de Compilación y Ejecución
Para compilar y utilizar esta función en tus proyectos, sigue estos pasos:

1. **Compilación básica:** Ejecuta el comando `make` en la raíz del repositorio. Esto compilará los archivos fuente usando `cc` con las flags `-Wall -Wextra -Werror`.

2. **Compilación con BUFFER_SIZE personalizado:** Puedes especificar un tamaño de buffer diferente en tiempo de compilación:
   ```bash
   cc -Wall -Werror -Wextra -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c -o programa
   ```

3. **Limpieza:** Usa `make clean` para borrar los archivos objeto (`.o`), o `make fclean` para borrar también los ejecutables.

4. **Uso en otros proyectos:** Incluye la cabecera en tu código de C:
   ```c
   #include "get_next_line.h"
   ```

5. **Enlazado:** Compila tu programa incluyendo los archivos de get_next_line:
   ```bash
   cc -Wall -Werror -Wextra -D BUFFER_SIZE=42 tu_programa.c get_next_line.c get_next_line_utils.c -o tu_programa
   ```

6. **Recuerda:** Siempre libera la memoria de cada línea retornada con `free()`.

## Recursos e Inteligencia Artificial
**Recursos utilizados:**
* Documentación oficial de Linux: `man 2 read`, `man 2 open`.
* Material de estudio sobre variables estáticas en C y gestión de memoria dinámica.
* Conceptos de file descriptors y buffers en programación de sistemas.

**Uso de Inteligencia Artificial:**
De acuerdo con las normativas de la escuela sobre la construcción de fundamentos sólidos, se ha utilizado IA exclusivamente como herramienta de aprendizaje y *thought partner*. Las tareas específicas en las que se ha empleado son:
* Clarificación del concepto de variables estáticas y su uso en este contexto.
* Ayuda para entender el funcionamiento de los file descriptors y la función `read()`.
* Depuración y explicación de errores de compilación y comportamiento incorrecto durante el desarrollo.
* Uso para generar este README.md teniendo en cuenta las directrices del enunciado.

En ningún caso se ha utilizado para generar código final sin comprensión previa de la solución.