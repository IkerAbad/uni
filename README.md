# Grado en Ingeniería Informática — Universidad de La Rioja

Código y prácticas del grado. Este repositorio contiene únicamente lo que se compila o se
ejecuta; los apuntes y el material de lectura viven fuera.

## Curso 2026-27 — Primero

| Asignatura | Carpeta | Lenguaje / herramienta |
|---|---|---|
| Metodología de la programación | `metodologia-programacion` | C++17 |
| Cálculo matricial y vectorial | `calculo-matricial` | SageMath sobre Jupyter |
| Sistemas informáticos | `sistemas-informaticos` | CPUSim |
| Tecnología de la programación | `tecnologia-programacion` | C++17 |
| Estructura de computadores | `estructura-computadores` | — |
| Bases de datos | `bases-de-datos` | SQL |

Las asignaturas sin componente de programación no aparecen aquí.

## Entorno

- **Compilador:** g++ (MSYS2 / UCRT64), C++17, con `-Wall -Wextra`
- **Editor:** VS Code. Las carpetas de C++ incluyen su `.vscode`:
  `Ctrl+Shift+B` compila, `F5` depura con gdb

## Estructura

```
asignatura/
├── .vscode/     configuración de compilación y depuración
├── Ejercicios/  práctica y pruebas personales, no se entrega
└── Entregas/    lo que se sube al aula virtual, una carpeta por práctica (P1, P2, ...)
```

## Convenciones

- Un commit por ejercicio o práctica terminada
- Los binarios no se versionan (ver `.gitignore`)
- Código comentado en español
