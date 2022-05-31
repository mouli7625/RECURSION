#include<iostream>
using namespace std;
void printTilln(int n)
{
    static int i=1;
    if(i<=n)
    {
        cout<<i<<" ";
        i++;
        printTilln(n);
        
    }
}
int main()
{
    int n;
    cin>>n;
    printTilln(n);
    return 0;
}