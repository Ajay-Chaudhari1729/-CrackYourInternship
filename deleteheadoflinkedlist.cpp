#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* prev;
    Node* next;
    Node(int d){
        data=d;
        prev=NULL;
        next=NULL;
    }
};
 void printlist(Node *head){
        Node *curr = head;
        while(curr != NULL){
            cout<<curr->data<<" ";
            curr = curr->next;
        }
    }

Node *delH(Node *head){
    //corner cases
    if(head == NULL) return NULL;
    if(head ->next == NULL) {
        delete head;
        return NULL;
    }
    // Node *temp = head;
    else{
        //jsut do this operation
         Node *temp = head;
        head = head -> next;
        head -> prev = NULL;
        delete temp;
        return head;

    }
}
int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(50);
    Node *temp2 = new Node(59);
    Node *temp3 = new Node(65);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    temp2->next = temp3;
    temp3->prev = temp2;
    printlist(head);
    cout<<endl;
    head = delH(head);
    printlist(head);


}
