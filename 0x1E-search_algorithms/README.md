Search Algorithms

This project contains implementations of various search algorithms and analyses of their time and space complexities.

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- No global variables allowed
- No more than 5 functions per file
- Only the `printf` function of the standard library is allowed. Any call to another function like `strdup`, `malloc`, etc., is forbidden.
- The prototypes of all your functions should be included in your header file called `search_algos.h`
- All your header files should be include guarded

## Files

### 0. Linear search
- **File:** `0-linear.c`
- **Prototype:** `int linear_search(int *array, size_t size, int value);`
- **Description:** Searches for a value in an array of integers using the Linear search algorithm.

### 1. Binary search
- **File:** `1-binary.c`
- **Prototype:** `int binary_search(int *array, size_t size, int value);`
- **Description:** Searches for a value in a sorted array of integers using the Binary search algorithm.

### 2. Big O #0
- **File:** `2-O`
- **Description:** Contains the time complexity (worst case) of a linear search in an array of size `n`.

### 3. Big O #1
- **File:** `3-O`
- **Description:** Contains the space complexity (worst case) of an iterative linear search algorithm in an array of size `n`.

### 4. Big O #2
- **File:** `4-O`
- **Description:** Contains the time complexity (worst case) of a binary search in an array of size `n`.

### 5. Big O #3
- **File:** `5-O`
- **Description:** Contains the space complexity (worst case) of a binary search in an array of size `n`.

### 6. Space Complexity of allocate_map Function
- **File:** `6-O`
- **Description:** Contains the space complexity (worst case) of the `allocate_map` function.

## Usage

To compile the code, use the following command:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 <source_file.c> -o <output_file>


Author: Chancy Tsonga [Effort Inc]
