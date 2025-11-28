// missing value in array
// #include<iostream>
// using namespace std;
// int main(){
// int n=6;
// int arr[5]={1,2,3,5,6};

// int sum=0;
// for (int i=0;i<n-1;i++)
// sum+=arr[i];
// int ans=n*(n+1)/2;
// int missing= ans-sum;
// cout<<missing;
// return 0;
// }

#include<iostream>
using namespace std;
int main(){
int n=6;
int arr[5]={2,3,4,5,6};
int sum=0;
for (int i =0;i<5;i++)

    sum+=arr[i];
    int ans=n*(n+1)/2;
    int missing=ans-sum;
    cout<<missing;

return 0;
}