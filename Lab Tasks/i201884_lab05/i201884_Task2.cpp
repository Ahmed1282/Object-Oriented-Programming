#include<iostream>
#include<stdlib.h>
using namespace std;

class Box
{
    private:
        // values of class
        double length,height,width;
        string material,color;
  
    public:
        // constructors
        Box()
        {
            length=0.0;
            width=0.0;
            height=0.0;
            material="";
            color="";
        }
        Box(double l,double w,double h,string m="",string c="")
        {
            length=l;
            width=w;
            height=h;
            material=m;
            color=c;
        }
      
        // setter methods
        void setHeight(double h)
        {
            height=h;
        }
        void setWidth(double w)
        {
            width=w;
        }
        void setLength(double l)
        {
            length=l;
        }
        void setColor(string c)
        {
            color=c;
        }
      
        // getter methods
        double getHeight()
        {
            return height;
        }
        double getWidth()
        {
            return width;
        }
        double getLength()
        {
            return length;
        }
        string getColor()
        {
            return color;
        }
      
        // volume and surface area methods
        double getVolume()
        {
            return length*width*height;
        }
        double getSurfaceArea()
        {
            return 2*(length*width+width*height+length*height);
        }
      
        void print_box()
        {
            cout << "Length: " << getLength() << endl;
            cout << "Width: " << getWidth() << endl;
            cout << "Height: " << getHeight() << endl;
            cout << "Material: " << material << endl;
            cout << "Color: " << getColor() << endl;
            cout << "Volume: " << getVolume() << endl;
            cout << "Surface Area: " << getSurfaceArea() << endl;
        }
};

// function that prints the box details
void Print(Box boxes[],int size)
{
    for(int i=0;i<size;i++)
    {
        boxes[i].print_box();
       cout << endl;
    }
}

// function that updates value of height of given index in box array
void update(Box b[],int size,int index,double height)
{
    if(index>=size)
        return;
    b[index].setHeight(height);
}

// testing main function
int main()
{
    int size=5;
    Box* boxes=new Box[size];
    for(int i=0;i<size;i++)
    {
        double length,height,width;
        string material,color;
        cout << "Enter length of box-" << i+1 << ": ";
        cin >> length;
        cout << "Enter width of box-" << i+1 << ": ";
        cin >> width;
        cout << "Enter height of box-" << i+1 << ": ";
        cin >> height;
        cout << "Enter material of box-" << i+1 << ": ";
        cin >> material;
        cout << "Enter color of box-" << i+1 << ": ";
        cin >> color;
        boxes[i]=Box(length,width,height,material,color);
        cout << endl;
    }
    Print(boxes,size);
    update(boxes,size,1,12);
    Print(boxes,size);
  
    return 0;
}
