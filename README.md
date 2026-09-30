_This project has been created as part of the 42 curriculum by alexgonz_

#Libft

This project proposes the recreation of some of the most basic but useful functions in C. They are mostly based on the libc library, eventhough there are some other addons which are describes here

This project has its own Makefile, which compiles with the flags -Wall -Wextra -Werror, to ensure a good and efficient work. The library is created with the command ar rcs (also in the Makefile), and finally, it all uses a header file, that containts the prorotype of the following functions, including the necessary libraries and typedef.

More specifically, the Makefile has got the following commands:
  -all: compiles all the object files and creates the library
  -clean: deletes all the object files
  -fclean: deletes the object files and static library
  -re: deletes the object files and library and compiles from scratch

About the functions:
- ft_atoi - converts a string into an int
- ft_bzero - sets n bytes from a string into '\0'
- ft_calloc - reserves and initializes a memory array
- ft_isalnum - checks whether is numerical or alphabetical
- ft_isalpha - checks whether is alphabetical
- ft_isascii - checks whether is a valid ascii character
- ft_isdigit - checks whether is numerical
- ft_isprint - checks whether is printable
- ft_itoa - converts an int into a string
- ft_lstadd_back - adds a node on the back of a linked list
- ft_lstadd_front - adds a node as the head of a linked list
- ft_lstclear - deletes and frees a linked list
- ft_delone - deletes and frees a node of a linked list
- ft_lstiter - applies a function to a linked list
- ft_lstlast - returns the last node of a linked list
- ft_lstmap - changes the values of a linked list for its results after passing a function
- ft_lstnew - creates a node
- ft_lstsize - checks the length of a linked list
- ft_memchr - searchs for a character in a string
- ft_memcmp - compares n bytes of two strings
- ft_memcpy - copies n bytes from a string to another
- ft_memmove - copies n bytes from a string to another, supporting overlapping
- ft_memset - sets n bytes from a string to a character
- ft_putchar_fd - writes a character on a file
- ft_putendl_fd - writes a string followed by a newline on a file
- ft_putnbr_fd - writes a number on a file
- ft_putstr_fd - writes a string on a file
- ft_split - splits a string into smaller where there is a specified character
- ft_strchr - searchs if a character is in a string
- ft_strdup - creates a copy of a string
- ft_striter - applies a function to each character from a string
- ft_strjoin - joins two strings into a bigger one
- ft_strlcat - concatenates two strings and returns the ideal length
- ft_strlcpy - copies a string into another and return the ideal length
- ft_strlen - counts the length of a null terminated string
- ft_strmapi - changes the values of a string into its result after applying a function
- ft_strncmp - compares two strings up to n characters
- ft_strnstr - checks if a string is into another up to n characters
- ft_strrchr - checks if a character is into a string backwards
- ft_strtrim - deletes a certain character from a string
- ft_substr - creates a smaller string from a bigger one
- ft_tolower - sets all the uppercase into lowercase
- ft_toupper - sets all the lowercase into uppercase

AI has not been used directly into this project. All information and help needed where extracted from the manuals given by various learning or informative tools, and online forums dedicated to the doubts that were required.
