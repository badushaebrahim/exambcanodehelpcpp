#inlucde<iostream.h>
#include<conio.h>
#include<process.h>
struct node{
    int data;
    struct node *flink;
    struct node *blink;
}*newnode,*lastnode,*head,*ptr;
class list{
    public:
    int count;
    void create();
    void rm();
    void disp();
    list();{
        head = NULL;
    }
};
void list::create(){
    newnode=new (struct node);
    cout<<"enter elememns";
    cin>>newnode->data;
    if(head==NULL){
        head=newnode;
        lastnode=newnode;
        lastnode=newnode;
        count++;
    }
else{
    lastnode->flink=newnode;
    newnode->blink=lastnode;
    lastnode=newnode;
    newnode->flink=NULL;
    count++;
}
}
void list::rm(){
    if(head==NULL){
        cout<<"list empty";
    }
    else{ptr=head;
    head=ptr->flink;
    delete ptr;
    count--;
   head=->blink=NULL;}
   if(count==0){
       head==NULL;

   }
}void list::disp(){
    if(head==NULL){
        count<<"empty list";
    }
    else{
        cout<<"elements are";
        ptr=head;
        while(ptr->flink!=NULL){
            cout<<ptr->data<<" ";ptr=head;
            ptr=ptr->flink;
        }
    cout<<ptr->data<<"\n";
    }
}
void main(){
    list l;
    int n;
    clrscr();
    do{
        cout<<"menu\n___\n1=create\n2=remove\n3=display\nexit";
        cin>>n;
        switch(n){
            case 1:l.create();
            break;
            case 2:l.rm();
            break;
            case 3:l.disp();
            break;
            default:
            cout<<"invalid";
            break;
        }
    }while(n!=4);
    getch();
}
