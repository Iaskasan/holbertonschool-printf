
# C - printf


## Objective
Create the printf function

**Prototype:** int _printf(const char *, ...);

## Requirements

* Allowed editors: vim or emacs.
* All the files will be compiled on Ubuntu 20.04 LTS using gcc.
* The code should use the betty style.
* Global variables are not allowed.
* No more than 5 functions per file.
* The prototypes of all th functions should be included in the header file called main.h.
* The header files should be include guarded.

## Mandatory Tasks
* Write function that produces output with conversion specifiers c, s, and %.
* Handle conversion specifiers d, i.
* Create a man page for your function.

## Compilation command
  `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`
  
## Examples
**String**

* **Input:** _printf("%s\n", 'Hello World');
* **Output:** Hello World.
 
**Character**
  
* **Input:** _printf("The first letter of Hello World is %c\n", 'H');
* **Output:** The first letter of Hello World is H

**Integer:**

* **Input:** _printf("I'm %i years old\n", 25);
* **Output:** I'm 25 years old

**Decimal:**

* **Input:** _printf("%d\n", 2000);
* **Output:** 2000
