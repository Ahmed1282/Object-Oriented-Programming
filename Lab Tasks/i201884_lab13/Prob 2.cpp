#include <iostream>
#include <string>
#include <cstring>
#include<fstream>

using namespace std;

void input() 
{		
	string name, dept,roll,section;
	ofstream out;
	out.open("Student.txt",ios::out);
	if(!out)
	{
		cout << "File can not be opened" << endl;
	}
	else
	{
		for(int i=0; i<10; i++)
		{	
			cout<<"Student "<<i+1<<endl;
			cout << "Roll No" << ": ";
			cin >> roll; 
			cin.ignore();
			cout << "Student Name" << ": ";
			getline (cin, name);
			cout << "Program:" << ": ";
			cin >> dept;			
			cout << "Section:" << ": ";
			cin >> section;
			cout<<endl;
			out << roll << " " << name << " " << dept << " " << section << endl;
		}
	}
	out.close();
}
		
void output() 
{	
	
	string write;
	ifstream in;	
	in.open("Student.txt", ios::in);
	if(!in)
	{
		cout << "Error In Opening" << endl;
	}
	else 
	{
		cout<<endl;
		cout << "Students Data:" << endl;
		while(!in.eof())
		{
			getline(in, write,' ');
			cout << write << "\t";
		}
	}
	in.close();	
}


int main () 
{
	input();
	output();
	return 0;	
}
