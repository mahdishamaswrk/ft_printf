# ft_printf

## Overview

**ft_printf** is a project from the 42 School curriculum that consists of recreating the behavior of the standard C library function `printf`.

The goal of this project is to understand formatted output, variadic functions, and how data can be processed dynamically using C.

This project provides a custom implementation of `printf` capable of handling different conversion specifiers while respecting the constraints of the C language.

## Features

The implementation supports:

* Formatted text output
* Variadic arguments using `stdarg.h`
* Multiple conversion specifiers
* Character, string, integer, unsigned integer, hexadecimal, and pointer formatting
* Return value calculation matching the original `printf` behavior

## Supported Conversions

| Conversion | Description              |
| ---------- | ------------------------ |
| `%c`       | Character                |
| `%s`       | String                   |
| `%p`       | Pointer address          |
| `%d`       | Decimal integer          |
| `%i`       | Integer                  |
| `%u`       | Unsigned decimal integer |
| `%x`       | Lowercase hexadecimal    |
| `%X`       | Uppercase hexadecimal    |
| `%%`       | Percent sign             |

## Compilation

To compile the library:

```bash
make
```

This generates the static library:

```text
libftprintf.a
```

Available Makefile commands:

```bash
make        # Compile the project
make clean  # Remove object files
make fclean # Remove object files and library
make re     # Recompile everything
```

## Usage

Include the header file in your C project:

```c
#include "ft_printf.h"
```

Compile your program with the library:

```bash
cc main.c libftprintf.a
```

Example:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s!\n", "42");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 255);

    return (0);
}
```

Output:

```text
Hello 42!
Number: 42
Hexadecimal: ff
```

## Project Structure

```text
ft_printf/
├── Makefile
├── ft_printf.h
├── *.c
└── README.md
```

## Concepts Learned

Through this project, I improved my understanding of:

* Variadic functions
* Memory management
* String processing
* Format parsing
* Function pointers
* Modular programming
* Static libraries in C

## Challenges

Some of the main challenges of this project were:

* Parsing the format string correctly
* Managing different data types through variadic arguments
* Reproducing the behavior of the original `printf`
* Handling edge cases and special conversions

## Author

Mahdi Shamas

