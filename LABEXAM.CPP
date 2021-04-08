#include<iostream.h>
#include<conio.h>
class matrix
{
	int a[10][10],i,j,r1,r2,c1,c2;
	public:
		void read();
		void display();
		friend matrix operator +(matrix,matrix);
};
void matrix::read()
{
	cout<<"Enter the number of rows and columns of array:\n";
	cin>>r1>>c1;
	cout<<"Enter the elements of the array:\n";
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cin>>a[i][j];
		}
	}
}
void matrix::display()
{
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
matrix operator + (matrix m1,matrix m2)
{
	matrix m3;
	int i,j;
	for(i=0;i<m1.r1;i++)
	{
		for(j=0;j<m1.c1;j++)
		{
		m3.a[i][j]=m1.a[i][j]+m2.a[i][j];
		}
	}
	return m3;
}
void main()
{
	matrix m1,m2,m3;
	clrscr();
	m1.read();
	cout<<"First Array:\n";
	m1.display();
	m2.read();
	cout<<"\nSecond Array:\n";
	m2.display();
	m3=m1+m2;
	cout<<"\nSum:\n";
	m3.display();
	getch();
}


