#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char x;
};


int main()
{
    int a = 10;
    int *p;
    p = &a;


    printf("Using pointer %d\n", *p);
    printf("Printing address %d %d\n", p, &a);
    cout << p << endl;
    cout << a << endl;

    printf("=========\n");
    int A[5] = {2,4,6,8,10};
    int *P;
    // Array variables already are pointers (Pointing to the first element of the array)
    P=A;

    for(int i=0; i<5; i++)
    {
        cout<<&P[i]<<endl;
    }

    int *h;
    // C
    h = (int *)malloc(5*sizeof(int));
    // C++
    //h = new int[5];
    h[0] = 10;
    h[1] = 15;
    h[2] = 20;
    h[3] = 25;
    h[4] = 30;

    for(int i=0; i<5; i++)
    {
        cout<<h[i] << " " << &h[i] <<endl;
    }
    // Free memory after you used it.
    // Free memory in C
    free(h);
    // Free memory in C++
    //delete [] h;

    int *p1;
    float *p2;
    char *p3;
    double *p4;
    struct Reactangle *p5;

    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;
    return 0;
}
