#include<iostream>
// using namespace std;
// int main(){
// int arr[2][3]={{33,33},{33,44,55}};
// for(int i=0;i<2;i++){

//     for (int j=0;j<3;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;  
// }
// return 0;
// }

#include<iostream>
using namespace std;
int main(){
int arr[4][4][4]={{{1,1,1,1},{2,2,2,2},{3,3,3,3}}};
for (int i=0;i<4;i++){
    
    for (int j=0;j<4;j++){
        for (int k=0;k<4;k++){
           cout<<arr[i][j][k];
}
cout<<endl;
}

}
return 0;
}