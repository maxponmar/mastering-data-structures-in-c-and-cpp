#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5];

    A[0] = 12;
    A[1] = 15;
    A[2] = 25;

    printf("%d\n",sizeof(A));
    printf("%d\n",A[1]);

    int B[] = {2,4,6,8,10};
    printf("%d\n",sizeof(B));

    for(int i=0; i<5; i++) {
        printf("%d ", B[i]);
    }

    return 0;
}
