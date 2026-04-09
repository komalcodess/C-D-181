#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int N, M, i;
    int sum = 0;

    printf("Enter the total number of integers: ");
    scanf("%d", &N);

    ptr = (int *)malloc(N*sizeof(int));

    if (ptr==NULL) 
        printf("Memory allocation failed!\n");
    
    printf("Enter %d integers:\n", N);
    for (i =0; i <N; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("Enter the number of integers you want to add: ");
    scanf("%d", &M);

    int *temp;
    temp= (int *)realloc(ptr, (N + M) * sizeof(int));

    if (temp == NULL) {
        printf("Memory reallocation failed!\n");
        free(ptr);
    }

    ptr = temp;

    printf("Enter %d more integers:\n", M);
    for (i = N; i < N + M; i++) {
        scanf("%d", &ptr[i]);
    }

    for (i =0; i <N+M; i++) {
        sum += ptr[i];
    }

    printf("Sum of all %d integers = %d\n", N + M, sum);
    free(ptr);

}