/* For each pair of i and j values (i.e., for each query), 
   print a single integer denoting the element located at index j of the array referenced by a[i].
   There should be a total of q lines of output.
 We perform the following q=2 queries:
1. Find the array located at index i=0 , which corresponds to a[0]=[1,5,4].
   We must print the value at index j=1 of this array which, as you can see, is 5.
2. Find the array located at index i=1, which corresponds to a[1]=[1,2,8,9,3].
   We must print the value at index j=3 of this array which, as you can see, is 9. */


#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n, q,x,arrno,elementno,value;
    cin>>n>>q;
    vector<int> vec[n];
    for (auto i=0;i<n;++i){
        cin>>x;
        for(auto j=0;j<x;++j) {
            cin>>value;
            vec[i].push_back(value);
        }
    }
    for(int i=0;i<q;i++) {
        cin>>arrno>>elementno;
        cout<<vec[arrno][elementno]<<endl;
    }
}
