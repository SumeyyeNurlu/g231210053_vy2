#include "LinkedList.hpp"

#include <iostream>
using namespace std;

LinkedList::LinkedList()//kurucu
{
    head:nullptr;
}

LinkedList::~LinkedList()//yıkıcı
{
    Node* current=head;
    while(current!=nullptr){
        Node*temp=current;
        current=current->next;
        delete temp;
    }

}

void LinkedList::addNode(char karakter) 
{
    Node* yeniDugum = new Node(karakter);
    if (head == nullptr) {
        head = yeniDugum;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = yeniDugum;
    }
}

// Listeyi yazdırma
void LinkedList::printList() const {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}