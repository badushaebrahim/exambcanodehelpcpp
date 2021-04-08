#include<iostream.h>
#include<conio.h>
#include<process.h>
#define size 3
class queue
{
  int front,rear;
  int arr[size];
   public:
   queue()
   {
      front=rear=-1;
   }
   void insert();
   int del();
   void display();


};
void queue::insert()
{
     int item;
     if(rear==size-1)
     cout<<"\n\tQUEUE IS FULL......\n";
     else
     {
	cout<<"\nENTER THE ELEMENT TO BE INSERTED:";
	cin>>item;
	rear++;
	arr[rear]=item;

     }
}

int queue::del()
{
     if(((front==-1)&&(rear==-1))||(front>=rear))
     {
	cout<<"\n\tQUEUE IS EMPTY.......\n";
	return -1;
     }
     else
	front++;
     return arr[front];
}

void queue::display()
{
     if(((front==-1)&&(rear==-1))||(front==rear))
	cout<<"\n\tQUEUE IS EMPTY.......\n";
     else
     {
	cout<<"\nQUEUE ELEMENTS ARE:";
	cout<<"\n******************\n";
	for(int i=front+1;i<=rear;i++)
	{
	  cout<<"\t"<<arr[i];
	}
     }
}

void main()
{
	queue q;
	clrscr();
	int item,ch;
	do
	{
	  cout<<"\n\t\t\t  MENU";
	  cout<<"\n\t\t\t  ----";
	  cout<<"\n\t\t\t1.INSERTION\n\t\t\t2.DELETION\n\t\t\t3.DISPLAY\n\t\t\t4.EXIT";
	  cout<<"\n\n\tENTER YOUR CHOICE :";
	  cin>>ch;
	  switch(ch)
	  {
	    case 1: q.insert();
		    break;

	    case 2:
		    int k;
		    k=q.del();
		    if(k!=-1)
		       cout<<"\n\tTHE DELETED VALUE IS:"<<k;
		    break;

	    case 3:
		    q.display();
		    break;

	    case 4:
		    exit(0);
	  }
	  getch();

       }while(ch<4);
 }
