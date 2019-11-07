// if between 1-9 print alphabatical , if above 9 print either odd or even
// input- range of integers eg- 8 11
//op - eight nine even odd

#include<iostream>
using namespace std;
int main()
{
    int p,q;
    cin>>p>>q;
    for(; p <= q; p++){
        if(p>9)
            if(p%2==0)
                cout<<"even"<<endl;
            else
                cout<<"odd"<<endl;
        else
            {
                string word[]={"one","two","three","four","five","six","seven","eight","nine"};
                cout<<word[p-1]<<endl;
            }
    }
}
