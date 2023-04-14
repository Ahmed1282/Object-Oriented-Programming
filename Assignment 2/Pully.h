//Question 3
//Muhammad Ahmed Baig 20i-1884 Assignment 2 Section F
#include<iostream>
using namespace std;
class Pully
{
	private:
		int radius;
		
	public:
		Pully()
		{
		}
		Pully(int r)
		{
			setRadius(r);
		}
		void setRadius(int rad)
		{
			this->radius = rad;
		}
		int getRadius()
		{
			return radius;
		}	
};
