//Muhammad Ahmed Baig Assignment#1 20i-1884 Section F
#include<iostream>
using namespace std;

/*Returns the length of the string in number of characters. */
int Strlen(char* s1)
{
	int size = 0;
	for (int i=0; s1[i] != '\0'; i++)
	{
		size++;
	}
	return size;
}

/*Copies string s2 into array s1. The value of s1 is returned. */

char* Strcpy(char* s1, const char* s2)
{
	int size = 0;
	for (int i = 0; s2[i] != '\0'; i++)
	{
		size++;
	}
	size = size + 1;
	s1 = new char[size];
	for (int i = 0; i < size ; i++)
	{
		s1[i] = s2[i];
	}	
	return s1;
}

/*Compares the string s1 with the string s2.
The function returns 0 , less than 0 or greater
than 0 if s1 is equal to , less than or greater
than s2 , respectively. */
int StrCmp(const char* s1, const char* s2)
{
	int total1 = 0;
	int total2 = 0;
	int size1 = 0;
	int size2 = 0;
	int count = 0;
	while(s1[count] != '\0')
	{
		size1++;
		count++;
	}
	count = 0;
	while(count < size1)
	{
		total1=total1+int(s1[count]);
		count++;
	}
	count = 0;
	while(s2[count] != '\0')
	{
		size2++;
		count++;
	}
	count = 0;
	while(count < size1)
	{
		total2=total2+int(s2[count]);
		count++;
	}
	if(total1 == total2)
	{
		return 0;
	}
	else if(total1 < total2)
	{
		return -1;
	}
	else if(total1 > total2)
	{
		return 1;
	}
}

/*A call to StrTok breaks string s1 into
&quot;tokens&quot; ( logical pieces such as words
in a line of text) separated by character
contained in const char s2. size parameter
will be updated number of tokens and save
actual tokens in char**&amp; listOfTokens.
*/
void StrTok(char* s1, const char s2, char**& listOfTokens, int& size)
{
	int num = 0;
	size = 1;
	int counter = 0;
	int temp = 0;
	while (s1[counter] != '\0')
	{
		if (s1[counter] == s2)
		{
			size = size + 1;
		}
		counter++;
	}
	int* letter = new int[size];
	listOfTokens = new char* [size];
	int k = 0;
	while (k < size)
	{
		letter[k] = 0;
		k++;
	}
	k = 0;
	while (s1[k] != '\0')
	{
		if (s1[k] == s2)
		{
			num++;
		}
		else
		{
			letter[num]++;
		}
		k++;
	}
	k = 0;
	while (k < size)
	{
		letter[k] = letter[k] + 1;
		listOfTokens[k] = new char[letter[k]];
		k++;
	}
	num = 0;
	k = 0;
	while (s1[k] != '\0')
	{
		if (s1[k] == s2)
		{
			num = num + 1;
			temp = 0;
		}
		else
		{
			listOfTokens[num][temp] = s1[k];
			temp = temp + 1;
		}
		k++;
	}

}


/*Searches the string s1 for the all the occurrences
of the string s2. Save starting indexes in array (listOfOccurrences).
And save updated size of array listOfOccurrences also return true. But
if s2 not found returns false. */
bool StrFind(char* s1, char* s2, int*& listOfOccurrences, int& size)
{
	int size1 = 0, size2 = 0;
	size = 0;
	bool check = false;
	for (int i = 0; s1[i] != '\0'; i++)
	{
		size1++;
	}
	for (int i = 0; s2[i] != '\0'; i++)
	{
		size2++;
	}
	listOfOccurrences = new int[size1];
	for (int i = 0; i < size1; i++)
	{
		if (s1[i] == s2[0])
		{
			for (int j = 0; j < size2; j++)
			{
				if (s1[i + j] == s2[j])
				{
					check = true;
				}
				else
				{
					check = false;
					break;
				}
			}
			if (check == true)
			{
				listOfOccurrences[size] = i;
				size++;
				check = false;
			}
		}
	}
	if (size != 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

/*swap the string of swapIndex0 and swapIndex1 within 2d char array s1 return true if indexes are correct and swapping is successful and return false if swapping is not successful (indexes are incorrect) */
bool StrSwapIn2DArray(char** s1, int numberOfRows, int swapIndex0, int swapIndex1)
{
	int size1 = 1, size2 = 1;
	if (swapIndex0 == swapIndex1 || numberOfRows <= 0 || swapIndex0 >= numberOfRows || swapIndex1 >= numberOfRows || swapIndex0 < 0 || swapIndex1 < 0)
	{
		return false;
	}
	int count = 0;
	while (s1[swapIndex0][count] != '\0')
	{
		size1++;
		count++;
	}
	count = 0;
	while (s1[swapIndex1][count] != '\0')
	{
		size2++;
		count++;
	}
	char* temp1 = new char[size1];
	char* temp2 = new char[size2];
	count = 0;
	while (count < size1)
	{
		temp1[count] = s1[swapIndex0][count];
		count++;
	}
	count = 0;
	while (count < size2)
	{
		temp2[count] = s1[swapIndex1][count];
		count++;
	}
	s1[swapIndex0] = new char[size2];
	s1[swapIndex1] = new char[size1];
	count = 0;
	while (count < size2)
	{
		s1[swapIndex0][count] = temp2[count];
		count++;
	}
	count = 0;
	while (count < size1)
	{
		s1[swapIndex1][count] = temp1[count];
		count++;
	}
	return true;
}


int find(int array[], int length, int target)
{
	int recursion;
	length--;
	if (length < 0)
	{
		return -1;
	}
	else if (length >= 0)
	{
		if (array[length] != target)
		{
			recursion = find(array, length, target);
		}
		else if (array[length] == target)
		{
			return length;
		}
	}
	return recursion;
	
}

void replace(char* s1, char ch1, char ch2)
{
	int i = 0;
	if (s1[i] == '\0')
	{
		return;
	}
	else if (s1[i] == ch1)
	{
		s1[i] = ch2;
	}
	replace((s1+1), ch1, ch2);
}
//---------------Q3-----------------------------------
void Print(int n, int k, char ch)
{
	if (n <= k) {
		cout << ch;
		Print(n + 1, k, ch);
	}
	else return;
}

void PrintPattern1(int n, int k, char ch1, char ch2) {

	if (n <= k) {

		cout << n;
	}
	else {
		return;
	}

	Print(0, n - 1, ch1);

	PrintPattern1((n + 1), k, ch1, ch2);

	if (n < k) {

		cout << n;
		Print(0, n - 1, ch2);
	}
}

//----------------------------------------------------
//---------------Q4-----------------------------------
void space(int n)
{
	int x;
	x = n - 1;
	if (n == 0)
	{
		return;
	}
	cout << "  ";
	space(x);
}

void character(int n, char ch)
{
	int x;
	x = n - 1;
	if (n == 0)
	{
		return;
	}
	cout << ch << " ";
	character(x, ch);
}
void PrintPattern2(char ch, int n1, int n2)
{
	int s;
	int c;
	int x;
	s = n1 - 1;
	c = n2 - n1 + 1;
	x = n1 - 1;
	if (n1 == 0)
	{
		return;
	}
	space(s);
	character(c, ch);
	cout << endl;
	PrintPattern2(ch, x, n2);
}
//----------------------------------------------------
//---------------Q5-----------------------------------
void PrintCross(int start, int end, int cord, int xcord)
{
	int xcord2;
	if (start <= xcord)
	{
		cout << endl;
		return;
	}
	if (end != xcord && cord != xcord)
	{
		cout << "  ";
	}
	else
	{
		cout << " *";
	}
	xcord2 = xcord + 1;
	PrintCross(start, end, cord, xcord2);
}

void PrintPattern3(int start, int end)
{
	int cord;
	int xcord = 0;
	int end2;
	if (end <= start)
	{
		return;
	}
	cord = end - start - 1;
	end2 = start + 1;

	PrintCross(end, start, cord, xcord);
	PrintPattern3(end2, end);
}
//----------------------------------------------------

