<div align="center">

  <h1>Libft</h1>
  <b>My first project at 42, it's a library with handy functions I'll be using for my other projects.</b>
  <br>
  <br>
  <center><b1>🤖 NEW : </b1></center>
  <b>[ft_printf](https://github.com/ael-mank/ft_printf)</b> : A function that mimics the real printf function.
  <br>
  <br>
   
  ![Static Badge](https://img.shields.io/badge/Score-%3125%2F100-green?style=for-the-badge&logo=42&labelColor=%23323030&color=%2381D2C7)
  ![Static Badge](https://img.shields.io/badge/Language-green?style=for-the-badge&logo=C&labelColor=%23323030&color=%2381D2C7)

---

</div>

## Introduction

This is my implementation of the standard C library functions as well as some additional ones that I find useful. The library is called Libft, and I created it as part of my learning journey at 42.

## Project Structure

Ensure you have the following files in your project directory:

- `Makefile`: To compile the project with various options.
- `include/libft.h`: Header files containing function prototypes and necessary declarations.
- `src/libft/*.c`: Source code files implementing the libft library.
- `src/ft_printf/*.c`: Source code files implementing the `ft_printf()` function and supporting functions.

## Makefile Commands

- `make`: Compiles the project and creates the `libft.a` library.
- `make bonus` : Adds the bonus linked lists functions to the library.
- `make printf` : Adds the ft_printf function to the library.
- `make help`: Displays a list of available commands.
- `make clean`: Removes object files, keeping only the source code.
- `make fclean`: Cleans the project by removing the compiled library and object files.
- `make re`: Performs a full recompilation by cleaning and then recompiling the project.

## Functions

| String Functions | Memory Functions | Linked List Functions |
| ---------------- | ---------------- | --------------------- |
| `ft_atoi.c`      | `ft_memchr.c`    | `ft_lstadd_back.c`    |
| `ft_itoa.c`      | `ft_memcmp.c`    | `ft_lstadd_front.c`   |
| `ft_strchr.c`    | `ft_memcpy.c`    | `ft_lstclear.c`       |
| `ft_strdup.c`    | `ft_memmove.c`   | `ft_lstdelone.c`      |
| `ft_striteri.c`  | `ft_memset.c`    | `ft_lstiter.c`        |
| `ft_strjoin.c`   |                  | `ft_lstlast.c`        |
| `ft_strlcat.c`   |                  | `ft_lstmap.c`         |
| `ft_strlcpy.c`   |                  | `ft_lstnew.c`         |
| `ft_strlen.c`    |                  | `ft_lstsize.c`        |
| `ft_strmapi.c`   |                  |                       |
| `ft_strncmp.c`   |                  |                       |
| `ft_strnstr.c`   |                  |                       |
| `ft_strrchr.c`   |                  |                       |
| `ft_strtrim.c`   |                  |                       |
| `ft_substr.c`    |                  |                       |
| `✨ ft_printf.c` |                  |                       |

## Usage

To use these functions, simply include the `libft.h` header file in your C code and compile it with the `libft.a` library.

```c
#include "libft.h"

int main() {
    // Your code using Libft functions here
    return 0;
}
```
