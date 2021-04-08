#include<iostream.h> 
#include<conio.h> 
#include<process.h> 
#define size 3 
class stack 
{ 
int arr[size]; 
int top; 
public: 
stack() 
{ 
top=-1; 
} 
void push(); 
int pop(); 
void display(); 
}; 
void main() 
{ 
clrscr(); 
stack s; 
int ch; 
do 
{ 
cout<<"\n\nENTER THE OPERATION TO BE PERFORMED:"; 
cout<<"\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT"; 
cout<<"\nENTER YOUR CHOICE :"; 
cin>>ch; 
switch(ch) 
{ 
case 1: s.push(); 
break; 
case 2:int i; 
i=s.pop(); 
if(i!=-1) 
cout<<"\nTHE POPED VALUE IS :"<<i; 
break; 
case 3:s.display(); 
break; 
 
case 4:exit(0); 
break; 
} 
}while(ch<4); 
getch(); 
} 
 
void stack::push() 
{ 
int val; 
if(top==size-1) 
cout<<"\nSTACK IS OVERFLOW!!"; 
else 
{ 
cout<<"\nENTER THE VALUE TO BE PUSHED:"; 
cin>>val; 
top++; 
arr[top]=val; 
} 
} 
int stack::pop() 
{ 
if(top==-1) 
{ 
cout<<"\nSTACK UNDERFLOW "; 
return -1; 
} 
else 
{ 
int item=arr[top]; 
top--; 
return item; 
} 
} 
void stack::display() 
{ 
int i; 
if(top==-1) 
cout<<"\nEMPTY STACK!!!!\n"; 
else 
{ 
cout<<"\nTHE ARRAY ELEMENTS ARE :"; 
for(i=top;i>=0;i--) 
cout<<"\n"<<arr[i]<<"\t"; 
} 
} 
