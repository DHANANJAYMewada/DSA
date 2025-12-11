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
int main(){
    node*head;
    head=NULL;
    node*tail=head;
    int arr[10]={1,2,3,4,5};
    for(int i=0;i<5;i++){
                if(head==NULL){
            head=new node(arr[i]);
            tail=head;

        }
    
        else{
            node*temp;
            temp=new node(arr[i]);
            tail->next=temp;
            temp->pre=tail;
            tail=temp;
        

    }
  
      if(head==NULL){
              
            head=new node(8);
           tail=head;

      }
    
        
        else{
          node*curr=head;
          while (curr->next!=NULL)
          {
            /* code */
            curr=curr->next;

          };
          node*temp;
          temp=new node(8);
          curr->next=temp;
          temp->pre=curr;
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
