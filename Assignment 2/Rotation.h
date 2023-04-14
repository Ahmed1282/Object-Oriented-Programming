//Question 3
//Muhammad Ahmed Baig 20i-1884 Assignment 2 Section F
#include<iostream>
using namespace std;
class Rotation
{
	private:
		Pully pully;
		Rope rope;
	
	public:
		Rotation()
		{
		}
		Rotation(Pully pul, Rope rop)
		{
			this->pully = pul;
        	this->rope = rop;
		}
	int Rotatingthepully(int, int, int);
	int getRopeRadius()
    {
        return pully.getRadius();
    }
    int getRopeLength()
    {
        return rope.getLength();
    }
    int getRopeThickness()
    {
        return rope.getThickness();
    }
			
};
    
int Rotation::Rotatingthepully(int len, int rad, int thick)
{
	int circle = 0;
	len = rope.getLength();
	rad = pully.getRadius();
	thick = rope.getThickness();	
	for(int i=0; i<1;i--)
	{
		int l;
		int pi = 3.14;
		l = 2*pi*rad;
		if(l <= len)
		{
			int ropthick;
			ropthick = rope.getThickness();
			len = len-l;             
            rad = rad + ropthick;
            circle++;  
		}
		else
		{
			float actuallen;
			actuallen = len / l;
			circle = circle + actuallen;
            break;
		}
	}
	return circle;
}
