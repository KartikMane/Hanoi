#include<iostream>
using namespace std;

void TOH(int n, int a,int b, int c)
{
    if(n>0)
    {
        TOH(n-1,a,c,b);
        printf("(%d to %d)",a,c);
        cout<<"\n";
        TOH(n-1,b,a,c);
    }
}

int main()
{
    TOH(6,1,2,3);
    return 0;
}