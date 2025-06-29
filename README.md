# Libft

This repository contains `libft`, my first C library developed during the 42 Roma Luiss Common Core curriculum.

## What is Libft?

Libft is a foundational project where I recreated functions from the C standard library (`libc`) from scratch in pure C.
It includes standard functions like `strlen`, `memcpy` and others, plus additional utility functions and an optional bonus part with linked list operations.

The goal is to build a reusable static library that can be linked to future C projects, while practicing modularity, memory management, and clean coding according to the 42 Norm.

## Project Objectives

- Reimplement standard libc functions with an `ft_` prefix
- Work with pointers, dynamic memory allocation, and edge cases
- Create and manage a Makefile for building the library
- Bonus: implement singly linked lists using a custom `t_list` struct

## Folder Structure

```
.
├── libft.h
├── ft_*.c
├── Makefile
```

## How to Use

- Run `make` to compile the static library `libft.a`
- Include `libft.h` in your own C project files
- Link `libft.a` when building your project

## Skills Learned

- Low-level C programming fundamentals
- Pointer manipulation and memory management
- Writing and organizing reusable code
- Understanding the basics of building static libraries
- Working with Makefiles to automate compilation

## Author

Developed by Piero Scarcina  
LinkedIn: https://www.linkedin.com/in/tuo-profilo

Project completed as part of the 42 Roma Luiss Common Core.
