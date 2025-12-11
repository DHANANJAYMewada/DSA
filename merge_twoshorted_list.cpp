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
node*merge_shorted_list(int arr[],int index,int size,node*back){
if(index==size){
    return NULL;

}
node*temp=new node(arr[index]);
temp->pre=back;
temp->next=merge_shorted_list(arr,index+1,size,temp);
return temp;
}


int main(){
    node*head1=NULL;
    node*head2=NULL;
    int arr1[]={1,3,5,7,9};
    int arr2[]={2,4,6,8,10};
    head1=merge_shorted_list(arr1,0,5,NULL);
    head2=merge_shorted_list(arr1,0,5,NULL);
    node*ptr1=head1;
    node*ptr2=head2;
    node*head=new node(0);
    node*tail=head;
    while(ptr1&&ptr2)
    {
        /* code */
        if(ptr1->data<ptr2->data){
            tail->next=ptr1;
            ptr1=ptr1->next;
            tail=tail->next;
            tail->next=NULL;

        }
        else{
            tail->next=ptr2;
            ptr2=ptr2->next;
            tail=tail->next;
            tail->next=NULL;
        }
    }
    if(ptr1){
        tail->next=ptr1;

    }
    else{
        tail->next=ptr2;
        tail=head;
        head=head->next;
        delete tail;

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
