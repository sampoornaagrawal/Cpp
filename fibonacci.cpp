#include<iostream>
using namespace std;
int fib(int n)
{
    if (n==0||n==1) return n; //base case
    else return fib(n-1)+fib(n-2);  // recursive case
}
int main()
{
    int x;cout<<"enter x:";
    cin>>x;
    cout<<fib(x)<<endl;
}
