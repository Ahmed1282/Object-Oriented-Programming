#include<iostream>
#include<string>
#include"Computer.cpp"
#include"Desktop.cpp"
#include"Laptop.cpp"
using namespace std;

int main()
{
    Computer* obj1, * obj2;
    obj1 = new Desktop("Apple", 200000, "Black", 8, "M2");
    obj1->show();
    cout<<endl;
    obj2 = new Laptop("HP" , 170000, "Grey" , 11, 1, "i7");
    obj2->show();

    return 0;
}
