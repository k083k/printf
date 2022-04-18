# printf Project
Implementing printf function
The printf function prints data to the standard output in regards to a specified format

# Prototype
int _printf(const char *format, ...);

# Usage
* Prints a string to the standard output, according to a given format

* All files were created and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4 with the command gcc -Wall -Werror -Wextra -pedantic *.c
* Returns the number of characters in the output string on success, -1 otherwise
* Call it this way: _printf("format string", arguments...) where format string can contain conversion specifiers and flags, along with regular characters

# Examples

* _printf("Hello, ALX\n") prints "Hello, ALX", followed by a new line
* _printf("%s", "Heya") prints "Heya"
* _printf("This is a number: %d", 98) prints "This is a number: 98"
* _printf("%s", "Project") prints "Project"
