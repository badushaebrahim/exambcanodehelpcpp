#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{int data;
struct node*link;
}*newnode,*head,*ptr,*temp;
class list
 {public:
	void create();
	void sort(int);
	void display();
	list()
	{head=NULL;
	}
};
void list::create()
{newnode=new(struct node);
cout<<"enter data\n";
cin>>newnode->data;
newnode->link=NULL;
if(head==NULL)
{head=newnode;
}
else
{ptr=head;
while(ptr->link!=NULL)
 {ptr=ptr->link;
 }
 ptr->link=newnode;
 }
}
void list::display()
{if(head==NULL)
 {cout<<"list empty\n";
 }
 else
 {ptr=head;
 cout<<"elements are\n";
 while(ptr->link!=NULL)
 {
 cout<<ptr->data<<" ";
 ptr=ptr->link;
 }
cout<<ptr->data<<"\n";
}
}


void list:: sort(int n){
int x;
ptr=head;
for(int i=1;i<=n;i++){
temp=ptr->link;
for(int j=i+1;j<=n;j++){
if(ptr->data>temp->data){
x=ptr->data;
ptr->data=temp->data;
temp->data=x;}
temp=temp->link;}ptr=ptr->link;}
}
void main()
{
list l;
int n=0;
char ch;
clrscr();
do
{
 l.create();
 n++;
 cout<<"do u want to continue\n";
 cin>>ch;
 }
while(ch=='Y'||ch=='y');
 l.display();
 l.sort(n);
 cout<<"sorted linked list\n";
 l.display();
 getch();
 }