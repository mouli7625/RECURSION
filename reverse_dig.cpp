#include<iostream>
using namespace std;
int reverse(int n)
{
    static int temp, sum;
    if(n>0)
    {
        temp=n%10;
        sum=sum*10+temp;
        n=n/10;
        reverse(n);
    }
    else
    {
        return sum;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<reverse(n);
    return 0;
}