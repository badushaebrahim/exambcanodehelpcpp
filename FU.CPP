#include <iostream.h>
#include<conio.h>

class Node {
public:
    int data;
    Node* next;
};


void printList(Node* n)
{
    while (n != NULL) {
	cout << n->data << " ";
	n = n->next;
    }
}


int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
   clrscr();
    // allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1; // assign data in first node
    head->next = second; // Link first node with second

    second->data = 2; // assign data to second node
    second->next = third;

    third->data = 3; // assign data to third node
    third->next = NULL;

    printList(head);
   getch();
    return 0;
}
