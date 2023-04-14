#include"String.cpp"

int main()
{
	String str1, sub;
	char *str2 = new char[400];
	int length = 0;
	cout<<"Please enter your string: ";
	cin.getline(str2, 300);
	while(str2[length] != '\0')
	{
		length++;
	}
	str1.setstring(str2, length);
	cout << "Enter sub string: ";
	cin >>sub;
	//cout<<endl;
	cout<<"\n\n After Addition: ";
	cout << str1 + sub;
	//cout<<"\n\n After Subtraction: " << str1 + sub;
	//str1 = str2;
	//return 0;
	
}
