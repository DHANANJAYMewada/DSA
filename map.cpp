#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>
class Node{
    public:
    int data;
    Node*next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
Node*creatlinked(int arr[],int index,int size){
    if(index==size)
    return NULL;
    Node*temp;
    temp=new Node(arr[index]);
    temp->next=creatlinked(arr, index+1,size);
   
   return temp;

}
 bool check(vector<Node*>&visited,Node*curr){
    for(int i=0;i<visited.size();i++){
        if(visited[i]==curr)
        return 1;
    }
    return 0;

}
bool detectloop(Node*head){
    Node*curr=head;
    unordered_map<Node*,bool>visited;
    while (curr!=NULL)
    {
        /* code */
      if(visited[curr]==1)

        return 1;
       visited[curr]=1;
        curr=curr->next;
    }
    

return 0;
}
int main(){

   
    int arr[]={1,1,1,1,1};
    Node*Head=creatlinked(arr,0,5);

    Head->next->next->next->next=Head->next;
    cout<<detectloop(Head);
}