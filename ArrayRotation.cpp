//Rotation of array at position 'd'

#include<iostream>
using namespace std;
void oneshiftleft(int array[],int n)
{
   int temp=array[0],i;
   for(i=0;i<(n-1);i++){
       array[i]=array[i+1];}
   array[i]=temp;
}
void rotate(int array[],int d,int n){
    for(int i=0;i<d;++i){
        oneshiftleft(array,n);
    }
}
void print(int array[],int n)
    {
        for(int i=0;i<n;i++){
            cout<<array[i]<<" ";
        }
    }

int main() {
    int myarr[] = {11, 12, 13, 14, 15};
    int n = sizeof(myarr) / sizeof(myarr[0]);
    rotate(myarr, 2, n);
    print(myarr, n);
    return 0;
}
