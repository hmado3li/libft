# Libft - 42 Project

Libft is a custom library developed as part of the 42 curriculum, offering fundamental C functions commonly used across different projects. Building this library has been a great opportunity to dive deep into C programming concepts, memory management, and various stages of compilation.

## Table of Contents
- [Introduction](#introduction)
- [Concepts Covered](#concepts-covered)
- [Installation](#installation)
- [Usage](#usage)
- [File Structure](#file-structure)

## Introduction
Libft provides foundational C functions, mimicking and extending some standard library functionalities. This project improves understanding of key concepts in C programming, compiling, memory layout, and library usage.

## Concepts Covered

### 1. Memory Layout
   - **Memory Segments**: We explored how C programs are divided into segments such as `.text`, `.data`, `.bss`, heap, and stack.
   - **Memory Allocation**: Understanding how and when to allocate memory on the heap, the importance of `malloc` and `free`, and strategies for avoiding memory leaks.

### 2. Makefile
   - **Automating Compilation**: Using Makefiles to compile code efficiently, automatically rebuilding files when they change.
   - **Targets and Dependencies**: Defining clear steps for building, cleaning, and handling object files for dynamic and static libraries.

### 3. Compilation Stages
   - **Preprocessing, Compiling, Assembling, and Linking**: Learned how source code (.c) turns into an executable by going through preprocessing, compilation to object code, assembly, and linking stages.

### 4. Libraries
   - **Static Libraries (`.a` files)**: Created a static library from object files to reuse functions across projects without needing to recompile.
   - **Dynamic Libraries (`.so` files)**: Gained insight into dynamic linking, where functions are linked at runtime, saving memory space for larger projects.

### 5. Data Structures
   - **Linked Lists**: Implemented linked lists to dynamically store data with varying sizes and easily modify lists without reallocating memory.
   - **Arrays vs. Linked Lists**: Understood the advantages of linked lists over arrays for specific cases, such as dynamic memory allocation and faster insertions/deletions.
   - **Arrays of Pointers**: Used arrays of pointers to efficiently store references to functions or strings.

## Installation

1. Clone the repository:
   ```bash
   git clone <repo-url>
