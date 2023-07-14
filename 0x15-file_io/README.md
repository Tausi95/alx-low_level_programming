0X15.C FILE I/O
File Handling Programs
This repository contains a collection of file handling programs implemented in C. These programs allow you to perform various operations on files,
such as reading, creating, appending, and copying files. Each program focuses on a specific file handling task and provides a command-line interface for ease of use.

Programs
0-read_text_file
The 0-read_text_file program reads the contents of a text file and prints them to the standard output. It takes two command-line arguments: the name of the file to read
and the number of characters to read from the file. The program reads the specified number of characters from the file and prints them to the standard output.
If the file cannot be read or the number of arguments is incorrect, appropriate error messages are displayed.

1-create_file
The 1-create_file program creates a new file and writes text content to it. It takes two command-line arguments: the name of the file to create and the text content to write into the file.
The program creates the file with read and write permissions and writes the specified text content into it. If the file cannot be created or written to, appropriate error messages are displayed.

2-append_text_file
The 2-append_text_file program appends text content to an existing file. It takes two command-line arguments: the name of the file to append and the text content to append to the file.
The program opens the file in append mode and appends the specified text content to the end of the file. If the file cannot be opened or written to, appropriate error messages are displayed.

3-cp
The 3-cp program copies the contents of one file to another file. It takes two command-line arguments: the name of the source file and the name of the destination file.
The program reads the content from the source file and writes it to the destination file. If the number of arguments is incorrect or any file operation fails, appropriate error messages are displayed.

