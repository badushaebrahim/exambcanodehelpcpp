#include<iostream.h>
#include<conio.h>
void main(){
int i,f=0,x,q,n,a[10];
clrscr();
cout<<"enter size of array";
cin>>n;
for(i=0;i<n;i++){
cin>>a[i];}
cout<<"enter element to be searched\n";
cin>>q;
for(i=0;i<n;i++)
{if(a[i]==q)
cout<<"elemet found at"<<i+1<<"position\n";
f=1;
}
//cout<<f;
if(f!=0)
cout<<"element not found";
getch();
}