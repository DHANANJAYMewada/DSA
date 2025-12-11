#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node*pre;
    node(int value){
        data=value;
        pre=NULL;
        next=NULL;
    }
};
node*linkedlist(int arr[],int index,int size,node*back){
    if(index==size)
    return NULL;
    node*temp;
    temp=new node(arr[index]);
    temp->pre=back;
    temp->next=linkedlist(arr,index+1,size,temp);
    return temp;
}
int main(){
    node*head=NULL;
    int arr[10]={1,2,3,4,5,6,7,8,9};
    head=linkedlist(arr,0,10,NULL);
    node*slow=head;
    node*fast=head;
    while (fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    
        if(slow==fast){
            break;
    }
}
        if(fast==NULL)
            return 0;
        
    
        slow=fast->next;
        int count=1;
        while (slow!=fast)
        {
            count++;
            /* code */
            slow=slow->next;
         
        };
      slow=head;fast=head;
      while (count--)
      {
        fast=fast->next;
        /* code */
      };
      while (slow!=fast)
      {
        slow=slow->next;
        fast=fast->next;
        /* code */
      };
      while (slow->next!=fast)
      
        slow=slow->next;
        /* code */
      
      slow->next=NULL;
      
      
      
        
        
      node* tem = head;
    while(tem != NULL){
        cout << tem->data << " ";
        tem = tem->next;
    }


return 0;
}