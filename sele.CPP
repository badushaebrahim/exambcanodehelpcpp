#include<iostream.h>
#include<conio.h>
void selectionsort(int a[],int n);
void main()
{
  int A[20],n;
clrscr();
cout<<"\nEnter the number of elements :";
cin>>n;
cout<<"\nEnter the elements :";
for(int i=0;i<n;i++)
cin>>A[i];
cout<<"\nArray before sorting :\n";
for(int j=0;j<n;j++)
cout<<A[j]<<"\t";
selectionsort(A,n);

getch();
}
 void selectionsort(int a[],int n)
 {
   int i,small,pos,temp,j,flag=0;
   for(i=0;i<n;i++)
   {
     small=a[i];
pos=i;
     for(j=i+1;j<n;j++)
     {
       if(a[j]<small)
       {
	 small=a[j];
	pos=j;
	 flag=1;
       }
     }
     if(flag==1)
     temp=a[i];
     a[i]=a[pos];
     a[pos]=temp;

   }
cout<<"\nSortedarray :\n";
   for(j=0;j<n;j++)
cout<<a[j]<<"\t";
 }

