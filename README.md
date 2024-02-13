# Printff

## Project introduction

Welcome to the libftprintf project, a custom implementation of the printf function from the C standard library. As part of the 42 School curriculum, this project challenges you to recreate one of the most complex functions in the C library, focusing on specific conversions to deepen your understanding of variadic functions in C. The goal of ft_printf is not just to mimic the behavior of the original printf function but to explore the intricacies behind its implementation. Through this project, you will enhance your programming skills and gain valuable insights into the workings of variadic functions, all while adhering to the rigorous standards of the 42 School.


## Table of Contents

- [Project Name](#project-name)
- [Files to Submit](#files-to-submit)
- [Makefile Rules](#makefile-rules)
- [Authorized Functions](#authorized-functions)
- [Using libft](#using-libft)
- [Description](#description)
- [Conversion Specifications](#conversion-specifications)
- [Requirements](#requirements)
- [Implementation overview](#Implementation-overview)

## Project Name

- **Program Name:** libftprintf.a

## Files to Submit

- **Required Files:** Makefile, *.h, */*.h, *.c, */*.c
- **Library File:** libftprintf.a to be created at the root of your repository.

## Makefile Rules

- **Rules:** NAME, all, clean, fclean, re

## Authorized Functions

- **libc Functions:** malloc, free, write
- **Variadic Functions:** va_start, va_arg, va_copy, va_end
- **External Libraries:** Yes, using libft is allowed.

## Using libft

- This project permits the use of the `libft` library to assist with various functionalities.

## Description

- The goal is to write a library that contains the `ft_printf` function, mimicking the original `printf`.
- **Prototype:** `int ft_printf(const char *, ...);`
- **Key Requirements:**
  - Do not implement the original `printf` buffer management.
  - Implement the following conversions: cspdiuxX%
  - Your function will be compared against the original `printf`.
  - Use the `ar` command to create your library. The use of the `libtool` command is forbidden.

## Conversion Specifications

- `%c` Prints a single character.
- `%s` Prints a string (as defined by C standards).
- `%p` Prints a `void *` pointer in hexadecimal format.
- `%d` Prints a decimal (base 10) number.
- `%i` Prints an integer in base 10.
- `%u` Prints an unsigned decimal (base 10) number.
- `%x` Prints a hexadecimal (base 16) number in lowercase.
- `%X` Prints a hexadecimal (base 16) number in uppercase.
- `%%` To print the percent symbol.

## Requirements

- Your `libftprintf.a` library must be created at the root of your repository.
- You must use the `ar` command to create your library; using `libtool` is forbidden.


## Implementation overview

The `libftprintf` project involves a detailed recreation of the standard C library's `printf` function. This section dives into the core components of the project, outlining how each part contributes to the overall functionality of `ft_printf`. Through meticulous planning and coding, this project encompasses a range of features:

- **Variadic Functions Handling**: Leveraging C's variadic functions to dynamically handle an unknown number of arguments, which are essential for mimicking the `printf` behavior.

- **Conversion Functions**: Dedicated functions for each conversion specifier supported (`c`, `s`, `p`, `d`, `i`, `u`, `x`, `X`, and `%`). These functions are meticulously crafted to accurately perform conversions and formatting as per the specifications.

- **Modular Design**: The project is structured in a way that each conversion has its own function, facilitating easier testing, debugging, and maintenance.

- **Efficient String Handling**: Efficient management of strings and characters to ensure that the output matches the expected results of the `printf` function, including proper handling of null pointers and unsupported specifiers.

- **Memory Management**: Utilizes dynamic memory allocation judiciously, ensuring that the project remains efficient and leak-free.

- **Cross-Functionality with libft**: Incorporates functions from the `libft` project wherever possible, promoting code reuse and maintaining consistency with previously developed utilities.

- **Compliance with 42 School Norms**: Adheres strictly to the coding standards and project requirements set by the 42 School, including the prohibition of certain functions and adherence to specific compilation methods.

This implementation not only aims to replicate the functionality of `printf` but also serves as a comprehensive learning experience in C programming, focusing on the practical application of variadic functions, string manipulation, and memory management.

---
