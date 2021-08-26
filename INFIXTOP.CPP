#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
class exp{
public:
char infix[20],postfix[20],stack[20];
int top,post,len;
exp(){
top=-1;
post=-1;
}
void read();
int prec(char);
void convert();
void display();};//class close
void exp::read(){
cout<<"enter expression\n";
gets(infix);
cout<<"lenth of experssion";
cin>>len;
}
int exp::prec(char x){
switch(x){
case '^':
return (3);
case '/':
case '*':
return (2);
case '+':
case '-':
return (1);
}return 0;
}
void exp::convert(){
int i;

for(i=0;i<len;i++){
if(isalnum(infix[i]))
postfix[++post]=infix[i];
else if (infix[i]==')')
stack[++top]=infix[i];
else if(infix[i]=='('){
stack[++top]=infix[i];
while(stack[top] !='('){
postfix[++post]=stack[top];
top--;}top--;         }
else
{if(prec (infix[i])>prec(stack[top]))
stack[++top]=infix[top];
else if(prec(infix[i])>prec(stack[top])){
while(prec(stack[top])){
postfix[++post]=stack[top--];
}stack[++top]=infix[i];}
}//else
}//convert for
while(top!=-1){postfix[++post]=stack[top--];}
postfix[++post]='\0';
}//covert
void exp::display(){
cout<<"infix:\n";
puts(infix);
cout<<"\npostfix\n";
puts(postfix);
}//disp[ay


int main(){
exp e;
clrscr();
e.read();
e.convert();
e.display();
getch();
return 0;
}