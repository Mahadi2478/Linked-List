code Node{

    Public:
    int data
    Node* next;

    Node(int data){
        this->data=data;
        this->next= NULL;
    }

    void insertathead(Node* &head,int d){

        Node* temp=new Node(d);
        temp->next=head;
        head=temp;
    }

    void print(Node* &head){

        Node* temp=head;

        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }

        cout<<endl;
    }
}

int main(){

    Node* node1=new node(10);

    Node* head=node1;
    print(head);

    insertAthead(head,12)
    print(head);

    insertathead(head, 15);
    print (head);
    return 0;
}