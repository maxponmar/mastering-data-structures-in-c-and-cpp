#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length;
    int breadth;
    char x;
};

int main()
{
    struct Rectangle r1 = {10,5};


    printf("%d\n", sizeof(r1));

    r1.length = 1;
    r1.breadth = 5;

    printf("l:%d b:%d\n", r1.length, r1.breadth);
    return 0;
}
