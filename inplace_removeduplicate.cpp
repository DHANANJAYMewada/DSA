#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node*pre;
    node(int value){
        data=value;
        next=NULL;
        pre=NULL;

    }
};
node*inplace_remove_duplicate(int arr[],int index,int size,node*back){
    if(index==size){
        return NULL;


    }
    node*temp=new node(arr[index]);
     temp->pre=back;
     temp->next=inplace_remove_duplicate(arr,index+1,size,temp);
     return temp;
}
int main(){
    node*head=NULL;
    int arr[]={1,2,2,3,4,5,5};
    head=inplace_remove_duplicate(arr,0,7,NULL);
    node*curr=head->next;
    node*pre=head;
    while(curr)
    {
        if(curr->data==pre->data){
            pre->next=curr->next;
            delete curr;
            curr=pre->next;
        }
        else{
            pre=pre->next;
            curr=curr->next;

        }
    
        /* code */
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