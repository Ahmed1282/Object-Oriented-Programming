#include<iostream>
using namespace std;

struct book
{
	int book_no;
	string title;
	string author;
	bool flag;
	
};

void display(book b1[],int j)
{
	
	for(int i=0;i<j;i++)
	{
		cout<<"Book # is = "<<b1[i].book_no<<endl;
		cout<<"Book Tittle is = "<<b1[i].title<<endl;
		cout<<"Book author is  = " << b1[i].author<<endl;
		cout<<"Flag is = "<< b1[i].flag<<endl;
		
	}
	cout<<endl;
	
}

void displayAuthorAll(book b1[],string j)
{

	for(int i=0;i<10;i++)
	{
		if(b1[i].author==j)
		{
			cout<<"Book # is = "<<b1[i].book_no<<endl;
			cout<<"Book Tittle is = "<<b1[i].title<<endl;
			cout<<"Book author is  = " << b1[i].author<<endl;
			cout<<"Flag is = "<< b1[i].flag<<endl;
		}
	}
	cout<<endl;	
	
}
void issueBook(book b1[],int j)
{
	
	b1[j-1].flag=true;
	cout<<"Issued"<<endl;
			
}

int main()
{
	book array[10];
	array[0]={1,"How to Java","Deitel",false};
	display(array,1);
	cout<<endl;
	displayAuthorAll(array,"Deitel");
	cout<<endl;
	issueBook(array,1);
	return 0;
}
