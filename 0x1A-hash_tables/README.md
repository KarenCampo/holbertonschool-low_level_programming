# Project 0x1A. C - Hash tables

## Resources

* [What is a HashTable Data Structure - Introduction to Hash Tables , Part 0](https://www.youtube.com/watch?v=MfhjkfocRR0)
* [Hash function](https://en.wikipedia.org/wiki/Hash_function)
* [Hash table](https://en.wikipedia.org/wiki/Hash_table)

##General Learning Objectives

* What is a hash function
* What makes a good hash function
* What is a hash table, how do they work and how to use them
* What is a collision and what are the main ways of dealing with collisions in the context of a hash table
* What are the advantages and drawbacks of using hash tables
* What are the most common use cases of hash tables

##General Requirements

* All files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* The code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* Global variables are not allowed
* No more than 5 functions per file
* The prototypes of all your functions should be included in the header file called hash_tables.h
* Dont forget to push the header file
* All the header files should be include guarded

## Python Dictionaries

 Python dictionaries are implemented using hash tables. When you will be done with this project, you will be able to better understand the power and simplicity of Python dictionaries. So much is actually happening when you type d = {'a': 1, 'b': 2}, but everything looks so simple for the user. Python doesnt use the exact same implementation than the one you will work on today though.

Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table. 

### Task 0. 
Write a function that creates a hash table.

### Task 1.
Write a hash function implementing the djb2 algorithm.

### Task 2.
Write a function that gives you the index of a key.

### Task 3.
Write a function that adds an element to the hash table.

### Task 4
Write a function that retrieves a value associated with a key.

### Task 5.
Write a function that prints a hash table.

### Task 6.
Write a function that deletes a hash table.

