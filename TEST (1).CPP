#include<iostream.h>
#include<conio.h>
#include<process.h>
void binary(int a[],int x1,int n){
int i,f=0,half=n/2;
if(x1<(a[n/2])){
for(i=0;i<(n/2);i++){
if(a[i]==x1){
cout<<"element found";
f++;
break;
}
}
}
if((f==0)&&(x1>half)){
for(i=half;i<n;i++){
if(a[i]==x1){
cout<<"element found";
f++;
break;}
}  }
if((f==0)&&(x1==a[half])){
cout<<"element found";
f++;
}
else{
if(f==0){cout<<"no found";}
    }

}
void swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;

}

int partition(int a[],int l,int h)
{
  int pivot=a[h];
  int i=l-1;
for(int j=l;j<=h-1;j++)
  {
    if(a[j]<=pivot)
    {
i++;
     swap(&a[i],&a[j]);

    }
  }
  swap(&a[i+1],&a[h]);
  return (i+1);
}



void quicksort(int a[],int l,int h)
{
  if(l<h)
  {
  int pivot=partition(a,l,h);
  quicksort(a,l,pivot-1);
  quicksort(a,pivot+1,h);

  }
}
void display(int a[],int n)
{
for(int i=0;i<n;i++)
  {
cout<<a[i]<<"\t";
  }
}

void main()
{
clrscr();
  int n,i,q;
cout<<"\nEnter the number of data element to be sorted: ";
cin>>n;
  int arr[25];
  for(i=0;i<n;i++)
  {
cout<<"\nEnter element"<<i+1<<":";
cin>>arr[i];
  }
cout<<"\nArray elements before sorting:";

  display(arr,n);
  cout<<"elements after sorting\n";
  quicksort(arr,0,n-1);
  display(arr,n);
  cout<<"enter element to be searched\n";
  cin>>q;
  binary(arr,q,n);
getch();

}
