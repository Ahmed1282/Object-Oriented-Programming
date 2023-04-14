#include<iostream>
using namespace std;

class String 
{
	private:
		char* strg;
		int size;
	
	public:
		String(); 
		String(char *);
		String (const String & );
		String (int );
		void setstring(char *, int );
		char getchar(int ) const;
		char operator[] (int );
		String& operator + (String );
		String& operator - (String );
		bool operator! ();
		String& operator = (const String& );
		bool operator == (const String& );
		int operator() (char );
		String operator * (int );
		int length() const; 
		~String();

};
