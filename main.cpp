#include <iostream>
#include "test/tester.h"

using namespace std;

int main(int argc, char *argv[]) {
    cout << "===========================================================" << endl;
    cout << "\tLists Practice" << endl;
    cout << "===========================================================" << endl << endl;

    Tester::execute();
    /*
    ForwardList<int> linkedList;
    ForwardList<int> linkedList2;
    linkedList.push_front(20);
    linkedList.push_front(30);
    linkedList.push_front(50);
    linkedList.push_front(100);
    //linkedList2.push_back(200);
    //linkedList2.push_back(300);
    linkedList.print();
    for(auto it = linkedList.begin(); it != linkedList.end(); ++it){
        cout << *it << " ";
    }
    cout << '\n';*/
    /*linkedList2.print();
    cout << "linkedList front, back and size \n";
    cout << linkedList.front() << '\n';
    cout << linkedList.back() << '\n';
    cout << linkedList.size() << '\n';
    cout << "linkedList2 front, back and size \n";
    cout << linkedList2.front() << '\n';
    cout << linkedList2.back() << '\n';
    cout << linkedList2.size() << '\n';
    cout << "Merge \n";
    linkedList.merge(linkedList2);
    cout << "linkedList front, back and size \n";
    cout << linkedList.front() << '\n';
    cout << linkedList.back() << '\n';
    cout << linkedList.size() << '\n';
    linkedList.print();

    cout << "Reverse: \n";
    linkedList.reverse();
    linkedList.print();
    cout << linkedList.front();
    cout << linkedList.back();
    cout << "Slicing: \n";
    cout << linkedList[2] << '\n';
    cout << linkedList[3] << '\n';
    cout << "Sorting: \n";
    linkedList.sort();
    linkedList.print();
    cout << linkedList.size() << '\n';
    cout << "Slicing: \n";
    cout << linkedList[2] << '\n';
    cout << linkedList[3] << '\n';
    //cout << "Pop_back: \n";
    //linkedList.pop_back();
    //linkedList.print();
    //cout << linkedList.size() << '\n';
    cout << linkedList.front();
    cout << linkedList.back();
    cout << "Pop_front: \n";
    linkedList.pop_front();
    linkedList.print();
    cout << linkedList.size() << '\n';

    cout << linkedList.front();
    cout << linkedList.back();
    cout << "Slicing: \n";
    cout << linkedList[0] << "\n";
    cout << linkedList[1] << "\n";
    //cout << linkedList[2] << "\n";
    cout << "Sorting: \n";
    linkedList.sort();
    linkedList.print();
    */
    //Linked List
    /*
    cout << "LinkedList \n";
    LinkedList<int> linkedL1;
    linkedL1.push_front(20);
    linkedL1.push_front(30);
    //linkedL1.print();
    //linkedL1.printFromTailToHead();
    linkedL1.push_back(40);
    linkedL1.push_back(50);
    linkedL1.push_back(60);
    linkedL1.print();
    for(auto it = linkedL1.begin(); it != linkedL1.end(); ++it){
        cout << *it << " ";
    }
    cout << '\n';
     */
    /*cout << "size: " << linkedL1.size() << '\n';
    linkedL1.printFromTailToHead();
    cout << linkedL1.front() << '\n';
    cout << linkedL1.back() << '\n';
    cout << "pop_front \n";
    linkedL1.pop_front();
    linkedL1.print();
    cout << linkedL1.front() << '\n';
    cout << linkedL1.back() << '\n';
    cout << "size: " << linkedL1.size() << '\n';
    cout << "pop_back \n";
    linkedL1.pop_back();
    linkedL1.print();
    linkedL1.printFromTailToHead();
    cout << linkedL1.front() << '\n';
    cout << linkedL1.back() << '\n';
    cout << "size: " << linkedL1.size() << '\n';

    // Circular List
    cout << "Circular \n";
    CircularLinkedList<int> circularL1;
    circularL1.push_front(10);
    circularL1.push_front(20);
    circularL1.push_front(30);
    cout << "Print normal: \n";
    circularL1.print();
    */
    /*
    cout << "Print reverse \n";
    circularL1.printFromTailToHead();
    cout << "front: " << circularL1.front() << '\n';
    cout << "back: " << circularL1.back() << '\n';
    cout << "head_prev: " << circularL1.head_prev() << '\n';
    cout << "tail_next: " << circularL1.tail_next() << '\n';
    circularL1.push_back(50);
    circularL1.push_back(60);
    circularL1.push_back(70);
    cout << "Print normal: \n";
    circularL1.print();
    cout << "Print reverse \n";
    circularL1.printFromTailToHead();
    cout << "front: " << circularL1.front() << '\n';
    cout << "back: " << circularL1.back() << '\n';
    cout << "head_prev: " << circularL1.head_prev() << '\n';
    cout << "tail_next: " << circularL1.tail_next() << '\n';
    cout << "Pop front: \n";
    circularL1.pop_front();
    cout << "Print normal: \n";
    circularL1.print();
    cout << "Print reverse \n";
    circularL1.printFromTailToHead();
    cout << "front: " << circularL1.front() << '\n';
    cout << "back: " << circularL1.back() << '\n';
    cout << "head_prev: " << circularL1.head_prev() << '\n';
    cout << "tail_next: " << circularL1.tail_next() << '\n';
    cout << "Pop Back: \n";
    circularL1.pop_back();
    cout << "Print normal: \n";
    circularL1.print();
    cout << "Print reverse \n";
    circularL1.printFromTailToHead();
    cout << "front: " << circularL1.front() << '\n';
    cout << "back: " << circularL1.back() << '\n';
    cout << "head_prev: " << circularL1.head_prev() << '\n';
    cout << "tail_next: " << circularL1.tail_next() << '\n';
    cout << "Size: " << circularL1.size() << '\n';
    //cout << "Clear: \n";
    //circularL1.clear();
    //cout << "Size: " << circularL1.size() << '\n';
    cout << "Sort circular List \n";
    circularL1.sort();
    cout << "Print normal: \n";
    circularL1.print();
    cout << "front: " << circularL1.front() << '\n';
    cout << "back: " << circularL1.back() << '\n';
    cout << "head_prev: " << circularL1.head_prev() << '\n';
    cout << "tail_next: " << circularL1.tail_next() << '\n';
    cout << "Size: " << circularL1.size() << '\n';
    cout << "Reverse circular List \n";
    circularL1.reverse();
    cout << "Print normal: \n";
    circularL1.print();
    cout << "front: " << circularL1.front() << '\n';
    cout << "back: " << circularL1.back() << '\n';
    cout << "head_prev: " << circularL1.head_prev() << '\n';
    cout << "tail_next: " << circularL1.tail_next() << '\n';
    cout << "Size: " << circularL1.size() << '\n';
    CircularLinkedList<int> circularL2;
    circularL2.push_back(100);
    circularL2.push_back(200);
    circularL2.push_back(300);
    cout << "Print L2 normal: \n";
    circularL2.print();
    cout << "front: " << circularL2.front() << '\n';
    cout << "back: " << circularL2.back() << '\n';
    cout << "head_prev: " << circularL2.head_prev() << '\n';
    cout << "tail_next: " << circularL2.tail_next() << '\n';
    cout << "Size: " << circularL2.size() << '\n';
    cout << "Merge \n";
    circularL1.merge(circularL2);
    cout << "Print normal: \n";
    circularL1.print();
    cout << "front: " << circularL1.front() << '\n';
    cout << "back: " << circularL1.back() << '\n';
    cout << "head_prev: " << circularL1.head_prev() << '\n';
    cout << "tail_next: " << circularL1.tail_next() << '\n';
    cout << "Size: " << circularL1.size() << '\n';
    */
    /*CircularLinkedList<int> circularL1;
    circularL1.push_back(5);
    circularL1.pop_back();
    CircularLinkedList<int> circularL2;
    circularL1.merge(circularL2);*/
    return EXIT_SUCCESS;
}
