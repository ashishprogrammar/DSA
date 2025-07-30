// #include <iostream>
// using namespace std;
// class Node {
//   public:
//   int data;
//   Node *next;

//   Node(int value){
//     data=value;
//     next=NULL;
//   }
// };

// int main(){
//   // Node A1(4); Static way o creating new node
//   Node *Head;
//   Head = NULL;

//   int arr[] = {2,4,6,8,10,12,13,14};

//   //Insert the node at the beginning
//   for(int i=0;i<8;i++){
//     if(Head==NULL){ //Linked List Doesnt exist
//       Head = new Node(arr[i]);
//     }else{
//       Node *temp;
//       temp = new Node(arr[i]);
//       temp->next = Head;
//       Head = temp;
//     }
//   }
//   //Now to print Linked List Data
//   Node *temp; // It is created in a static way so it will be deleted automatically
//   temp=Head;
//   while(temp!=NULL){
//     cout<<temp->data<<endl;
//     temp=temp->next;
//   }
//   return 0; 
// }

//LINKED LIST BANANA HAI WITH THE HELP OF ARRAY ELEMNTS BUT INSERT KARNA HAI AT THE LAST 
// #include<iostream>
// using namespace std;
// class Node{
//   public:
//   int data;
//   Node *next;

//   // crezte now constructor to intialize the data value
//   Node(int value){
//     data=value;
//     next=NULL; // yadi me next ko initialize nhi karta hu ye garbage value le lega fir mera code infinte time chalega 

//   }
// };
// int main(){
//   int arr[] = {2,4,6,8,10};
//   Node *head = NULL;
//   Node *tail = NULL;
//   for(int i=0;i<5;i++){
//     if(head==NULL){
//       head = new Node(arr[i]);
//       tail=head;
//     }
//     else{
//       tail->next = new Node(arr[i]);
//       tail=tail->next;
//     }
//   }

//   //Now to print Linked List
//   Node*temp;
//   temp=head;
//   while(temp!=NULL){
//     cout<<temp->data<<endl;
//     temp=temp->next;
//   }
// }

//Creating a Linked List with the help of recursion
// #include<iostream>
// using namespace std;
// class Node {
//   public:
//     int data;
//     Node* next;

//   Node(int value){
//     data=value;
//     next=NULL;
//   }
// };
// Node* createLinkedList(int arr[],int index,int size){
//   if(index==size){
//     return NULL;
//   }
//   Node* temp;
//   temp=new Node(arr[index]);
//   temp->next = createLinkedList(arr,index+1,size);
//   return temp;
// }
// int main(){
//   int arr[] = {1,2,3,4,5,6,7,8};
//   Node* head;
//   head = createLinkedList(arr,0,8);
//   Node* tail;
//   tail=head;
//   while(tail!=NULL){
//     cout<<tail->data<<endl;
//     tail=tail->next;
//   }
// }

// Creating a Linked List and inserting a Node at the beginning using recursion
// #include<iostream>
// using namespace std;
// class Node{
//   public:
//   int data;
//   Node* next;
//   Node(int value){
//     data=value;
//     next=NULL;
//   }
// };
// Node* createLinkedList(int arr[],int index,int size,Node* prev){
//   if(index==size){
//     return prev;
//   }
//   Node* temp;
//   temp = new Node(arr[index]);
//   temp->next=prev;
//   return createLinkedList(arr,index+1,size,temp);
// };
// int main(){
//   int arr[] = {2,4,6,8,10};
//   Node* head;
//   head = createLinkedList(arr,0,5,NULL);
//   //Now printing the Linked List elements
//   Node* tail;
//   tail=head;
//   while(tail!=NULL){
//     cout<<tail->data<<endl;
//     tail=tail->next;
//   }
// }


// CREATING A LINKED LIST BY INSERTING A NODE AT THE MIDDLE 
// #include<iostream>
// using namespace std;

// class Node{
//   public:
//   int data;
//   Node* next;
//   Node(int value){
//     data=value;
//     next=NULL;
//   }
// };
// Node* CreateLinkedList(int arr[],int index,int size){
//   if(index==size){
//     return NULL;
//   }
//   Node* temp= new Node(arr[index]);
//   temp->next = CreateLinkedList(arr,index+1,size);
//   return temp;
// };
// void CreateLinkedListMiddle(int X,int value,Node* Head){
//   Node* temp2= new Node(value);
//   Node* temp=Head;
//   while(X-1&&temp!=NULL&&temp->next!=NULL){
//     temp=temp->next;
//     X--;
//   }
//   if (temp == NULL) return;
//   temp2->next=temp->next;
//   temp->next=temp2;
// };
// int main(){
//   int arr[]={2,4,6,8,10};
//   Node* Head;
//   Head = CreateLinkedList(arr,0,5);
//   //Now create a New Node at index=3 with the value of 30
//   CreateLinkedListMiddle(5,30,Head);
//   //Now printing the Linked List
//   Node* temp;
//   temp=Head;
//   while(temp!=NULL){
//     cout<<temp->data<<endl;
//     temp=temp->next;
//   }
// }