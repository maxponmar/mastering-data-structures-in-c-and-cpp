#include <iostream>

using namespace std;

int add(int a)
{
    a++;
    cout<<a<<endl;
    return 0;
}

void swap1(int *x, int *y)
{
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}

void swap2(int &x, int &y)
{
    int temp;
    temp = x;
    x=y;
    y=temp;
}

int main()
{
    int a =10;
    add(10);
    cout << a << endl;


    int num1=10,num2=20;

    cout<< "First number: " << num1 << endl;
    cout<< "Second number: " << num2 << endl;

    swap1(&num1,&num2);
    cout << "Swapping..." << endl;

    cout<< "First number: " << num1 << endl;
    cout<< "Second number: " << num2 << endl;

    cout<< "=== Using pass by reference (only C++) ==="<< endl;

    cout<< "First number: " << num1 << endl;
    cout<< "Second number: " << num2 << endl;

    swap2(num1,num2);
    cout << "Swapping..." << endl;

    cout<< "First number: " << num1 << endl;
    cout<< "Second number: " << num2 << endl;
    return 0;
}
