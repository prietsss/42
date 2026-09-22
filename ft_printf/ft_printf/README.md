*Este proyecto ha sido creado como parte del currículo de 42 por alepriet.*

## Descripción
Este proyecto consiste en la creación de una librería estática que contiene la función `ft_printf()`, una reimplementación de la famosa función `printf()` de la libc. El objetivo principal es aprender a gestionar un número variable de argumentos en C utilizando funciones variádicas, manteniendo un código bien estructurado y extensible. 

La función no implementa la gestión del buffer original, pero gestiona las siguientes conversiones obligatorias: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X` y `%%`.

## Instrucciones de Compilación y Ejecución
Para utilizar esta librería en tus proyectos, sigue estos pasos:

1. **Compilación:** Ejecuta el comando `make` en la raíz del repositorio. Esto compilará los archivos fuente usando `cc` con las flags `-Wall -Wextra -Werror` y empaquetará los objetos en el archivo `libftprintf.a` mediante el comando `ar rcs`.
2. **Limpieza:** Puedes usar `make clean` para borrar los archivos objeto (`.o`), o `make fclean` para borrar también la librería compilada.
3. **Uso en otros proyectos:** Incluye la cabecera en tu código de C:
   `#include "ft_printf.h"`
4. **Enlazado:** Compila tu programa enlazándolo con la librería generada:
   `cc tu_programa.c libftprintf.a -o tu_programa`

## Recursos e Inteligencia Artificial
**Recursos utilizados:**
* Documentación oficial de Linux: `man 3 printf`, `man 3 stdarg`.
* Material de estudio sobre punteros y promoción de tipos en C.

**Uso de Inteligencia Artificial:**
De acuerdo con las normativas de la escuela sobre la construcción de fundamentos sólidos, se ha utilizado IA (Gemini) exclusivamente como herramienta de aprendizaje y *thought partner*. Las tareas específicas en las que se ha empleado son:
* Comprensión teórica del funcionamiento interno de las macros `va_start`, `va_arg` y `va_end`.
* Depuración y explicación de errores de compilación y enlazado (linker) producidos durante el desarrollo.
* Uso para generar este README.md teniendo en cuenta las directrices del enunciado.
En ningún caso se ha utilizado para generar código final sin comprensión previa.