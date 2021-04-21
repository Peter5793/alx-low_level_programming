# Search Algorithms

## Resources
* [Search algorithm](https://alx-intranet.hbtn.io/rltoken/ap2kuRv8qrUMyQ0-MY3EXw)
* [Space complexity (1)](https://alx-intranet.hbtn.io/rltoken/QK9ENdoTyqGs0d4_M3XE3g)

### Objectives
* What is a search algorithm
* What is a linear search
* What is a binary search
* What is the best search algorithm to use depending on your needs

### Info on the Time Complexity format

* O(1)
* O(n)
* O(n!)
* n*m -> O(nm)
* n square -> O(n^2)
* sqrt n -> O(sqrt(n))
* log(n) -> O(log(n))
* n * log(n) -> O(nlog(n))

## Tasks
### Linear Search

Function that searches for a value in an array of integers using the [Linear search algorithm](https://alx-intranet.hbtn.io/rltoken/17RKhbmvh_u4ebCwaSxCxg)
* Prototype : int linear_search(int *array, size_t size, int value);
* Where array is a pointer to the first element of the array to search in
size is the number of elements in array
* And value is the value to search for
* Your function must return the first index where value is located
* If value is not present in array or if array is NULL, your function must return -1
* Every time you compare a value in the array to the value you are searching, you have to print this value.

```
0x1E-search_algorithms$ cat 0-main.c

#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
        int array[] = {
	        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
	    };
	        size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
	        return (EXIT_SUCCESS);
}
0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-linear.c -o 0-linear
0x1E-search_algorithms$ ./0-linear
Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Found 3 at index: 3

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Found 42 at index: 2

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [42]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [-1]
Value checked array[9] = [9]
Found 999 at index: -1
```
## Binary Search
A function that searches for a value in a sorted array of integers using the [Binary search algorithm](https://alx-intranet.hbtn.io/rltoken/SnveFJhSDE7o8bEx-kGGpA)

* Prototype : ```int binary_search(int *array, size_t size, int value);```

```
0x1E-search_algorithms$ cat 1-main.c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
        int array[] = {
	        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	    };
	        size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
	        return (EXIT_SUCCESS);
}

0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-binary.c -o 1-binary
@0x1E-search_algorithms$ ./1-binary
Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 0, 1, 2, 3
Searching in array: 2, 3
Found 2 at index: 2

Searching in array: 0, 1, 2, 3, 4
Searching in array: 3, 4
Searching in array: 4
Found 5 at index: -1

Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 5, 6, 7, 8, 9
Searching in array: 8, 9
Searching in array: 9
Found 999 at index: -1
```