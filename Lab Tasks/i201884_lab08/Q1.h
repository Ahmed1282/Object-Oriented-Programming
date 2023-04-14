#ifndef Q1_H
#define Q1_H
#include <iostream>
using namespace std;

class Counter
{
	private:
	    int count;
	    int serialNo;
    
	public:
    	static int objCount;
    	Counter();
    	Counter(int c);
    	void setCount(int c);
    	int getCount()const;
    	int getSerialNo()const;
    	static int getObjCount();
    	void operator =(const Counter& a);
    	Counter operator -(const Counter& b);
    	static int IncrementObjCount();
   		~Counter();
};
#endif
