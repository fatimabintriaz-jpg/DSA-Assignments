#include<iostream>
using namespace;
class Node{
  public:
  int data;
  Node *next;
  Node(int value){
    data=value;
    next=NULL;
  }
};
int main(){
  Node n1(90);
  Node n2(30);
  Node n3(10);
  n1.next=&n2;
  n2.next=&n3;
  Node *ptr=&n1;
  cout<<"Node 1: "<<ptr->data<<endl;
  ptr=ptr->next;
  cout<<"Node 2: "<<ptr->data<<endl;
  ptr=ptr->next;
  cout<<"Node 3: "<<ptr->data<<endl;
  return 0;
}