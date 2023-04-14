#include<iostream>
using namespace std;

#ifndef Q3
#define Q3

	class TV 
	{
		friend class Remote;
		private:
    		bool status;
    		int channel;
    		int Volume;
    		string TV_input;
    		string tuning_mode;
		public:
    	TV();

	TV(bool s, int c, int v, string i, string m);
	};
	
	class Remote 
	{
    	public:
    	    TV obj1;
			Remote();

    int change_channel(int i); 

	};


#endif

