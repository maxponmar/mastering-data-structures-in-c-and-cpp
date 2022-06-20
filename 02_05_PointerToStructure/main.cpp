#include <iostream>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct Rectangle r = {10,5};

    cout << r.length << endl;
    cout << r.breadth << endl;

    Rectangle *p = &r;
    cout << p->length << endl;
    cout << p->breadth << endl;

    Rectangle *p2;
    p2 = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p2->length = 100;
    p2->breadth = 99;
    cout << p2->length << endl;
    cout << p2->breadth << endl;
    return 0;
}
