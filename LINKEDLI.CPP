NULL){cout<<"list empty";}
else{ptr=head;
cout<<"elements are\n";
while(ptr->link!=NULL){
cout<<"ptr->data\t";
ptr=ptr->link;
}
cout<<ptr->data<<"\n";
} }
void main(){
list l;
int n=0;
char ch;
clrscr();
do{l.create();
n++;
cout<<"want to continu e\n";
cin>>ch;
}while(ch=='y'||ch=='Y');
l.disp();
getch();

}