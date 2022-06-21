#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void func(struct Rectangle r)
{
    r.length=20;
    cout<<"Length "<<r.length<<endl<<"Breadth "<<r.breadth<<endl;
}

void func2(struct Rectangle *r)
{
    r->length=66;
    cout<<"Length "<<r->length<<endl<<"Breadth "<<r->breadth<<endl;
}

struct Rectangle* func3()
{
    struct Rectangle *p;
    p=new Rectangle;

    p->length=15;
    p->breadth=7;

    return p;
}


int main()
{
    struct Rectangle r={10,5};
    printf("Length %d \nBreadth %d\n",r.length,r.breadth);
    func(r);
    func2(&r);


    cout << "=======" <<endl;

    struct Rectangle *ptr = func3();
    func2(ptr);
    free(ptr);
    return 0;
}
