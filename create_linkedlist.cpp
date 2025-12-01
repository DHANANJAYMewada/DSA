// singly linked list 
//  static_way creat of linked list

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int value){
        data=value;
        next=NULL;

    }
};
int main(){
Node a(44);
cout<<a.data<<endl;
cout<<a.next<<endl;
return 0;
}