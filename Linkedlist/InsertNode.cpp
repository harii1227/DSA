#include <iostream>
using namespace std;

struct node
{

    int data;
    node *next;
};

void printList(node *n)
{
    int count = 0;
    while (n != NULL)
    {
        cout << n->data << endl;
        n = n->next;
        count++;
    }
    cout << "no of element in linked list is : " << count << endl;
};

//======METHOD 1=============
// node *push(node *head, int newData){
//     node *newNode=new node();
//     newNode ->data=newData;
//     newNode ->next=head;
//     head = newNode;
//     return head;
// }

//===========METHOD 2========
node push(node **head_ref, int newData)
{
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = *head_ref;
    *head_ref = newNode;
}

int main()
{

    // METHOD 1====
    //  node *head=NULL;
    //  head=push(head, 5);
    //  head=push(head, 15);
    //  head=push(head , 7);

    // METHOD 2========
    node *head = NULL;
    push(&head, 5);
    push(&head, 15);
    push(&head, 7);

    printList(head);
}