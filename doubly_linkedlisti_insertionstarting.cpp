#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node*prev;
    node(int value){
        data=value;
        next=NULL;
        prev=NULL;

    }
};
int main(){
    node*head;
    head=NULL;
    node*tail=head;
    
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(head==NULL){
            head=new node(arr[i]);
            tail=head;

        }
        else{
            node*temp;
            temp=new node(arr[i]);
            tail->next=temp;
            head->prev=temp;
            tail=temp;

             }
            }
            
             node*tem=head;
             while (tem)
             {
                /* code */
                cout<<tem->data<<" ";
                tem=tem->next;
             }
             
            
    

return 0;
}