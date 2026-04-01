// -- EXAMPLE --
// The integer and char pointer point to a memory address. Malloc, from the standard library, allocates that space for the size of an integer (4 bytes) in this case. Then, space is allocated for the size of one 2 byte char, which is parametized. Notice the features of allocating memory for a char but instead specifying a size of 16 bits, just enough for a single 2 byte character. 

// The first print line outputs the pointers memory address.
// The second line outputs the actual value stored at that address.
// The third line outputs the size of the memory location. 
// The fourth line outputs the size of the value.


#include <stdlib.h>
#include <stdio.h>

int main() {
    int *P = malloc(sizeof(int));
    char *C = malloc(sizeof(__CHAR16_TYPE__));

    printf("\n*P memory address: %p\n", P);
    printf("*P: %d\n\n", *P); // Default integer value is outputted
    
    printf("C memory address: %p \n", C);
    printf("C: %c\n\n", *C); // Default char value is outputted

    *P = 66;
    printf("P memory address: %p \n", P);
    printf("P assigned int: %d\n", *P); // Assigned integer is outputted
    printf("P size: %zu\n\n", sizeof(*P));

    *C = 'x';
    printf("C memory address: %p \n", C);
    printf("C assigned char: %c\n", *C); // Assigned char is outputted
    printf("C size: %zu\n\n", sizeof(*C));

    free(P);
    free(C);

    char frd[] = "Variables P and C are free and no longer using previously allocated memory.\n";
    printf(frd);

return 0;
}   
