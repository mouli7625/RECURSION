#include<iostream>
using namespace std;
int countWays(int,int);
int power(int num, unsigned int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n%2==0)
    {
        return power(num, n/2)*power(num, n/2);
    }
    else
    {
        return num*power(num, n/2)*power(num,n/2);
    }
}
int cr(int x, int n, int c_num=1, int c_sum=0)
{
    int res=0;
    int p=power(c_num, n);
    while(p+c_sum<x)
    {
        res+=cr(x,n,c_num+1,p+c_sum);
        c_num++;
        p=power(c_num,n);
    }
    if(p+c_sum==x)
    {
        res++;
    }
    return res;
}
int main()
{
    int x, n;
    cin>>x>>n;
    cout<<cr(x,n);
    return 0;
}