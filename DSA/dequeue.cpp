#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node *next,*prev;
  Node(int x){
    data=x;
    next=NULL;
    prev=NULL;
  }
};

class Dequeue{
  public:
  Node*front,*rear;
  Dequeue(){
    front=NULL;
    rear=NULL;
  }
  void push_front(int x){
    if(front==NULL){
      front=rear=new Node(x);
    }else{
      Node* temp = new Node(x);
      temp->next=front;
      front->prev=temp;
      front =temp;
    }
  }
  void push_back(int x){
    if(front==NULL){
      front=rear=new Node(x);
    }else{
      Node* temp =new Node(x);
      temp->prev=rear;
      rear->next=temp;
      rear=temp;
    }
  }
  void pop_front(){
    if(front==NULL){
      return;
    }else{
      Node *temp=front;
      front=front->next;
      delete temp;
      if(front){
        front->prev=NULL;
      }else{
        rear=NULL;
      }
    }
  }
  void pop_back(){
    if(front==NULL){
      return;
    }else{
      Node *temp=rear;
      rear=rear->prev;
      delete temp;
      if(rear){
        rear->next=NULL;
      }else{
        front=NULL;
      }
    }
  }
  int start(){
    if(front==NULL)
      return -1;
    else
      return front->data;
  }
  int end(){
    if(front==NULL)
      return -1;
    else
      return rear->data;
  }
  ~Dequeue() {
    while (front != NULL) {
      pop_front();
    }
  }
};

int main() {
    Dequeue dq;
    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(30);
    cout << "Front: " << dq.start() << ", Rear: " << dq.end() << endl;
    dq.pop_front();
    cout << "Front: " << dq.start() << ", Rear: " << dq.end() << endl;
    dq.pop_back();
    cout << "Front: " << dq.start() << ", Rear: " << dq.end() << endl;
    return 0;
}