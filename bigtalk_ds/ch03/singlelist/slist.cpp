#include <iostream>
#include <cstdlib>
#include "slist.h"

using std::cout;
using std::endl;

void SList::CreateElems(int n ) 
{
    for (int i = 0; i < n; i++) {
        uint num = rand() % 100 + 1;
        if (_head == nullptr) {
            _head = new Node((void *)num);
        } else {
            Node *p = new Node((void *)num);
            if (p) {
                p->next = _head;
               _head = p;
            }
        }      

        int b = 0;
    }
}

void SList::debug()
{
    Node *p = _head;
    while (p != nullptr) {
        std::cout << *(int*)p->data << "->";
        p = p->next;
    }
    cout << endl;
}