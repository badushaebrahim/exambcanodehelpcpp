#include<iostream.h>
#include<conio.h>
void main(){
int a[10],del,pos,k,dg,t1,t,n,i,x,co=-1;
clrscr();
do{
cout<<"1:insert element to array\n2:diplay array\n3:delete elements from last\n4:insert at  a position\n5:delete element form a poition\n";
cin>>x;
switch(x){
case 1:
if(co==-1){
co=0;}
cin>>a[co];
co++;
break;
case 2:
if(co==-1){
cout<<"no element\n";}
else{
for(i=0;i<co;i++){
cout<<a[i]<<"\t";
}cout<<"\n";}break;
case 3:
//cout<<"no of elementsbefor"<<co;
for(i=0;i<co;i++){
a[co-1]=a[co];}
if(co!=0)
co--;
else
co=-1;
//cout<<"no of e/n"<<co;
break;
case 4:
cout<<"enter position\n";
cin>>pos;
cout<<"enter element\n";
cin>>dg;
int t1;
t=dg;
k=co+1;
pos=pos-1;
for(i=co;i>=pos;i--){
a[i+1]=a[i];}
a[pos]=dg;
co++;
break;
case 5:
cout<<"enter position to be deleted \n";
cin>>del;
for(i=del;i<co;i++){
a[i]=a[i+1];}co--;
}}while(x<6);
getch();
}


