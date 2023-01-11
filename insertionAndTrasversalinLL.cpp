#include <iostream>
using namespace std;
//creating the node
class Node {
    public:
    int data;
    Node* next;

    Node (int data) {
        this -> data = data;
        this -> next = NULL;
    }
};
//inserting at head
void insertAtHead(Node* &head,int d) {
    Node* temp = new Node(d);
    temp-> next = head;
    head = temp;
}
//inserting at the tail
void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail= temp;
}
//inserting at any position
void inserAtAnyPosition(Node* &tail, Node* &head, int position, int d)
{
Node* temp = head;
int cnt =1;
//inserting at the starting of LL
if(position =1) {
    insertAtHead(head,d);
    return;
    }

while(cnt<position-1){
    temp = temp->next;
    cnt++;
}
//inserting at the end of LL
if(temp->next == NULL) {
    insertAtTail(tail,d);
    return;
 }
//inserting in the middlle of LL
Node* nodeToInsert = new Node(d);
nodeToInsert->next = temp->next;
temp->next = nodeToInsert;
}
//print LL
void print(Node* &head) {
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    
  inserAtAnyPosition(tail,head,2,6);
  inserAtAnyPosition(tail,head,3,7);
  inserAtAnyPosition(tail,head,1,19);
  inserAtAnyPosition(tail,head,4,20);
  inserAtAnyPosition(tail,head,3,35);

  print(head);   
}
