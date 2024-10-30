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
2. Navigate to the project directory:
   ```bash
   cd libft
3. Run make to build the library:
   ```bash
   make

## Functions Overview

Below are the core functions implemented in the Libft library, each recreated to provide functionality that’s frequently used in C projects.

### Standard Library Functions

- **ft_memset**: Fills a block of memory with a specific value, byte by byte.
- **ft_bzero**: Zeros out a block of memory, setting each byte to `0`.
- **ft_memcpy**: Copies a block of memory from a source to a destination.
- **ft_memmove**: Similar to `ft_memcpy`, but safely handles overlapping memory regions.
- **ft_memchr**: Searches for a specific byte within a block of memory.
- **ft_memcmp**: Compares two blocks of memory and returns the difference.
- **ft_strlen**: Returns the length of a string, not counting the null terminator.
- **ft_strdup**: Duplicates a string by allocating memory and copying the original string.
- **ft_strcpy**: Copies a string from source to destination, including the null terminator.
- **ft_strncpy**: Similar to `ft_strcpy`, but limits the number of characters copied.
- **ft_strcat**: Appends one string to the end of another, modifying the original string.
- **ft_strncat**: Similar to `ft_strcat`, but appends a limited number of characters.
- **ft_strchr**: Locates the first occurrence of a character in a string.
- **ft_strrchr**: Locates the last occurrence of a character in a string.
- **ft_strstr**: Finds the first occurrence of a substring within a string.
- **ft_strncmp**: Compares up to `n` characters of two strings.
- **ft_atoi**: Converts a string to an integer, handling optional leading whitespace and signs.
- **ft_isalpha**: Checks if a character is alphabetic.
- **ft_isdigit**: Checks if a character is a digit (0-9).
- **ft_isalnum**: Checks if a character is alphanumeric (alphabetic or numeric).
- **ft_isascii**: Checks if a character is in the ASCII table.
- **ft_isprint**: Checks if a character is printable (visible, including space).
- **ft_tolower**: Converts an uppercase letter to lowercase.
- **ft_toupper**: Converts a lowercase letter to uppercase.

### Additional Functions

- **ft_substr**: Extracts a substring from a string, given a starting index and length.
- **ft_strjoin**: Concatenates two strings into a newly allocated string.
- **ft_strtrim**: Removes leading and trailing whitespace characters from a string.
- **ft_split**: Splits a string into an array of substrings, based on a given delimiter.
- **ft_itoa**: Converts an integer to a string representation.
- **ft_strmapi**: Applies a function to each character of a string to produce a modified string.
- **ft_putchar_fd**: Writes a character to a specified file descriptor.
- **ft_putstr_fd**: Writes a string to a specified file descriptor.
- **ft_putendl_fd**: Writes a string followed by a newline to a specified file descriptor.
- **ft_putnbr_fd**: Writes an integer to a specified file descriptor.

### Linked List Functions

- **ft_lstnew**: Creates a new list element with specified content.
- **ft_lstadd_front**: Adds an element to the beginning of a linked list.
- **ft_lstadd_back**: Adds an element to the end of a linked list.
- **ft_lstsize**: Returns the number of elements in a linked list.
- **ft_lstlast**: Returns the last element of a linked list.
- **ft_lstdelone**: Frees a single element of a list, using a specified function.
- **ft_lstclear**: Deletes and frees an entire linked list.
- **ft_lstiter**: Iterates over each element in a list and applies a function to it.
- **ft_lstmap**: Creates a new list by applying a function to each element of an existing list.

This overview helps showcase the scope of functions provided by Libft, covering string manipulation, memory handling, and linked list operations.
