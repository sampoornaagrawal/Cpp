#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   float pi=3.14159;
   cout<<setprecision(3)<<pi<<endl; //including LHS of decimal (whole number)
   cout<<fixed<<setprecision(3)<<pi; //after decimal
}
 /* Output:
3.14
3.142 (it gives round off values) *\
