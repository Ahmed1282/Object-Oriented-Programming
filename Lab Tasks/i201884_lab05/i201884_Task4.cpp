#include<iostream>
using namespace std;

class Polygon
{
   int sides;
   int *PointArray;
  
   public:
       Polygon()
       {
           sides=4;
           PointArray=new int[sides*2];
           PointArray[0]=0;
           PointArray[1]=0;
           PointArray[2]=4;
           PointArray[3]=0;
           PointArray[4]=0;
           PointArray[5]=4;
           PointArray[6]=4;
           PointArray[7]=4;
       }
       Polygon(int num,int *pointArray)
       {
           sides=num;
           PointArray=new int[sides*2];
           for(int i=0;i<sides*2;i++)
           {
               PointArray[i]=pointArray[i];
           }
          
       }
       void print()
       {
           for(int i=0;i<sides*2;i+=2)
           {
               cout<<"("<<PointArray[i]<<", "<<PointArray[i+1]<<")\n";
           }
       }
      
      
};

int main()
{
   Polygon p;
   cout<<"Points of square:\n";
   p.print();
  
   int num;
   cout<<"Enter sides of polygon: ";
   cin>>num;
  
   int pointArray[num*2];
   cout<<"Enter points: ";
   for(int i=0;i<num*2;i++)
   {
       cin>>pointArray[i];
   }
  
   Polygon p1(num,pointArray);
   p1.print();
  

return 0;
}
