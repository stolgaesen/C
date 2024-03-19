#include <iostream>
#include <new>
using namespace std;
class Node {
public:
int data;
Node *next;
Node(int x,Node *n){data=x;next = n;}
};
class Queue{
private:
    Node *head;
public:
    Queue(){
        head = NULL;
    }
    void enqueue(int data){
        if(this->head==nullptr){this->head=new Node(data,nullptr);}
        else{
    Node* newNode = new Node(data,nullptr);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
        }
    }
    int isEmpty(){
        if(head==nullptr){return 1;}
        else
            return 0;
    }
    void dequeue(){
        if(isEmpty()==1){cout<<"The queue is empty!";}
        if(head->next==nullptr){
            delete head;
            head=nullptr;
            return;
        }
        Node* temp=head;
        while(temp->next->next !=nullptr){
            temp = temp->next;
        }
        delete temp->next;
        temp->next=nullptr;
    }
    int top(){
    if(isEmpty()==1){cout<<"The queue is empty!";}
    else return head->data;
    }
    void printList(){
        Node* temp = head;
    while(temp !=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
      }
    }
    int size(){
        int k=0;
        for(Node* temp=head; temp!=nullptr; temp=temp->next){
            k++;
        }return k;
    }
};

int main()
{
    Queue queue;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.printList();
    cout<<endl<<queue.size()<<endl;
    cout<<queue.top()<<endl;
    return 0;
}
