
#include  <stdio.h>

void findSingle(int *array, int len) {
    int i;
    int result = 0;
    
    for ( i = 0; i < len; i++ )
        result = result ^ array[i];
    
    printf("The non-duplicate value is: %d\n", result);
}

int main(void)
{
    int array[] = { 1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5 };
    findSingle(array, 11);
    
    return 0;
}
