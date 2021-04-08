#include<iostream.h>
#include<conio.h>
void insertionsort(int a[],int n);
void main()
{
  int list[20],n;
clrscr();
cout<<"\nEnter the number elements:";
cin>>n;
cout<<"\nEnter the elements :";
for(int i=0;i<n;i++)
cin>>list[i];
cout<<"\nArray before sorting \n";
  for(i=0;i<n;i++)
cout<<list[i]<<"\t";
insertionsort(list,n);
getch();
}
void insertionsort(int list[],int n)
{
  int i,k,j,temp;
  for(i=1;i<n;i++)
  {
    temp=list[i];
    j=i-1;
    while((temp<list[j])&&(j>=0))
    {
      list[j+1]=list[j];
      j--;
    }
    list[j+1]=temp;
   }
cout<<"\nSorted Array \n";
    for(k=0;k<n;k++)
cout<<list[k]<<"\t";



}
