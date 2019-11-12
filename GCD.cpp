
// USING RECURSSION

#include<iostream>
using namespace std;
int gcd(int d,int n)
{
    if (d==0) return n;
    if (n==0) return d;
    if (d==n) return d;
    if (d>n)
        return gcd(d-n,n);
    else
        return gcd(d,n-d);
}

int main()
{
    int p,q;
    cin>>p,q;
    cout<<gcd(p,q);
}







