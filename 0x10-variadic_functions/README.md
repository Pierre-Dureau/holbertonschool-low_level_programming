# 0x10. C - Variadic functions

## Learning Objectives

### General
	What are variadic functions
	How to use va_start, va_arg and va_end macros
	Why and how to use the const type qualifier


## Tasks

### 0. Beauty is variable, ugliness is constant
Write a function that returns the sum of all its parameters.
### 1. To be is to be the value of a variable
Write a function that prints numbers, followed by a new line.

* Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
* where separator is the string to be printed between numbers
* and n is the number of integers passed to the function
* You are allowed to use printf
* If separator is NULL, don’t print it
* Print a new line at the end of your function
### 2. One woman's constant is another woman's variable
Write a function that prints strings, followed by a new line.

* Prototype: void print_strings(const char *separator, const unsigned int n, ...);
* where separator is the string to be printed between the strings
* and n is the number of strings passed to the function
* You are allowed to use printf
* If separator is NULL, don’t print it
* If one of the string is NULL, print (nil) instead
* Print a new line at the end of your function
### 3. To be is a to be the value of a variable
Write a function that prints anything.

* where format is a list of types of arguments passed to the function
	* c: char
	* i: integer
	* f: float
	* s: char * (if the string is NULL, print (nil) instead
* You can use a maximum of
	* 2 while loops
	* 2 if
	* 9 variables
### 4. Real programmers can write assembly code in any language
Write a 64-bit program in assembly that prints Hello, World, followed by a new line.

* You are only allowed to use the system call write (use int or syscall, not a call)
* Your program will be compiled using nasm and gcc (as follows)
