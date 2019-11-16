#include<iostream>
using namespace std;
void swap(int *a,int*b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

int partition(int array[],int initial,int final)
{
    int i=initial-1;
    int pivot=array[final];
    for(int j=initial;j<=final-1;j++)
        if (array[j]<pivot)
        {
            i++;
            swap(&array[i],&array[j]);
        }
        swap(&array[i+1],&array[final]);
    return i+1;
}
void quicksort(int array[],int low,int high)
{
    if (low<high)
    {
        int d=partition(array,low,high);
        quicksort(array,low,d-1);
        quicksort(array,d+1,high);
    }
}
void print(int array[],int n)
{
    for(int i=0;i<n;i++)cout<<array[i]<<" ";
}
int main()
{
    int array[]={7,0,5,1,4,2,4,6,7,5,2,1,5,7};
    int n=sizeof(array)/sizeof(array[0]);
    quicksort(array,0,n-1);
    print(array,n);
}
