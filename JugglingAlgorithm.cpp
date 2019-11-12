// Rotation of an Array by JUGGLING algorithm.

#include<iostream>
using namespace std;
int gcd(int d ,int n) {
    if (d == 0)return n;
    if (n == 0)return d;
    if (d == n)return d;
    if (n > d)
        return gcd(d, n - d);
    else
        return gcd(d - n, n);
}
void print(int array[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}
int main()
{
    int d=3,j,temp;
    int array[]={12,13,14,15,16,17};
    int n= sizeof(array)/ sizeof(array[0]);
    for(int i=0;i<gcd(d,n);i++)
    {
        j=i;
        temp=array[i];
        while(1)
        {
            int k=j+d;
            if(k>=n){ k=k-n; }
            if(k==i){ break; }
            array[j]=array[k];
            j=k;
        }
        array[j]=temp;
    }
    print(array,n);
}




