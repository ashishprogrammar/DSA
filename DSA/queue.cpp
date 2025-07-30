// //Implement queue using array

// #include<iostream>
// using namespace std;
// class Queue{
//   int front,rear;
//   int*arr;
//   int size;
//   public:
//   Queue(int n){
//     arr =new int[n];
//     front=rear=-1;
//     size=n;
//   }
//   //if queue is empty or not 
//   bool isEmpty(){
//     return front==-1;
//   }
//   //check if queue is full or not
//   bool isFull(){
//     return rear==size-1;
//   }

//   void push(int x){
//     //base condition to check if ur queue is empty
//     if(isEmpty()){
//       front=rear=0;
//       arr[front]=x;
//     }else if(rear==size-1){
//       cout<<"queue is overflow ";
//       return;
//     }else{
//       rear=rear+1;
//       arr[rear]=x;
//     }
//   }

//   void pop(){
//     if(isEmpty()){
//       cout<<"queue is underflow ";
//       return;
//     }else if(front==rear){
//       front=rear=-1;
//     }else{
//       front=front+1;
//     }
//   }
//   int start(){
//     if(isEmpty()){
//       cout<<"queue is empty ";
//     }
//     return arr[front];
//   }
//   void print(){
//     for(int i=front;i<=rear;i++){
//       cout<<arr[i]<<" ";
//     }
//   }
// };
// int main(){
//   Queue q(5);
//   q.push(6);
//   q.push(7);
//   q.push(8);
//   q.pop();
//   q.push(9);
//   q.push(10);
//   q.push(23);
//   q.push(567);
//   q.print();
// }

// //Implement Queue using circular array 

// #include<iostream>
// using namespace std;
// class Queue{
//   int front,rear;
//   int*arr;
//   int size;
//   public:
//   Queue(int n){
//     arr =new int[n];
//     front=rear=-1;
//     size=n;
//   }
//   //if queue is empty or not 
//   bool isEmpty(){
//     return front==-1;
//   }
//   //check if queue is full or not
//   bool isFull(){
//     return (rear+1)%size==front;
//   }

//   void push(int x){
//     //base condition to check if ur queue is empty
//     if(isEmpty()){
//       front=rear=0;
//       arr[front]=x;
//     }else if(isFull()){
//       cout<<"queue is overflow ";
//       return;
//     }else{
//       rear=(rear+1)%size;
//       arr[rear]=x;
//     }
//   }

//   void pop(){
//     if(isEmpty()){
//       cout<<"queue is underflow ";
//       return;
//     }else if(front==rear){
//       front=rear=-1;
//     }else{
//       front=(front+1)%size;
//     }
//   }
//   int start(){
//     if(isEmpty()){
//       cout<<"queue is empty ";
//     }
//     return arr[front];
//   }
//   void print(){
//     for(int i=front;i<=rear%size;i++){
//       cout<<arr[i]<<" ";
//     }
//   }
// };
// int main(){
//   Queue q(5);
//   q.push(6);
//   q.push(7);
//   q.push(8);
//   q.pop();
//   q.push(9);
//   q.push(10);
//   q.push(23);
//   q.print();
// }

//Implement Queue using Linked List

#include<iostream>
using namespace std;

class Node{
  int data;
  Node* next;
  Node(int x){
    data=x;
    next=NULL;
  }
};

class Queue{
  Node* front;
  Node* rear;
  int size;
  public:
  Queue(){
    front=rear=NULL;
  }
  int isEmpty(){
    return front==NULL;
  }
  void push(int val){
    if(isEmpty()){
      rear = new Node(val);
      front=rear;
    }else{
      rear->next = new Node(val);
      rear=rear->next;
    }
  }
  void pop(){
    if(isEmpty()){
      cout<<"stack underflow";
    }else{
      Node* temp=front;
      front=front->next;
      delete temp;
    }
  }

  int start(){
    if(isEmpty()){
      cout<<"queue is empty";
    }else{
      return front->data;
    }
  }
};

// using stl
queue<int>q1;
q1.pop();
q1.push(5);
q1.empty();
q1.front();
q1.size();
