

typedef struct _node {
    void *data;
    struct _node *next;
}Node;

class SList
{
public:
    SList() :node(nullptr) { }
    SList(int n);
private:
    Node *node;
};