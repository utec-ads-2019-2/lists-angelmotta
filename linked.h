#ifndef LINKED_H
#define LINKED_H

#include "list.h"
#include "iterators/bidirectional_iterator.h"

template <typename T>
class LinkedList : public List<T> {
    public:
        LinkedList() : List<T>() {}

        T front() {
            if(this->nodes == 0){
                throw invalid_argument("Lista vacia, operacion no permitida");
            }
            return this->head->data;
        }

        T back() {
            if(this->nodes == 0){
                throw invalid_argument("Lista vacia, operacion no permitida");
            }
            return this->tail->data;
        }

        void print(){
            Node<T>* actual = this->head;
            while(actual != nullptr){
                std::cout << actual->data << " ";
                actual = actual->next;
            }
            cout << "\n";
        }

        void printFromTailToHead(){
            Node<T>* actual = this->tail;
            while(actual != nullptr){
                std::cout << actual->data << " ";
                actual = actual->prev;
            }
            cout << "\n";
        }

        void push_front(T value) {
            if(this->head == nullptr){
                Node<T>* temp = new Node<T>(value);
                this->head = temp;
                this->tail = temp;
                this->nodes = 1;
            }
            else{
                Node<T>* temp = new Node<T>(value);
                temp->next = this->head;
                this->head->prev = temp;
                this->head = temp;
                this->nodes++;
            }
        }

        void push_back(T value) {
            if(this->head == nullptr){
                Node<T>* temp = new Node<T>(value);
                this->head = temp;
                this->tail = temp;
                this->nodes = 1;
            }
            else{
                Node<T>* temp = new Node<T>(value);
                temp->prev = this->tail;
                this->tail->next = temp;
                this->tail = temp;
                this->nodes++;
            }
        }

        void pop_front() {
            if(this->nodes == 0){
                throw invalid_argument("Lista vacia, operacion no permitida");
            }
            Node<T>* original_head = this->head;
            if(original_head->next != nullptr){
                this->head = this->head->next;  // update head with the second one
                this->head->prev = nullptr;     // head.prev = nullptr
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
            Node<T>* itera_node_new_tail = this->head;
            // actions for New tail
            for(int i=0; i<this->nodes-2; ++i){
                itera_node_new_tail = itera_node_new_tail->next;
            }
            if(itera_node_new_tail->next != nullptr){
                itera_node_new_tail->next->killSelf(); // Kill original tail
                this->tail = itera_node_new_tail;   // New tail
                this->tail->next = nullptr;
                this->nodes--; // Update number of lists's nodes
            }
            else{
                delete itera_node_new_tail;
                this->head = this->tail = nullptr;
                this->nodes--;
            }
        }

        T operator[](int index) {
            if(index < 0 || index >= this->nodes){
                throw out_of_range("Error bro! index out of range!" );
            }
            int i=0;
            Node<T>* temp_node = this->head;
            while(true){
                if(i == index){
                    return temp_node->data;
                }
                i++;
                temp_node = temp_node->next;
            }
        }

        bool empty() {
            return this->nodes == 0;
        }

        int size() {
            return this->nodes;
        }

        void clear() {
            if(this->nodes >= 1){
                std::cout << "Clear method \n";
                this->head->killSelf();
                this->head = nullptr;
                this->tail = nullptr;
                this->nodes = 0;
            }
        }

        void sort() {
            vector<int> values;
            Node<T>* actual = this->head;
            while(actual != nullptr){
                values.push_back(actual->data);
                actual = actual->next;
            }
            std::sort(values.begin(),values.end());
            actual = this->head;
            int i=0;
            while(actual != nullptr){
                actual->data =values[i];
                actual = actual->next;
                i++;
            }
        }
    
        void reverse() {
            vector<int> values;
            Node<T>* actual = this->head;
            while(actual != nullptr){
                values.push_back(actual->data);
                actual = actual->next;
            }
            actual = this->head;
            std::reverse(values.begin(), values.end());
            for(auto element : values){
                actual->data = element;
                actual = actual->next;
            }
        }

        string name() {
            return "Linked List";
        }

        BidirectionalIterator<T> begin() {
            // TODO
        }

	    BidirectionalIterator<T> end() {
            // TODO
        }

        void merge(LinkedList<T> &list) {
            if(list.nodes > 0){
                //cout << "Initial: number of nodes " << this->nodes << "\n";
                Node<T>* actual = list.head;
                while(actual != nullptr){
                    //cout << actual->data << " ";
                    this->push_back(actual->data);
                    //cout << "Node: " << this->nodes << "\n";
                    actual = actual->next;
                }
            }
        }

        ~LinkedList(){
            if(this->nodes > 0){
                std::cout << "\n";
                std::cout << "Destructor: eliminación de elementos de la Lista \n";
                clear();
            }
        }
};

#endif