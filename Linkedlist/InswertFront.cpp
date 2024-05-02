#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        cout<<"this is default constructor"<<endl;
        this->next=NULL;
    }
    Node(int data){
        cout<<"this is parameterized constructor"<<endl;
        this->data=data;
        this->next=NULL;
    }
};

void printlist(Node* head){
    int count=0;
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
        count++;
    }
    cout<<"number of nodes : "<<count<<endl;
}
//INSERT AT FRONT================================================================================================ 
// void insertHead(Node* &head,int data){
//     //CREATE NEW NODE
//     Node* newNode=new Node(data);
//     //ATTACH NEW NODE TO HEAD NODE
//     newNode ->next=head;
//     //update head
//     head=newNode;

// }


//if LL IS EMPTY===
void insertHead(Node* &head,int data){
    if(head==NULL){
        Node* newNode=new Node();
        head=newNode;
    }
    else{
        //CREATE NEW NODE
    Node* newNode=new Node(data);
    //ATTACH NEW NODE TO HEAD NODE
    newNode ->next=head;
    //update head
    head=newNode;
    }
}



int main(){


    //CREATION OF NODE
    // Node a;//static object

    // Node* head=new Node();//dynamic object

    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    Node* fifth=new Node(60);


//creation of linked list;
    first ->next=second;
    second ->next=third;
    third ->next=fourth;
    fourth ->next=fifth;
    fifth ->next=NULL;

    Node* head=first;
    cout<<"printing all LL"<<endl;
    printlist(head);

    
    //insertion

    insertHead(head, 500);
    printlist(head); 


    return 0;

}