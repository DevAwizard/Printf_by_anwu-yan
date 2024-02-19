

# 🖨️ My own printf function 🖨️

## Project introduction

Welcome to the libftprintf project, a custom implementation of the printf function from the C standard library. As part of the 42 School curriculum, this project challenges you to recreate one of the most complex functions in the C library, focusing on specific conversions to deepen your understanding of variadic functions in C. The goal of ft_printf is not just to mimic the behavior of the original printf function but to explore the intricacies behind its implementation. Through this project, you will enhance your programming skills and gain valuable insights into the workings of variadic functions, all while adhering to the rigorous standards of the 42 School.


## ⭐ Table of Contents ⭐

- [Project Name](#project-name)
- [Files to Submit](#files-to-submit)
- [Makefile Rules](#makefile-rules)
- [Authorized Functions](#authorized-functions)
- [Using libft](#using-libft)
- [Description](#description)
- [Conversion Specifications](#conversion-specifications)
- [Requirements](#requirements)
- [Understanding printf and Its Replication](#Understanding-printf-and-Its-Replication)
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


### Understanding printf and Its Replication

#### Overview of printf Function

The printf function is a standard output function in C, used to print formatted data to the stdout. It's defined in <stdio.h> and has the following prototype:

```c
int printf(const char *format, ...);
```

The format string includes text to be printed and format specifiers, which are placeholders for variables that will replace them. The ellipsis (...) indicates that printf can accept an arbitrary number of arguments after the format string, matching the format specifiers in both type and order.

#### How printf Works

- **Parsing the Format String**: printf reads the format string character by character, identifying format specifiers after each percent sign (%). These specifiers dictate how to interpret and format the subsequent arguments.

- **Fetching Arguments**: Based on the format specifier, printf fetches the next argument from the stack, ensuring the types of these arguments match the specified format.

- **Formatting and Printing**: Arguments are formatted according to their specifiers and added to the output buffer, with any remaining text in the format string also printed.

- **Handling Flags and Width**: Format specifiers can include flags, width, precision, and length modifiers, allowing for detailed formatting control, such as padding numbers with zeros.

- **Return Value:** printf returns the total number of characters written, excluding the null byte.


#### Replicating `printf`
To replicate printf, the following steps are necessary:

- **Parse Format Strings**: Implement a function to parse format strings and identify format specifiers, flags, width, precision, and length modifiers.

- **Fetch and Process Arguments**: Use C standard library functions like va_start, va_arg, and va_end to fetch and process arguments of various types.

- **Conversion to String Representations**: Convert arguments into their string representations according to the format specifiers.

- **Output Management**: Manage a buffer for assembling the output string before printing it to stdout.

- **Error Handling:** Ensure the function returns the number of characters printed or a negative value if an error occurs.

---
