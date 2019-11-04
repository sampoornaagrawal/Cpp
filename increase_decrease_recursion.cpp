#include<iostream>
using namespace std;
int inc(int n)
{
    if (n==0) return 0;
    else inc(n-1); cout<<n<<" ";
}
int dec(int n)
{
    if (n==0) return n;
    else cout<<n<<" ";
    dec(n-1);
}
int main()
{
    int x;cin>>x;dec(x);cout<<endl;inc(x);
}
