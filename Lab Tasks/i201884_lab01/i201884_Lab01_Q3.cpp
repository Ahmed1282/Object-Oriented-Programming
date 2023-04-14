#include <iostream>
using namespace std;

void checkingStrPalindrome(const char* p);

int main()
{
    int num;
	cout<<"Enter the length of the String: ";
    cin>>num;
    char* str=new char[num];
    cout<<"Enter String to check if it is Palindrome: " ;
	cin>>str;
    checkingStrPalindrome(str);
    delete [] str;
    return 0;

}
void checkingStrPalindrome(const char* p)
{
	const char* new_p = p;
	while(*++p);
    while (*new_p++ == *--p);
    if(new_p>p)
	{
        cout<<"The entered String is Palindrome"<<endl;
    }
    else
	{
        cout<<"The entered String is not Palindrome"<<endl;
    }
}
