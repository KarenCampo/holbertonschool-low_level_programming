				TASK 0x15. C

# *File I/O*


## Some Resources
 
 * [Systems Programming in C](https://www.cs.cmu.edu/~guna/15-123S11/Lectures/Lecture24.pdf)
 * [How a Linux System Call Works](https://www.youtube.com/watch?v=FkIWDAtVIUM)
 * [Input-output system calls in C | Create, Open, Close, Read, Write](https://www.geeksforgeeks.org/input-output-system-calls-c-create-open-close-read-write/) 
 * [C Programming in Linux Tutorial #024 - open() read() write() Functions](https://www.youtube.com/watch?v=dP3N8g7h8gY)
 * [File descriptor](https://en.wikipedia.org/wiki/File_descriptor)
 * [Manpage of open and openat](http://manpages.ubuntu.com/manpages/trusty/man2/openat.2freebsd.html)
* [Pening and Closing Files](https://www.aquaphoenix.com/ref/gnu_c_library/libc_129.html)

## Some Requirement

* Programs and Functions will be compiled with **gcc 4.8.4**
* All files will be compiled on **Ubuntu 14.04 LTS**
* The prototypes of all of the functions and the prototype of the function _putchar should be included in your header file called **holberton.h**
*  No more than 5 functions per file
* The only C standard library functions allowed are **malloc**, **free** and **exit**. Any use of functions like **printf**, **puts**, **calloc**, **realloc** etc is forbidden
* Allowed syscalls: **read**, **write**, **open**, **close**
* You are allowed to use **_putchar**
* **Tip**: always prefer using symbolic constants (**POSIX**) vs numbers when it makes sense. For instance read(**STDIN_FILENO**, ... vs read(**0**, ...

## Learning Objectives

* How to create, **open**, **close**, **read** and **write** files
* What are file descriptors
* What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
* How to use the I/O system calls open, close, read and write
* What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
* What are file permissions, and how to set them when creating a file with the open system call
* What is a system call
* What is the difference between a function and a system call  

### How to create, Open, Close, Read and Write Files

#### How to Create a File

Whenever you want to work with a file, the first step is to create a file. A file is nothing but space in a memory where data is stored.

To create a file in a 'C' program following syntax is used,
~~~
FILE *fp;
fp = fopen ("file_name", "mode");
~~~
In the above syntax, the file is a data structure which is defined in the standard library.

fopen is a standard function which is used to open a file.

If the file is not present on the system, then it is created and then opened.
If a file is already present on the system, then it is directly opened using this function.
fp is a file pointer which points to the type file.

Whenever you open or create a file, you have to specify what you are going to do with the file. A file in 'C' programming can be created or opened for reading/writing purposes. A mode is used to specify whether you want to open a file for any of the below-given purposes. Following are the different types of modes in 'C' programming which can be used while working with a file.

#### How to Close a file

One should always close a file whenever the operations on file are over. It means the contents and links to the file are terminated. This prevents accidental damage to the file.

'C' provides the fclose function to perform file closing operation. The syntax of fclose is as follows,

fclose (file_pointer);
Example:
~~~
FILE *fp;
fp  = fopen ("data.txt", "r");
fclose (fp);
~~~
The fclose function takes a file pointer as an argument. The file associated with the file pointer is then closed with the help of fclose function. It returns 0 if close was successful and EOF (end of file) if there is an error has occurred while file closing.

After closing the file, the same file pointer can also be used with other files.

In 'C' programming, files are automatically close when the program is terminated. Closing a file manually by writing fclose function is a good programming practice.

#### Writing to a File


In C, when you write to a file, newline characters '\n' must be explicitly added.

The stdio library offers the necessary functions to write to a file:

fputc(char, file_pointer): It writes a character to the file pointed to by file_pointer.
fputs(str, file_pointer): It writes a string to the file pointed to by file_pointer.
fprintf(file_pointer, str, variable_lists): It prints a string to the file pointed to by file_pointer. The string can optionally include format specifiers and a list of variables variable_lists.
The program below shows how to perform writing to a file:

fputc() Function:
~~~
#include <stdio.h>
int main() {
        int i;
        FILE * fptr;
        char fn[50];
        char str[] = "Guru99 Rocks\n";
        fptr = fopen("fputc_test.txt", "w"); // "w" defines "writing mode"
        for (i = 0; str[i] != '\n'; i++) {
            /* write to file using fputc() function */
            fputc(str[i], fptr);
        }
        fclose(fptr);
        return 0;
    }
~~~

#### Reading data from a File

There are three different functions dedicated to reading data from a file

fgetc(file_pointer): It returns the next character from the file pointed to by the file pointer. When the end of the file has been reached, the EOF is sent back.
fgets(buffer, n, file_pointer): It reads n-1 characters from the file and stores the string in a buffer in which the NULL character '\0' is appended as the last character.
fscanf(file_pointer, conversion_specifiers, variable_adresses): It is used to parse and analyze data. It reads characters from the file and assigns the input to a list of variable pointers variable_adresses using conversion specifiers. Keep in mind that as with scanf, fscanf stops reading a string when space or newline is encountered.
The following program demonstrates reading from fputs_test.txt file using fgets(),fscanf() and fgetc () functions respectively :

~~~
#include <stdio.h>
int main() {
        FILE * file_pointer;
        char buffer[30], c;

        file_pointer = fopen("fprintf_test.txt", "r");
        printf("----read a line----\n");
        fgets(buffer, 50, file_pointer);
        printf("%s\n", buffer);

        printf("----read and parse data----\n");
        file_pointer = fopen("fprintf_test.txt", "r"); //reset the pointer
        char str1[10], str2[2], str3[20], str4[2];
        fscanf(file_pointer, "%s %s %s %s", str1, str2, str3, str4);
        printf("Read String1 |%s|\n", str1);
        printf("Read String2 |%s|\n", str2);
        printf("Read String3 |%s|\n", str3);
        printf("Read String4 |%s|\n", str4);

        printf("----read the entire file----\n");

        file_pointer = fopen("fprintf_test.txt", "r"); //reset the pointer
        while ((c = getc(file_pointer)) != EOF) printf("%c", c);

        fclose(file_pointer);
        return 0;
    }
~~~


### What is a File Descriptor (FD)

In simple words, when you open a file, the operating system creates an entry to represent that file and store the information about that opened file. So if there are 100 files opened in your OS then there will be 100 entries in OS (somewhere in kernel). These entries are represented by integers like (...100, 101, 102....). This entry number is the file descriptor. So it is just an integer number that uniquely represents an opened file in operating system. If your process opens 10 files then your Process table will have 10 entries for file descriptors.

A kernel creates a file descriptor whenever it encounters an open call. In many ways, the gateway into the kernels abstractions of underlying hardware can be considered as file descriptors. In the Unix operating system, the standard input is represented by file descriptor 0, the standard output is represented by file descriptor 1 and standard error file is represented by file descriptor 2. In other words, corresponding to the three standard streams, each UNIX process would have three standard file descriptors. Both streams and file descriptors can represent a device connection, however for controlling specific devices, file descriptors need to be used. In most operating systems such as UNIX, file descriptors are represented as objects of type int. The file descriptor is used by the kernel as an index in the file description table in order to determine which process originally opened a specific file and then allow performing the requested operations on the opened device or file.

From an application programming perspective, file descriptors need to be used if there are any input or output operations in special modes, including non-blocking inputs. Unlike streams which provide high functions for controlling, a file descriptor interface provides only simple functions for the transfer of character blocks. Low-level operations can be performed directly on the file descriptor.

### What are the 3 standar File Descriptors: 

Each Unix process (except perhaps a daemon) should expect to have three standard POSIX file descriptors, corresponding to the three standard streams:

* STDIN_FILENO (is the standar input - stdin) its integer value is 0
* STDOUT_FILENO (is the standard output - stdout) its integer value is 1
* STDERR_FILENO (is the standar error - stderr) its integer value is 2


