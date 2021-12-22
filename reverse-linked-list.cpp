#include<bits/stdc++.h>
using namespace std;

class Node{
public:
  int data;
  Node *next;

};

void create(Node** head){
  for(int i=5;i>0;i--){
    Node *temp = new Node();
    temp->data = i;
    temp->next = (*head);
    (*head) = temp;
  }
}

Node* reverse(Node** head){
  Node *prev = NULL;
  Node *curr = (*head);
  Node *n = NULL;
  while(curr!=NULL){
    n=curr->next;
    curr->next = prev;
    prev = curr;
    curr=n;
  }
  return prev;
}
int main(){
  Node *head = new Node();
  head->data = 6;
  head->next = NULL;
  create(&head);
  
  head = reverse(&head);

  Node *p = head;
  while(p!=NULL){
    cout<<p->data<<endl;
    p=p->next;
  }
}
