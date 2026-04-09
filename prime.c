#include <stdio.h>
#include <stdlib.h>

int primee(int num) {
    int i;
    for (i=2; i<=num/2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int *ptr, *ptrr;
    int N,i,count=0;

    printf("Enter number of elements: ");
    scanf("%d", &N);

    ptr = (int *)malloc(N*sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
    }
    else {
        printf("Enter %d integers:\n", N);
        for (i =0; i<N; i++) {
            scanf("%d", &ptr[i]);
        }
        
        ptrr = (int *)malloc(N * sizeof(int));

        if (ptrr == NULL) {
            printf("Memory allocation failed!\n");

        }
        else {
            for (i=0; i<N; i++) {
                if (primee(ptr[i])) {
                    ptrr[count] = ptr[i];
                    count++;
                }
            }

            printf("Prime numbers are:\n");
            for (i = 0; i<count; i++) {
                printf("%d ", ptrr[i]);
            }

            if (count==0) 
            {
                printf("No prime numbers.\n");
            
            }
            free(ptr);
            free(ptrr);
        }
    }

    return 0;
}