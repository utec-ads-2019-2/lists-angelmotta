#include <iostream>
#include "test/tester.h"

using namespace std;

int main(int argc, char *argv[]) {
    cout << "===========================================================" << endl;
    cout << "\tLists Practice" << endl;
    cout << "===========================================================" << endl << endl;

    Tester::execute();
    ForwardList<int> linkedList;
    linkedList.sort();
    ForwardList<int> linkedList2;
    //linkedList.push_front(20);
    //linkedList.push_front(30);
    //linkedList.print();
    /*
    linkedList.push_front(50);
    linkedList.push_back(100);
    linkedList2.push_back(200);
    linkedList2.push_back(300);
    linkedList.print();
    linkedList2.print();
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
    cout << linkedList[3] << '\n';*/
    //cout << "Pop_back: \n";
    //linkedList.pop_back();
    //linkedList.print();
    //cout << linkedList.size() << '\n';
    /*cout << linkedList.front();
    cout << linkedList.back();
    cout << "Pop_front: \n";
    linkedList.pop_front();
    linkedList.print();
    cout << linkedList.size() << '\n';*/
    /*
    cout << linkedList.front();
    cout << linkedList.back();
    cout << "Slicing: \n";
    cout << linkedList[0] << "\n";
    cout << linkedList[1] << "\n";
    //cout << linkedList[2] << "\n";
    cout << "Sorting: \n";
    linkedList.sort();
    linkedList.print();*/

    //Linked List
    /*LinkedList<int> linkedL1;
    linkedL1.push_front(20);
    linkedL1.push_front(30);
    linkedL1.print();
    linkedL1.printFromTailToHead();
    linkedL1.push_back(40);
    linkedL1.push_back(50);
    linkedL1.push_back(60);
    linkedL1.print();
    cout << "size: " << linkedL1.size() << '\n';
    //linkedL1.printFromTailToHead();
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
    cout << "size: " << linkedL1.size() << '\n';*/
    return EXIT_SUCCESS;
}
