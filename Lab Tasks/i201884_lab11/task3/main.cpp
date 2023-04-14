#include <iostream>
#include "instructor.cpp"
#include "textbook.cpp"
#include "course.cpp"

using namespace std;

int main()	{
        
        Instructor* I1[3];
        
		I1[0] = new Instructor ("Ahmed","Baig","D-401","Lecturer");
		I1[1] = new Instructor ("Abdullah","Khan","A-392","Lecturer");
		I1[2] = new Instructor ("Sajid","Iqbal","B-404","Lecturer");

       	TextBook T1("Biology Book","Alpha",500);
        Course c1(I1[0],T1);
        c1.display();
        Course c2(I1[1],T1);
        c2.display();
		Course c3(I1[2],T1);        
        c3.display();        
    	cout<<endl;
                
        return 0;
}
