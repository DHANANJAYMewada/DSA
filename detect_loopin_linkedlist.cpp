// #include<iostream>
// using namespace std;
// #include<vector>
// class Node{
//     public:
//     int data;
//     Node*next;
//     Node(int value){
//         data=value;
//         next=NULL;
//     }
// };
// Node*creatlinked(int arr[],int index,int size){
//     if(index==size)
//     return NULL;
//     Node*temp;
//     temp=new Node(arr[index]);
//     temp->next=creatlinked(arr, index+1,size);
   
//    return temp;

// }
//  bool check(vector<Node*>&visited,Node*curr){
//     for(int i=0;i<visited.size();i++){
//         if(visited[i]==curr)
//         return 1;
//     }
//     return 0;

// }
// bool detectloop(Node*head){
//     Node*curr=head;
//     vector<Node*>visited;
//     while (curr!=NULL)
//     {
//         /* code */
//         if(check(visited,curr))
//         return 1;
//         visited.push_back(curr);
//         curr=curr->next;
//     }
    

// return 0;
// }
// int main(){

   
//     int arr[]={1,1,1,1,1};
//     Node*Head=creatlinked(arr,0,5);

//     Head->next->next->next->next=Head->next;
//     cout<<detectloop(Head);
// }


#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int value){
        data=value;
        next=NULL;

    }
};
node*created(int arr[],int index,int size){
    if(index==size){
        return NULL;

    }
    node*temp;
    temp=new node(arr[index]);
    temp->next=created(arr,index+1,size);
    return temp;
}
bool check(vector<node*>&visited,node*curr){
    for(int i=0;i<visited.size();i++){
        if(visited[i]==curr)
        return 1;
    }
    return 0;
}
bool detection(node*head){
    node*curr=head;
  
    unordered_map<node*,bool>visited;
    while (curr!=NULL)
    {
        /* code */
        if(visited[curr]=1)
        curr=curr->next;
        return 1;
    }
    return 0;
    
}
int main(){

   
    int arr[]={1,1,1,1,1};
    node*head=created(arr,0,5);

    head->next->next->next->next=head->next;
    cout<<detection(head);
}




