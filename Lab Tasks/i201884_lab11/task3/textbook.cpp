#include <iostream>
#include "textbook.h"

using namespace std;


TextBook :: TextBook () 
{	
	title = "Default";
	author = "Default";
	book_id = 0;
}

TextBook :: TextBook (string t, string a, int i) 
{	
	title = t;
	author = a;
	book_id = i;
}

void TextBook :: display () 
{	
	cout << "\nTitle: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "Book ID: " << book_id << endl;
}
