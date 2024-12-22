#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

struct Node{
    int value;
    Node* prev;
    Node* next;
    char data;

    Node(int val) : value(val), prev(nullptr), next(nullptr) {}
    
    //constructer
    Node (char karakter){
        data=karakter;
        next=nullptr;
    }

};

class LinkedList{
    private:
    Node* head;

    public:
    LinkedList();
    ~LinkedList();
    void addNode(char);
    void printList()const;

};


#endif