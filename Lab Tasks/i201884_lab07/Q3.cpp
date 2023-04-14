#include<iostream>
#include"Q3.h"
using namespace std;

    TV::TV() 
	{    
	    status = 0;
	    channel = 0;
	    Volume = 0;
	    TV_input = "null";
	    tuning_mode = "null";    
	}

	TV::TV(bool s, int c, int v, string i, string m) 
	{
		status = s;
    	channel = c;
    	Volume = v;
    	TV_input = i;
    	tuning_mode = m;
	}
    Remote::Remote() 
	{
    }

    int Remote::change_channel(int i) 
	{
            obj1.channel = i;
            return obj1.channel;
	}


