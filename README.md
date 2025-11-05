# Ejercicios de Programación en C - Tests Unitarios

Este repositorio contiene una colección de ejercicios de programación en C enfocados en la práctica de pruebas unitarias. Cada ejercicio está diseñado para que los estudiantes corrijan y mejoren el código para que pase todas las pruebas.

## Estructura del Repositorio

Cada desafío se encuentra en su propia carpeta y contiene:
- Un archivo principal `.c` con el código a corregir
- Un archivo de pruebas `test_*.c` que contiene los tests unitarios
- Un `Makefile` para compilar y ejecutar las pruebas

## Cómo Trabajar con los Ejercicios

1. Clona el repositorio:
```bash
git clone https://github.com/brean-rb/formacion_c_ruben.git
cd formacion_c_ruben
```

2. Para cada ejercicio:
   - Navega a la carpeta del ejercicio
   - Revisa el código en el archivo principal
   - Ejecuta las pruebas para ver qué falla
   - Corrige el código hasta que todas las pruebas pasen

### Ejecutar las Pruebas

En cada carpeta de ejercicio, puedes usar:
```bash
make test
```

Si las pruebas fallan, verás mensajes de error específicos que te ayudarán a identificar el problema. Si no ves ningún mensaje de error, ¡significa que todas las pruebas han pasado!

## Convenciones

- Los tests utilizan la biblioteca `assert.h`
- Solo se mostrarán mensajes cuando una prueba falle
- Cada función tiene múltiples casos de prueba que cubren diferentes escenarios

## Lista de Ejercicios

1. Challenge01: Operaciones básicas de suma
2. Challenge02: Calculadora con operaciones básicas (suma, resta, multiplicación, división)
   - Manejo de errores en división por cero
   - Pruebas con números positivos y negativos

## Cómo Contribuir

1. Haz fork del repositorio
2. Crea una rama para tus cambios
3. Realiza tus modificaciones
4. Asegúrate de que todas las pruebas pasen
5. Envía un pull request

## Requisitos

- Compilador GCC
- Make
- Git

## Notas Importantes

- No modifiques los archivos de prueba
- Cada función debe manejar correctamente los casos edge
- Sigue las buenas prácticas de programación en C
- Comenta tu código cuando sea necesario

---
¡Buena suerte corrigiendo los ejercicios! 🚀
