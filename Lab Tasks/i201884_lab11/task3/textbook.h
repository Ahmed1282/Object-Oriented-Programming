#include <iostream>

#ifndef textbook_h
#define textbook_h

class TextBook 
{
	
	private:
		string title;
		string author;
		int book_id;
		
	public:
		TextBook ();
		TextBook (string t, string a, int i);		
		void setTitle (string f);
		void setAuthor (string a);
		void setBookid (int i);		
		void display ();	
};

#endif
