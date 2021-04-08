#include<iostream.h>
#include<conio.h>

struct node
{
    int data;
    node *next;
};

class linked_list
{
private:
    node *head,*tail;
public:
    linked_list()
    {
	head = NULL;
	tail = NULL;
    }

    void add_node(int n)
    {
	node *tmp = new node;
	tmp->data = n;
	tmp->next = NULL;

	if(head == NULL)
	{
	    head = tmp;
	    tail = tmp;
	}
	else
	{
	    tail->next = tmp;
	    tail = tail->next;
	}
    }

    node* gethead()
    {
	return head;
    }

    static void display(node *head)
    {
	if(head == NULL)
	{
	    cout << "NULL" << endl;
	}
	else
	{
	    cout << head->data << endl;
	    display(head->next);
	}
    }

    static void concatenate(node *a,node *b)
    {
	if( (a!= NULL) && (b!= NULL) )
	{
	    if (a->next == NULL)
		a->next = b;
	    else
		concatenate(a->next,b);
	}
	else
	{
	    cout << "Either a or b is NULL\n";
	}
    }
};

int main()
{
    int n,i,x;
    clrscr();
    linked_list a;
    linked_list b;
    cout<<"enter the size of first linked list\n";
    cin>>n;
    cout<<"enter elements";
    for(i=0;i<n;i++){
    cin>>x;
    b.add_node(x);}
    cout<<"enter the size of first linked list\n";
    cin>>n;
    cout<<"enter elements";
    for(i=0;i<n;i++){
    cin>>x;;
    b.add_node(x);}

    linked_list::concatenate(a.gethead(),b.gethead());
    linked_list::display(a.gethead());
    getch();
    return 0;
}
