// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node*pev;
//     node*next;
//     node(int value){
//         data=value;
//         next=NULL;
//         pev=NULL;
//     }
// };
// node*deletionlist(int arr[],int index,int size,node*back){
//     if(index==size){
//         return NULL;

//     }
//     node*temp;
//     temp=new node(arr[index]);
//     temp->pev=back;
//     temp->next=deletionlist(arr,index+1,size,temp);
//     return temp;
// }
// int main(){
//     node*head;
//     head=NULL;

//     int arr[5]={1,2,3,4,5};
//     head=deletionlist(arr,0,5,NULL);
//     int pos=2;
//     if(pos==0){
//         node*temp=head;
//         head=head->next;
//         head->pev=NULL;
//         delete temp;

//     }
//     else{
//         node*curr=head;
//         while (--pos)
//         {
//             curr=curr->next;

//             /* code */
//         };
//         if(curr->next==NULL){
//             curr->pev->next=NULL;
//             delete curr;

//         }
//         else{
//             curr->pev->next=curr->next;
//             curr->next->pev=curr->pev;
//             delete curr;
//         }

        
//     }
//     node*tem=head;
//     while (tem)
//     {
//         cout<<tem->data<<" ";
//         tem=tem->next;
//         /* code */
//     }
    

// return 0;
// }


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
node*deletionlist(int arr[],int index,int size,node*back){
    if(index==size){
        return NULL;

    }
    node*temp;
    temp=new node(arr[index]);
    temp->pre=back;
    temp->next=deletionlist(arr,index+1,size,temp);
    return temp;

}

int main(){
    node*head;
    head=NULL;
    int arr[5]={1,2,3,4,5};
    head=deletionlist(arr,0,5,NULL);
    int pos=5;
    if(pos==0){
       node*temp=head;
       head=head->next;
       head->pre=NULL;
       delete temp;


        }
        else{
            node*curr=head;
            while (--pos)
            {
                /* code */
                curr=curr->next;

            };
            if(curr->next==NULL){
                curr->pre->next=NULL;
                delete curr;

            }
            else{
                curr->pre->next=curr->next;
                curr->next->pre=curr->pre;
                delete curr;

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