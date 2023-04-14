#include<iostream>
using namespace std;

#ifndef Q2
#define Q2

class Diablo{
    private:
        string color;
        double vol;
        int seats;
        int model_y;
        long engine_number;
        long frame_no;
        string owner;

    public:
        Diablo();
        Diablo(Diablo &car2);
    	void setmodel_y(int m);
    	void setengine_no(long e);
    	void setframe_no(long f);
    	void setowner(string n);
    	string getcolor();
   		double getvol();
    	int getseats();
    	int getmodel_y();
    	long getengine_no();
    	long getframe_no();
    	string getowner(string n);
    	void display();
};


#endif

