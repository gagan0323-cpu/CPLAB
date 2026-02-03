#include <stdio.h>
#include <stdlib.h> 
int main() {
    int *ptr; 
    int size = 1; 
    ptr = (int*) malloc(size * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed.\\n");
        return 1; 
    }
    *ptr = 42;
    printf("The dynamically allocated value is: %d\\n", *ptr);
    free(ptr); 
     ptr = NULL;
    return 0;
}
