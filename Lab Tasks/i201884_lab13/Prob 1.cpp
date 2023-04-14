#include <iostream>
#include "Directory.h"
using namespace std;
int main()
{
    Directory D;
    int id;
    string city;

    D.Add();
    D.Add();
    D.Add();
    D.PrintDetails();
    cout << "Enter ID whose city you wish to update\n";
    cin >> id;
    cout << "Enter city you wish to update to\n";
    cin >> city;
    D.UpdateAddress(id, city);
    D.PrintDetails();
    cout << "Enter ID who you wish to search\n";
    cin >> id;
    (D.SearchByID(id)) ? cout << "found\n" : cout << "not found\n";
    cout << "Enter ID who you wish to delete\n";
    cin >> id;
    D.Delete(id);
    D.PrintDetails();
}