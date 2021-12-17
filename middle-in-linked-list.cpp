#include<bits/stdc++.h>
using namespace std;

class node{
public:
  int data;
  node *next;
};

void create(node** head){
  for(int i=5;i>0;i--){
    node *temp = new node();
    temp->data = i;
    temp->next = (*head);
    (*head) = temp;
  }
}

int middle(node** head){
  node *fast_ptr = (*head);
  node *slow_ptr = (*head);
  if(head!=NULL){
    while(fast_ptr!=NULL && fast_ptr->next!=NULL){
      fast_ptr=fast_ptr->next->next;
      slow_ptr=slow_ptr->next;
    }
    return slow_ptr->data;
  }
}

int main(){
  node *head = new node();
  head->data = 6;
  head->next = NULL;
  create(&head);
  node *p = head;
  cout<<middle(&head)<<endl;
}
