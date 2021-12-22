#include<bits/stdc++.h>
using namespace std;

class Node{
public:
  int data;
  Node *next;

};

void create(Node** head,int ar[],int n){
  for(int i=n-2;i>=0;i--){
    Node *temp = new Node();
    temp->data = ar[i];
    temp->next = (*head);
    (*head) = temp;
  }
}

void bin_to_dec(Node** head){
  stack<int>s;
  Node* p = (*head);
  while(p!=NULL){
    s.push(p->data);
    p=p->next;
  }
  int ans = 0,i=0;
  while(!s.empty()){
    ans = ans + s.top()*pow(2,i);
    i++;
    s.pop();
  }
  cout<<ans<<endl;

}

int main(){
  int n;
  cin>>n;
  int ar[n];
  for(int i=0;i<n;i++){
    cin>>ar[i];
  }
  Node *head = new Node();
  head->data = ar[n-1];
  head->next = NULL;
  create(&head,ar,n);
  bin_to_dec(&head);

}
