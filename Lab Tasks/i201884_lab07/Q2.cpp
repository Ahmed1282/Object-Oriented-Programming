#include<iostream>
#include"Q2.h"
using namespace std;

	Diablo::Diablo()
	{
        color = "Metal Grey";
        vol = 4021;
        seats = 2;
        model_y = 0;
        engine_number = 0;
        frame_no = 0;
        owner = "null";
	}

    Diablo::Diablo(Diablo &car2)
	{
        color = car2.color;
        vol = car2.vol;
        seats = car2.seats;

    }

    void Diablo::setmodel_y(int m)
	{
      model_y = m;
    }

    void Diablo::setengine_no(long e)
	{
     	engine_number = e;
    }

    void Diablo::setframe_no(long f)
	{
     	frame_no = f;
    }

    void Diablo::setowner(string n)
	{
          owner = n;
    }

    string Diablo::getcolor()
	{
       return color;
    }

    double Diablo::getvol()
	{
         return vol;
    }

    int Diablo::getseats()
	{
         return seats;
    }

    int Diablo::getmodel_y()
	{
        return model_y;
    }

    long Diablo::getengine_no()
	{
         return engine_number;
    }

    long Diablo::getframe_no()
	{
        return frame_no;
    }

    string Diablo::getowner(string n)
	{
        return owner;
	}
	void Diablo::display()
	{
		cout<<"name = "<<owner<<endl;
		cout<<"color = "<<color<<endl;
		cout<<"engine number = "<<engine_number<<endl;
		cout<<"frame number = "<<frame_no<<endl;
	}
