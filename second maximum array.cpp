// given an array of size n print second 
// largest distnct element form an array
#include<iostream>
#include<climits>
 using namespace std;
 int main(){
    int arr[6]={2,4,5,7,3,3};
    int first=INT_MIN;

    int secound=INT_MIN;

    for (int i=0;i<6;i++){
        if(arr[i]>first)
        first=arr[i];
        
    }
    for (int i=0;i<6;i++){
         if (arr[i] != first && arr[i] > secound)
        secound=arr[i];
       
        
    }
    cout<<"the value"<<secound;
 
    
 
 return 0;
 }