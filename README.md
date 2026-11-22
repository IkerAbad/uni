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

Las asignaturas sin componente de programación aparecen con «—» en la columna de herramienta.

## Qué hay ahora

- `metodologia-programacion`: 74 ejercicios en C++ (prácticas P1 a P8 y los ejercicios de tema `T2_EP`). 69 pasan la comprobación de sintaxis con g++ en C++17; los otros 5 (en P6, P7 y P8) son enunciados con huecos (`........`) que todavía no he completado. Parte del código de partida es de los profesores y así consta en sus cabeceras. Cada ejercicio trae su proyecto de Code::Blocks (`.cbp`).
- `sistemas-informaticos`: prácticas de HTML y CSS (`HTMLyCSS`) y un trabajo en grupo de tres personas (`TrabajoGrupal`) sobre almacenamiento, con ocho páginas en español y su versión en inglés.
- El resto de carpetas están preparadas y vacías.

## Entorno

- **Compilador:** g++ (MSYS2 / UCRT64), C++17, con `-Wall -Wextra`
- **Editor:** Code::Blocks 25.03 (entorno del curso; en el examen se usa el escritorio virtual
  del campus, que ya lo trae). VS Code también vale; su carpeta `.vscode/` es local y está
  ignorada por git, así que no se sube.

## Estructura

```
asignatura/
├── Ejercicios/  práctica personal: pruebas y ejercicios sueltos, no se entrega
└── Entregas/    solo trabajo propio acabado, cuando toca subirlo al aula virtual
```

## Convenciones

- Un commit por ejercicio o práctica terminada
- Los binarios no se versionan (ver `.gitignore`)
- Código comentado en español
- Todo cambio va por rama y pull request, con merge a `main`

## Licencia

Sin licencia por ahora: el repositorio mezcla mi trabajo con código de partida de los profesores y con un trabajo hecho en grupo, así que no puedo publicarlo todo bajo una misma licencia.

---

# Computer Science degree — University of La Rioja (English)

Code and practicals for the degree. This repository holds only what is compiled or run; notes and reading material live elsewhere.

## Academic year 2026-27 — First year

| Subject | Folder | Language / tool |
|---|---|---|
| Programming methodology | `metodologia-programacion` | C++17 |
| Matrix and vector calculus | `calculo-matricial` | SageMath on Jupyter |
| Computer systems | `sistemas-informaticos` | CPUSim |
| Programming technology | `tecnologia-programacion` | C++17 |
| Computer architecture | `estructura-computadores` | — |
| Databases | `bases-de-datos` | SQL |

Subjects with no programming component are listed with “—” in the tool column.

## What is here now

- `metodologia-programacion`: 74 C++ exercises (practicals P1 to P8 and the topic exercises `T2_EP`). 69 pass a syntax check with g++ in C++17; the other 5 (in P6, P7 and P8) are exercise sheets with blanks (`........`) that I have not completed yet. Some of the starting code comes from the teachers, as the file headers say. Each exercise includes its Code::Blocks project (`.cbp`).
- `sistemas-informaticos`: HTML and CSS practicals (`HTMLyCSS`) and a group project by three people (`TrabajoGrupal`) about storage, with eight pages in Spanish and an English version.
- The remaining folders are set up and empty.

## Environment

- **Compiler:** g++ (MSYS2 / UCRT64), C++17, with `-Wall -Wextra`
- **Editor:** Code::Blocks 25.03 (the course environment; in the exam the campus virtual desktop is used, which already has it). VS Code works too; its `.vscode/` folder is local and git-ignored, so it is not uploaded.

## Structure

```
subject/
├── Ejercicios/  personal practice: tests and loose exercises, not handed in
└── Entregas/    only finished own work, when it is due on the virtual classroom
```

## Conventions

- One commit per finished exercise or practical
- Binaries are not versioned (see `.gitignore`)
- Code commented in Spanish
- Every change goes through a branch and a pull request, merged into `main`

## License

No license for now: the repository mixes my work with starting code from the teachers and with a group project, so I cannot publish it all under a single license.

