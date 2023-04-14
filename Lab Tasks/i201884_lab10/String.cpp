#include"string.h"
	
String :: String()
{
	size = 10;
		
	strg = new char[size];
}
	
String :: String(char *str)
{
	int i = 0;
		
	while(str[i] != '\0')
	{
		i++;
	}
		
	size = i;
		
	this->strg = new char[size];
		
	for(int i = 0; i < size; i++)
	{
		this->strg[i] = str[i];
	}
}
	
String :: String(const String & string2)
{
	size = string2.size;
	
	this->strg = new char[size];
		
	for(int i = 0; i < size; i++)
	{
		strg[i] = string2.strg[i];
	}
}
	
String :: String(int x)
{
	this->size = x;
		
	this->strg = new char[size];
		
	for(int i = 0; i < size; i++)
	{
		strg[i] = ' ';
	}
	
}
	
void String :: setstring(char *temp, int Size) 
{
	delete[]this->strg;
		
	this->size = Size;
	this->strg = new char[size];
		
	for (int i = 0; i < size; i++)
	{
		strg[i] = temp[i];
	}
}
	
char String :: operator[](int i) 
{
	return strg[i];
}
	
char String :: getchar(int index) const
{
	return strg[index];
}
	
String& String :: operator+(String str )
{
	String tempstr(*this);
		
	delete[]this->strg;
		
	int i = 0;
		
	while(strg[i] != '\0')
	{
		i++;
	}
		
	int size2 = tempstr.size + i;
		
	this->size = size2;
	this->strg = new char[size];
		
	for(int j = 0; j < tempstr.size; j++)
	{
		this->strg[j] = tempstr.strg[j];
	}
		
	for(int k = 0; k < i; k++)
	{
		this->strg[k+tempstr.size] = str[k];
	}
		
	return *this;
}
	
String& String :: operator - (String substr)
{
	int str1 = 0;
	int str2 = 0;
	int count = 0;
	bool check = 0;
		 
	while(str1 < size)
	{
		if (strg[str1] == substr.strg[str1])
		{
			while(str2 < substr.size)
			{
				if (strg[str1+str2] == substr.strg[str2])
				{
					count++;
				} 
					
				str2++;
			}
		}
			
		if (count == substr.size)
		{
			check = 1;
			break;
		}
			
		str1++;
	}
		
	if(check == 1) 
	{
		String temp(*this); 
		delete [] strg;
			
		size = temp.size - substr.size;
		strg = new char[size];
			
		int strg1 = 0;
		int strg2 = 0; 
		int tempstrg = 0;
			
		while(strg1 < size)
		{
			int count2 = 0;
				
			if(temp.strg[strg2] == substr.strg[strg2])
			{
				while(tempstrg<substr.size)
				{
					if(temp.strg[strg2+tempstrg] == substr.strg[tempstrg])
					{
						count2++;
					}
						
					tempstrg++; 
				}
					
			}
				
			if(count2 != substr.size)
			{
				strg[strg1] = temp.strg[strg2];
			}
				
			else
			{
				strg2 += substr.size;
				strg[strg1] = temp.strg[strg2];
			}
				
			strg2++;
			strg1++;
		}
		return *this;
	}
}
	
bool String :: operator!()
{
	if(strg[0] == '\0')
	{
		return true;
	}
}	
	
String& String :: operator=(const String& str2)
{
	delete []this->strg;
	
	this->size = str2.size;
	this->strg = new char[size];
		
	for(int i = 0; i < this->size; i++)
	{
		this->strg[i] = str2.strg[i];
	}
	return *this;
}
	
bool String :: operator==(const String& str2)
{
	bool check;
		
	for (int i = 0; i < size; i++)
	{
		if (strg[i] != str2.strg[i])
		{
			check = false;
			return check;
		} 
	}
		
	if(size != str2.size)
	{
		check = false;
		return check;
	}
		
	check = true;
		
	return check; 
}
	
int String :: operator()(char x)
{
	int index;
	
	for(int i = 0; i < size; i++)
	{
		if(this->strg[i] == x)
		{
			index = i;
			break;
		} 
	}
		
	return index;
}
	
String String :: operator*(int a)
{
	String temp(*this);
	delete []this->strg;
		
	size = size*a;
		
	this->strg = new char[size];
	
	for(int i = 0; i < temp.size; i++)
	{
		strg[i] = temp.strg[i];
	}
	
	return *this;
}
	
int String :: length() const
{
	int length = 0;
		
	while(strg[length] != '\0')
	{
		length++;
	}
	
	return length;
}
	
String :: ~String()
{
	cout << "\nDestructor Called" << endl;
}

istream& operator>>(istream& input, String &str2)
{
	char *str3 = new char[300];
	int length = 0;
	
	cout << "\nPlease enter your string: ";
	cin.getline(str3, 300);
	
	while(str3[length] != '\0')
	{
		length++;
	}
	
	str2.setstring(str3, length);
	
	delete []str3;
	
	return input;
}

ostream& operator<<(ostream& output,const String str2)
{
	for(int i = 0; i < str2.length(); i++)
	{
		output << str2.getchar(i);
	}
	
	return output;
}

