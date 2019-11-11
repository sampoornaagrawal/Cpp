// USING VECTOR AND ALGORITHM

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int gcd(int d,int n)
{
    vector<int> vec;
    for(int i=1;i<=d;i++)
    {
        if(d%i==0 && n%i==0)
            vec.push_back(i);
    }
    cout<<*max_element(vec.begin(),vec.end());
}

int main()
{   int p,q;
    cin>>p,q; 
    gcd(p,q);
}

//--------------------------------------------------------------------------

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







