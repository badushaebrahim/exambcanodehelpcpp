#include<iostream.h>
#include<conio.h>
#include<process.h>
struct mode{
int data;
struct node*link;
}*newnode,*lastnode,*head,*ptr;
class list{
public:
void insert();
void remove();
void display();
list(){
head=NULL;
}
};
void list::insert(){
newnode=new (struct node);
cout<<"enter data";
cin>>newnode->data;
if(head==NULL){head=newnode;
newnode->link=head;
lastnode=newnode;}
else{lastnode->link=newnode;
newnode->link=head;
lastnode=newnode;
}
}
void list::remove(){
if(head==NULL){
cout<<"list is empty";
}
else{ptr=head;
head=ptr->link;
delete ptr;
lastnode->link=head}
}
void list::display(){
if(head==NULL){
cout<<"list empty";
}
else{
ptr=head;
while(ptr->link!=head){
cout<<ptr->data<<" ";
ptr=ptr->link;}cout<<ptr->data<<"\n";}
}
void main(){
int n;
list l;
clrscr();
do{cout<,"1inser\n2remove\n3display\n4exit\n";
cin>>n;
switch(n){
case 1:
l.insert();
break;
case 2:l.remove();
break;
case 3:
l.display();
break;
case 4:
exit(1);
}
}while(n<=4);
getch();
}