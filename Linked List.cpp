#include<iostream>
using namespace std;

struct node
{ int value;
 node *next = NULL;
};

node *start = NULL, *temp;

void create()
{ node *newnode = new node;
int x;
cout<<"Enter Info\n";
cin>>x;
newnode->value=x;

if(start == NULL )
{start = newnode;}

else{ temp->next = newnode;}
temp =newnode;
}

void traverse()
{ node *hey = start;
while(hey != NULL)
{cout<<"Info: "<<hey->value<<" Add: "<<hey<<"\n";
hey = hey->next;
}}

void insert()
{

int x;
cout<<"1.Beginning\n2.End\n3.Specific location\n";
cin>>x;

if(x==1 || x==2 || x==3)
{ node *ins = start;
	
	if(start == NULL)
	{node *newnode = new node;
	int info;
	cout<<"Enter Info\n";
	cin>>info;
	newnode->value=info;
	start = newnode; 	}
	
	else if(x==1)
	{node *newnode = start;
	start = start->next;
	delete newnode;	}
	
	else if(x==2)
	{node *newnode = new node;
	newnode->next = NULL;
	
	while(ins->next!=NULL)
	{ins = ins->next;	}
	ins->next=newnode;}
	
		else if(x==3)
	{node *newnode = new node;
	int info;
	int loc ;
	cout<<"Enter Loaction\n";
	cin>>loc;
	
	cout<<"Enter Info\n";
	cin>>info;
	newnode->value=info;
	
	for(int i=1;1<loc-1;i++)
	{ins = ins->next;
	}
	newnode->next = ins->next;
	ins->next=newnode;}
}

else{cout<<"InValid Input\n";}}

void deletion()
{

int x;
cout<<"1.Beginning\n2.End\n3.Specific location\n";
cin>>x;

if(x==1 || x==2 || x==3)
{ node *ins = start;
	
	if(start == NULL)
	{cout<<"No List";
	}
	
	else if(x==1)
	{start = start->next;
	delete ins;
	 	}
	
	else if(x==2)
	{node *newnode ;
	while(ins->next->next!=NULL)
	{ins = ins->next;	}
	newnode = ins->next;
	ins->next=NULL;
	delete newnode;}
	
		else if(x==3)
	{node *newnode = new node;
	int info;
	int loc ;
	cout<<"Enter Loaction\n";
	cin>>loc;
	
	for(int i=1;1<loc-1;i++)
	{ins = ins->next;
	}
	newnode = ins->next;
	ins->next=ins->next->next;
	delete newnode;}
}

else{cout<<"InValid Input\n";}

}

int main()
{ int a = 9;
while(a!=0)
{cout<<"1.Create \n2.Traverse \n3.Insert \n4.Delete \n0.Exit\n";
cin>>a;
if(a==1)
{create();}
else if(a==2)
{traverse();}
else if(a==3)
{insert();}
else if(a==4)
{deletion();}
}

return 0;
}
