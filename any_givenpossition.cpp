#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*pre;
    node*next;
    node(int value){
        data=value;
        next=NULL;
        pre=NULL;

    }
};
node*linked(int arr[],int index,int size,node*back){
    if(index==size){
        return NULL;

    }
    node*temp;
    temp=new node(arr[index]);
    temp->pre=back;
    temp->next=linked(arr,index+1,size,temp);
    return temp;
}

int main(){
    node*head;
    head=NULL;
    node*tail=NULL;
    int arr[10]={1,2,3,4,5};
    head=linked(arr,0,5,NULL);
    
      
            int pos=2;
            if(pos==0){
                if(head==NULL){
                    head=new node(8);

                }
      
        
                else{
                    node*temp=new node(8);
                    temp->next=head;
                    head->pre=temp;
                    head=temp;
                }
            }
            else{
                      node*curr=head;
            while(--pos){
                curr=curr->next;
            };
            if(curr->next==NULL){
                node*temp=new node(8);
                temp->pre=curr;
                curr->next=temp;

            }
            else{
                node*temp=new node(8);
                temp->next=curr->next;
                temp->pre=curr;
                curr->next=temp;
                curr->next->pre=temp;
                
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

