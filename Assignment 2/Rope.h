//Question 3
//Muhammad Ahmed Baig 20i-1884 Assignment 2 Section F
#include<iostream>
using namespace std;
class Rope
{
	private:
		int length;
		int thickness;
		
	public:
		Rope()
		{
		}
		
		Rope(int l, int t)
		{
			setLength(l);
			setThickness(t);
		}
		void setLength(int len)
		{
			this->length = len;
		}
		void setThickness(int th)
		{
			this->thickness = th;
		}
		int getLength()
		{
			return length;
		}
		int getThickness()
		{
			return thickness;
		}	
};
