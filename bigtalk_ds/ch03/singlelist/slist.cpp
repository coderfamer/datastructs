#include <iostream>
#include <cstdlib>
#include "slist.h"

using std::cout;
using std::endl;

void SList::CreateElems(int n ) 
{
    for (int i = 0; i < n; i++) {
        Node *p = _head;
        uint num = rand() % 100 + 1;
        if (_head == nullptr) {
            _head = new Node((void *)num);
        } else {
            if (p->next == nullptr) {
                p = new Node(&num);
                _size += 1;
            }
            p = p->next;
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