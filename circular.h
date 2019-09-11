#ifndef CIRCULAR_H
#define CIRCULAR_H

#include "list.h"

template <typename T>
class CircularLinkedList : public List<T> {
    public:
        CircularLinkedList() : List<T>() {}

        T front() {
            if(this->nodes == 0){
                throw invalid_argument("Lista vacia, operacion no permitida");
            }
            return this->head->data;
        }

        T head_prev() {
            if(this->nodes == 0){
                throw invalid_argument("Lista vacia, operacion no permitida");
            }
            return this->head->prev->data;
        }

        T tail_next() {
            if(this->nodes == 0){
                throw invalid_argument("Lista vacia, operacion no permitida");
            }
            return this->tail->next->data;
        }

        T back() {
            if(this->nodes == 0){
                throw invalid_argument("Lista vacia, operacion no permitida");
            }
            return this->tail->data;
        }

        void print(){
            Node<T>* actual = this->head;
            do{
                std::cout << actual->data << " ";
                actual = actual->next;
            }while(actual != this->head);
            cout << "\n";
        }

        void printFromTailToHead(){
            Node<T>* actual = this->tail;
            do{
                std::cout << actual->data << " ";
                actual = actual->prev;
            }while(actual != this->tail);
            cout << "\n";
        }

        void push_front(T value) {
            if(this->head == nullptr){
                Node<T>* temp = new Node<T>(value);
                this->head = temp;
                this->tail = temp;
                temp->next = temp;
                temp->prev = temp;
                this->nodes = 1;
            }
            else{
                Node<T>* temp = new Node<T>(value);
                // update the new head node attributes
                temp->next = this->head;
                temp->prev = this->tail;
                // update the original head attributes
                this->head->prev = temp;
                if(this->nodes == 1){   //head and tail are the same node
                    this->head->next = temp;
                }
                // Update the tail
                this->tail->next = temp;
                // Set the new head of the list to temp node
                this->head = temp;
                this->nodes++;
            }
        }

        void push_back(T value) {
            if(this->head == nullptr){
                Node<T>* temp = new Node<T>(value);
                this->head = temp;
                this->tail = temp;
                temp->next = temp;
                temp->prev = temp;
                this->nodes = 1;
            }
            else{
                Node<T>* temp = new Node<T>(value);
                // update the new tail node attributes
                temp->next = this->head;
                temp->prev = this->tail;
                // update the original tail attributes
                this->tail->next = temp;
                // Update the head
                this->head->prev = temp;
                // Set the new tail of the list to temp node
                this->tail = temp;
                this->nodes++;
            }
        }

        void pop_front() {
            if(this->nodes == 0){
                throw invalid_argument("Lista vacia, operacion no permitida");
            }
            Node<T>* original_head = this->head;
            if(this->head->next != nullptr){
                this->head = this->head->next;  // new head: update head with the second node
                this->head->prev = this->tail;     // new head.prev = nullptr
                this->tail->next = this->head;  // tail.next = new head
                delete original_head;
                this->nodes--;  //update number of lists's nodes
            }
            else{
                delete original_head;
                this->head = this->tail = nullptr;
                this->nodes--;
            }
        }

        void pop_back() {
            if(this->nodes == 0){
                throw invalid_argument("Lista vacia, operacion no permitida");
            }
            Node<T>* itera_node_new_tail = this->head;      // new tail: the node before the last one
            // actions for New tail
            for(int i=0; i<this->nodes-2; ++i){
                itera_node_new_tail = itera_node_new_tail->next;
            }
            if(itera_node_new_tail->next != this->head){   // if we have at least 2 nodes
                delete itera_node_new_tail->next; // Kill original tail
                this->tail = itera_node_new_tail;   // New tail
                this->tail->next = this->head;
                this->head->prev = this->tail;
                this->nodes--; // Update number of lists's nodes
            }
            else{
                delete itera_node_new_tail;
                this->head = this->tail = nullptr;
                this->nodes--;
            }
        }

        T operator[](int index) {
            // TODO
        }

        bool empty() {
            return this->nodes == 0;
        }

        int size() {
            return this->nodes;
        }

        void clear() {
            // TODO
        }

        void sort() {
            // TODO
        }
    
        void reverse() {
            // TODO
        }

        string name() {
            return "Circular Linked List";
        }

        BidirectionalIterator<T> begin() {
            // TODO
        }

	    BidirectionalIterator<T> end() {
            // TODO
        }

        void merge(CircularLinkedList<T> list) {
            // TODO
        }
};

#endif