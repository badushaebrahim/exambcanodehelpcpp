#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#define size
class cqueue
{
 int info[3];
 int front,rear;
 public:
 cqueue()
 {
   front=rear=-1;
 }
 void insert(int);
 int del();
 void display();

 };

 void cqueue::insert(int n)
{
  int rr=(rear+1)%3;
  if((rear+1==front)||(rear==(3-1) &&front==0))
  {
	  cout<<"\nCircular Queue full.";
	  return;
  }
  if(front==-1)
  {
	front=0;
	rear=0;
  }
  else
  {
	if(rear==3-1)
	   rear=0;
	else
	   rear=rear+1;
  }
	info[rear]=n;


}

int cqueue::del()
{
  int n=-999;
  if(front==-1)
  {
    cout<<"\nEmpty queue!!!\n";
    return n;
  }
  n=info[front];
  if(front==rear)
  {
    front=-1;
    rear=-1;
  }
  else
  {
    if(front==3-1)
      front=0;
      else
      front=front+1 ;


   }

  return(n);
}

void cqueue::display()
{
  int f=front ,r=rear;
  if(front==-1)
  {
   cout<<"\nEmpty queue\n";
   return;
  }
  if(f<=r)
  {
	while(f<=r)
	{
	  cout<<info[f]<<" " ;
	  f++;
	}
  }
  else
  {
	while(f<=3-1)
	{
	  cout<<info[f]<<" " ;
	  f++;
	}
	f=0;
	while(f<=r)
	{
	  cout<<info[f]<<" ";
	  f++;
	}
  }
  cout<<"\n";


}

void  main()
{
  clrscr();
  cqueue q;
  int ch,n,val;
  do
  {
   cout<<"\n1.Insertion";
   cout<<"\n2.Deletion";
   cout<<"\n3.Disply";
   cout<<"\n4.Exit";

   cout<<"\nEnter the choice:";
   cin>>ch;
   switch(ch)
    {
      case 1:cout<<"Enter the value to be inserted:\t";
	     cin>>val;
	     q.insert(val);
	     break;

      case 2: n=q.del();
	      if(n!=-999)
		 cout<<"\nThe deleted element is :"<<n;
	      break;

      case 3: q.display();
	      break;

      case 4:exit(0);
      }
      getch();

  } while(ch!=4);
}
