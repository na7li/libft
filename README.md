# Libft – Recreating Standard C Library Functions

Welcome to my **Libft** project! This repository is part of the **42 Network Common Core curriculum**, and it's one of the first projects that introduces students to the fundamentals of **C programming**, including **memory management**, **string manipulation**, and **data structures**.

## 📚 Project Description

The **Libft project** consists of building a **custom C library** by re-implementing many of the functions from the **standard C library (libc)**. The goal is to deepen your understanding of low-level programming, pointers, memory allocation, and general **problem-solving in C**.

This library will later be reused in future projects like `ft_printf`, `get_next_line`, and more.

---

## 🛠️ Skills Learned

- Mastering **C language basics**
- Using **pointers** and **arrays**
- Handling **memory allocation** (`malloc`, `free`)
- Writing clean, modular code following **Norminette** standards
- Understanding **string and memory manipulation**
- Building **reusable components** for future C projects

---

## 🧩 Functions Implemented

Libft is split into several parts:

### Part 1 – Libc Functions Reimplementation

| Function Name | Description |
|---------------|-------------|
| `ft_isalpha`  | Check if character is alphabetic |
| `ft_isdigit`  | Check if character is a digit |
| `ft_isalnum`  | Check if character is alphanumeric |
| `ft_isascii`  | Check if character is an ASCII character |
| `ft_isprint`  | Check if character is printable |
| `ft_strlen`   | Get length of a string |
| `ft_memset`   | Fill memory with a constant byte |
| `ft_bzero`    | Zero out a memory block |
| `ft_memcpy`   | Copy memory area |
| `ft_memmove`  | Copy memory area with overlapping |
| `ft_strlcpy`  | Copy string with size limit |
| `ft_strlcat`  | Concatenate strings with size limit |
| `ft_toupper`  | Convert character to uppercase |
| `ft_tolower`  | Convert character to lowercase |
| `ft_strchr`   | Locate first occurrence of a character in a string |
| `ft_strrchr`  | Locate last occurrence of a character in a string |
| `ft_strncmp`  | Compare two strings up to n characters |
| `ft_memchr`   | Scan memory for a character |
| `ft_memcmp`   | Compare memory areas |
| `ft_strnstr`  | Locate a substring in a string |
| `ft_atoi`     | Convert string to integer |
| `ft_calloc`   | Allocate memory and initialize to zero |
| `ft_strdup`   | Duplicate a string |

### Part 2 – Additional Functions

| Function Name | Description |
|---------------|-------------|
| `ft_substr`   | Extract a substring from a string |
| `ft_strjoin`  | Join two strings |
| `ft_strtrim`  | Trim characters from start and end of a string |
| `ft_split`    | Split a string into an array by delimiter |
| `ft_itoa`     | Convert integer to string |
| `ft_strmapi`  | Apply function to each character of a string |
| `ft_striteri` | Apply function to each character with index |
| `ft_putchar_fd` | Output character to a file descriptor |
| `ft_putstr_fd`  | Output string to a file descriptor |
| `ft_putendl_fd` | Output string followed by newline |
| `ft_putnbr_fd`  | Output number to a file descriptor |

### Bonus Part – Linked List Utilities

| Function Name     | Description |
|-------------------|-------------|
| `ft_lstnew`       | Create new list node |
| `ft_lstadd_front` | Add node to beginning of list |
| `ft_lstsize`      | Get number of nodes in list |
| `ft_lstlast`      | Get last node of list |
| `ft_lstadd_back`  | Add node to end of list |
| `ft_lstdelone`    | Delete one node |
| `ft_lstclear`     | Delete entire list |
| `ft_lstiter`      | Apply function to each node |
| `ft_lstmap`       | Map function over list and return new list |

---

## 🚀 How to Use
#### 1 - Clone the repository
```bash
https://github.com/na7li/libft.git
```

#### 2 - Enter the project folder and run `make`
```bash
cd libft/libft
make
```

#### 3 - To use in your code, include the header
```c
#include "libft.h"
```

#### MAKEFILE RULES

`make` or `make all` - Compile libft **mandatory** files.

`make bonus` - Compile libft **bonus** files.

`make clean` - Delete all .o (object files) files.

`make fclean` - Delete all .o (object file) and .a (executable) files.

`make re` - Use rules `fclean` + `all`.

## NORMINETTE
> At 42 School, it is expected that almost every project is written following the Norm, which is the coding standard of the school.

```
- No for, do...while, switch, case, goto, ternary operators, or variable-length arrays allowed;
- Each function must be a maximum of 25 lines, not counting the function's curly brackets;
- Each line must be at most 80 columns wide, with comments included;
- A function can take 4 named parameters maximum;
- No assigns and declarations in the same line (unless static);
- You can't declare more than 5 variables per function;
- ...
```

## 📬 Contact
Feel free to reach out via LiknedIn.com/nahli for questions, feedback, or collaboration.
