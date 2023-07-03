0x12. C - Singly linked lists

# Coding Practice - Recent Session

This repository contains the code solutions and functions we worked on during the recent coding practice session. Below is a brief summary of the codes implemented:

## print_list Function

### File: print_list.c

This file contains an implementation of the `print_list` function, which is responsible for printing the elements of a linked list.

The `print_list` function takes a pointer to the head of the linked list as a parameter and prints each node's string value along with its length. If a node's string is NULL, it prints "(nil)".

## list_len Function

### File: list_len.c

The `list_len` function calculates the number of elements in a linked list.

It takes a pointer to the head of the linked list as a parameter and iterates through the list, incrementing a count for each node encountered. The function returns the total count of nodes in the list.

## add_node_end Function

### File: add_node_end.c

The `add_node_end` function appends a new node at the end of a linked list.

It takes a double pointer to the head of the list and a string as parameters. The function dynamically allocates memory for a new node, duplicates the input string, and stores it in the new node. The new node is then added at the end of the list, either becoming the head (if the list is empty) or appended after the last node.

If the memory allocation or string duplication fails, the function returns NULL. Otherwise, it returns the address of the new node.

## File Structure

The repository has the following file structure:

.
├── print_list.c
├── list_len.c
├── add_node_end.c
 ---free_list.c
└── README.md

