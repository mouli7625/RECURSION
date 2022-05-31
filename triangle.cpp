#include<iostream>
using namespace std;
int triangle(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n+triangle( n-1);
    }
}
int main()
{
    int n, z=0;
    cin>>n;
    z= triangle( n);
    cout<<z;
    return 0;
}
