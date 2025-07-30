// #include<iostream>
// using namespace std;

//Implement it with array
// class Stack {
//   int *arr;
//   int top;
//   int size;
//   public:

//   //Constructor
//   bool flag;
//   Stack(int s){
//     size=s;
//     arr = new int[s];
//     top=-1;
//     flag=1; // flag representing that my stack is empty;
//   }

//   //push
//   void push(int value){
//     if(top==size-1){
//       cout<<"Stack overflow"<<endl;
//       return;
//     }else{
//       top++;
//       arr[top]=value;
//       cout<<"Pushed "<<value<<" into the stack\n";
//       flag=0;
//     }
//   }
//   //pop
//   void pop(){
//     if(top==-1){
//       cout<<"stack underflow"<<endl;
//       return;
//     }else{
//       top--;
//       cout<<"popped "<<arr[top+1]<<" from the stack\n";
//       if(top==-1){
//         flag=1;
//       }
//     }
//   }
//   //peek
//   int peek(){
//     if(top==-1){
//       cout<<"Stack is empty\n";
//       return -1;
//     }else{
//       return arr[top];
//     }
//   }
//   //isEmpty
//   bool isEmpty(){
//     return top==-1;
//   }
//   //isSize
//   int isSize(){
//     return top+1;
//   }
// };

// int main(){
//   Stack s(5);
//   int value = s.peek();
//   if(s.flag==0)
//   cout<<value<<endl;
// }

// Implementation of stack using doubly linked list 
#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* Next;
  Node* prev;
  Node(int value){
    data=value;
    Next=NULL;
    prev=NULL;
  }
};
class stack{
  Node* top;
  stack(){
    top=NULL;
  }
  void push(int value){
    Node* newNode=new Node(value);
    if(top!=NULL){
      top->next=newNode;
      newNode->prev=top;
    }
    top= newNode;
    cout<<"Pushed: "<<value<<endl;
  }

  void pop(){
    if(top==NULL){
      cout<<"Stack Underflow \n";
      return;
    }
    cout<<"Popped: "<<top->data<<endl;
    NewNode* temp=top->prev;
    delete top;
    top=temp;
    if(top!=NULL)
      top->next=NULL; 
  }
}
// Implementation of Stack using singly Linked List
// class Node{

//   public:
//   int data;
//   Node* next;
//   //constructor
//   Node(int value){
//     data=value;
//     next=NULL;
//   }
// };
// class Stack{
//   Node *Top;
//   int size;
//   public:
//   Stack(){
//     Top=NULL;
//     size=0;
//   }
//   void push(int value){
//     Node* temp = new Node(value); //heap me memory allocate ho raha hoga
//     if(temp==NULL){
//       cout<<"stack OverFlow"<<endl; // heap yadi pura fill hogaya toh 
//       return;
//     }
//     temp->next = Top;
//     Top=temp;
//     size++;
//     cout<<"pushed "<<value<<" into the stack"<<endl;
//   }
//   void pop(){
//     if(Top==NULL){
//       cout<<"Stack Underflow"<<endl;
//       return;
//     }else{
//       Node* temp =Top;
//       Top=Top->next;
//       cout<<"popped "<<temp->data<<" from the stack"<<endl;
//       delete temp;
//       size--;
//     }
//   }
//   int peek(){
//     if(Top==NULL){
//       cout<<"Stack is Empty"<<endl;
//       return -1;
//     }else{
//       return Top->data;
//     }
//   }
//   bool isEmpty(){
//     return Top==NULL;
//   }
//   int isSize(){
//     return size;
//   }
// };

// int main(){
//   Stack s;
//   s.push(6);
//   s.push(12);
//   s.push(18);
//   s.push(24);
//   s.push(30);
//   s.pop();
//   cout<<s.peek()<<endl;
// }

//handle negative values also using flag 


//IMPLEMENTATION OF STACK USING STL 
#include<iostream>
#include<stack>
using namespace std;

int main(){
  stack<int>s;
  s.push(6);
  s.push(20);
  s.push(45);
  cout<<s.size()<<endl; // return the size
  cout<<s.top()<<endl; // return the top element
  s.pop();
  cout<<s.top()<<endl;
  cout<<s.empty()<<endl; //return whether stack is empty or not
}