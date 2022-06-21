#include <iostream>

using namespace std;

void func(int A[],int n)
{
    A[0]=33;
    //cout<<sizeof(A)/sizeof(int)<<endl;
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
}

int * func2(int size)
{
    int *p;
    p=new int[size];
    for(int i=0;i<size;i++)
        p[i]=i+1;
    return p;
}
int main()
{
    int A[]={2,4,6,8,10};
    int n=5;

    func(A,n);

    for(int x:A)
        cout<<x<<" ";
    //cout<<sizeof(A)/sizeof(int)<<endl;
    cout << endl;
    int *ptr,sz=5;
    ptr=func2(sz);
    for(int i=0;i<sz;i++)
        cout<<ptr[i]<<endl;
    free(ptr);
    return 0;
}
