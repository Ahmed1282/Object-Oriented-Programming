#pragma once
#include <string>
using namespace std;

class Directory
{
private:
	int empID;
	string empFirstName;
	string empLastName;
	int empContactNumber;
	string empAddress;
public:
	void Add();
	void UpdateAddress(int ID, string AddressToBeUpdated);
	bool SearchByID(int ID);
	void Delete(int ID);
	void PrintDetails();

};

