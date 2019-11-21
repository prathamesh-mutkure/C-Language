#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

typedef struct Node Node;

void print(Node* head)
{
    Node* node = head;
    cout << endl;
    do
    {
        cout << node->data << "\t";
        node = node->next;
    } while (node != head);
}

Node* search(Node* head, int data)
{
    Node* node = head;
    do
    {
        if (node->data == data) {
            cout << "\nElement found!";
            return node;
        }
        node = node->next;
    } while (node != head);

    cout << "\nElement not found!";
    return nullptr;
}

int main()
{

    size_t s = sizeof(Node);

    Node* head = (Node*) malloc(sizeof(Node));
    Node* first = (Node*) malloc(sizeof(Node));
    Node* second = (Node*) malloc(sizeof(Node));
    Node* third = (Node*) malloc(sizeof(Node));

    head->data = 100;
    first->data = 80;
    second->data = 50;
    third->data = 120;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = head;

    print(head);
    search(head, 180);

    free(second);
    first->next = third;
    print(head);

    return 0;
}