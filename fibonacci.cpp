#include<iostream>
using namespace std;
int fab(int n)
{
    if (n==0||n==1) return n; //base case
    else return fab(n-1)+fab(n-2);  // recursive case
}
int main()
{
    int x;cout<<"enter x:";
    cin>>x;
    cout<<fab(x)<<endl;
}
