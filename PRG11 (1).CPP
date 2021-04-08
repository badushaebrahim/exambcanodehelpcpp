#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *link;
};//*newnode,*head,*ptr,*temp;

/*class list
{
  public:
  void create();
  void display();
  list()
  {
    head=NULL;
  }
};

void list::create()
{
  newnode=new(struct node);
  cout<<"\nEnter data ";
  cin>>newnode->data;
  newnode->link=NULL;
  if(head==NULL)
  {
  head=newnode;
  }
  else
  {
  ptr=head;
  while(ptr->link!=NULL)
  {
    ptr=ptr->link;
  }
  ptr->link=newnode;
   }
}


*/

void display(struct node *head)
{
   /* if(head!=NULL)
    {
    cout<<"\nEmpty list";
    }
    else
    {
    ptr=head;
    cout<<"\nElements are ";
   */ while(head!=NULL)
   /* {
      ptr=ptr->link;
      cout<<ptr->data<<" ";
    }
    cout<<ptr->link<<"\n";
    }
  } */
  {
   cout<<"\n"<<head->data<<" ";
  }
  head=head->link;

}

  void concat(struct node *a,struct node *b)
  {
    struct node *ptr;
    ptr=a;
    while(ptr->link!=NULL)
    {
      ptr=ptr->link;
    }
    ptr->link=b;
    ptr=a;
    cout<<"\nElements after concatination :";
    while(ptr!=NULL)
    {
      cout<<"\n"<<ptr->data<<" ";
      ptr=ptr->link;
    }
  }
  void main()
  {
    int i,n;
    clrscr();
    struct node *prev,*a,*p,*b;
   /* do
    {

      l.create();
      n++;
      cout<<"\nDo you want to continue";
      cin>>ch;
    }
      while(ch=='Y'||ch=='y');
      l.display();
     */
     cout<<"\nEnter the no:of elements in first linked list :";
     cin>>n;
     a=NULL;for(i=0;i<n;i++)
     {
       cout<<"\nEnter the elements:"<<i+1<<"\n";
       p=(struct node*)malloc(sizeof(struct node));
       cin>>p->data;
       if(a==NULL)
       a=p;
       else
       a->link=p;
     }


     cout<<"\nEnter the elements in second linked list";
     cin>>n;
     b=NULL;
     for(i=0;i<n;i++)
     {
       cout<<"\nEnter the elements:"<<i+1<<"\n";
       p=(struct node*)malloc(sizeof(struct node));
       cin>>p->data;
       p->link=NULL;
       if(b==NULL)
       b=p;
       else
       b->link=p;
     }


     concat(a,b);

      getch();
  }