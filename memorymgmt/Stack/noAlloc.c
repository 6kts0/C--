// When a variable is not allocated to the heap, stack allocation occurs automatically when the function is called and freed when the function returns
#include <stdlib.h>
#include <stdio.h>

int main() {
    int P = 42;

    printf("P Memory Address: %p \n", P);
    printf("P: %d \n", P);

return 0;
}