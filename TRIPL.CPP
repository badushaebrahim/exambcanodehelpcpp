#include<iostream.h>
#include<conio.h>
void main(){
int a[10][10],n,i,j,x,sp[10][10],sa[10][10],k=0;
clrscr();
cout<<"enter the size of a sparce matricx";
cin>>n;
cout<<"enter a sparce matrics\n";
for(i=0;i<n;i++){
for(j=0;j<n;j++){
cin>>a[i][j];}}
//cout<<"row\tcolum\tvalue\t";
for(i=0;i<n;i++){
for(j=0;j<n;j++){
cout<<a[i][j];
if(a[i][j]>0){
sp[k][0]=i;
sp[k][1]=j;
sp[k][2]=a[i][j];
sa[k][0]=j;
sa[k][1]=i;
sa[k][2]=a[i][j];
k++;
}
}}
cout<<"\nrows\tcolum\tvalue\t\n";
for(i=0;i<k;i++){
for(j=0;j<3;j++){
cout<<sp[i][j]<<"\t";}
cout<<"\n";
}
cout<<"transpose of sparce matriucs\nrows\tcolum\tvalue\t\n";
for(i=0;i<k;i++){
for(j=0;j<3;j++){
cout<<sa[i][j]<<"\t";
}                  cout<<"\n";
}
	    getch();}
