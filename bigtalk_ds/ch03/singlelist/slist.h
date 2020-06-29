

class Node{
public:
    Node(void *data_ = (void *)0,Node *next_ = nullptr) {
        data = data_;
        next = next_;
    }
    void *data;
    Node *next;
};

class SList
{
public:
    SList() : _head(nullptr), _size(0){}
    //~SList();

    void CreateElems(int n);

    void debug();
private:
    Node * _head;
    uint _size;
};