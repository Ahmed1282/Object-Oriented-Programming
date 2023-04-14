#include "Directory.h"
#include <fstream>
#include <iostream>
#include<cassert>
using namespace std;

void Directory::Add() {
	cout << "Enter employee ID\n";
	cin >> empID;
	cout << "Enter employee's first name\n";
	cin >> empFirstName;
	cout << "Enter employee's last name\n";
	cin >> empLastName;
	cout << "Enter employee's contact number\n";
	cin >> empContactNumber;
	cout << "Enter employee's city\n";
	cin >> empAddress;

	fstream writeFile;
	writeFile.open("EmployeeDirectory.txt", ios::app);

	assert(!writeFile.fail());

	writeFile << empID << " " << empFirstName << " " << empLastName << " " << empContactNumber << " " << empAddress << endl;

	writeFile.close();

	assert(!writeFile.fail());
}
void Directory::UpdateAddress(int ID, string AddressToBeUpdated) {

	fstream writeFile;
	fstream readFile;
	readFile.open("EmployeeDirectory.txt", ios::in);
	writeFile.open("Temp.txt", ios::out);

	assert(!writeFile.fail() && !readFile.fail());

	readFile >> empID >> empFirstName >> empLastName >> empContactNumber >> empAddress;

	while (!readFile.eof()) {
		readFile >> empID >> empFirstName >> empLastName >> empContactNumber >> empAddress;
		writeFile << empID << " " << empFirstName << " " << empLastName << " " << empContactNumber << " " << empAddress << endl;
	}

	readFile.close();
	writeFile.close();

	fstream writeFile2;
	fstream readFile2;
	readFile2.open("Temp.txt", ios::in);
	writeFile2.open("EmployeeDirectory.txt", ios::out);

	assert(!writeFile2.fail() && !readFile2.fail());

	readFile2 >> empID >> empFirstName >> empLastName >> empContactNumber >> empAddress;

	while (!readFile2.eof()) {
		if (empID == ID)
			empAddress = AddressToBeUpdated;
		writeFile2 << empID << " " << empFirstName << " " << empLastName << " " << empContactNumber << " " << empAddress << endl;
		readFile2 >> empID >> empFirstName >> empLastName >> empContactNumber >> empAddress;
	}

	readFile2.close();
	writeFile2.close();
}
bool Directory::SearchByID(int ID) {
	fstream readFile;
	bool found=false;
	readFile.open("EmployeeDirectory.txt", ios::in);

	assert(!readFile.fail());

	while(!readFile.eof() && ID!=empID)
	readFile >> empID >> empFirstName >> empLastName >> empContactNumber >> empAddress;

	found = !readFile.eof();
	readFile.close();
	assert(!readFile.fail());
	return found;
}
void Directory::Delete(int ID) {
	fstream writeFile;
	fstream readFile;
	readFile.open("EmployeeDirectory.txt", ios::in);
	writeFile.open("Temp.txt", ios::out);

	assert(!writeFile.fail() && !readFile.fail());

	readFile >> empID >> empFirstName >> empLastName >> empContactNumber >> empAddress;

	while (!readFile.eof()) {
		readFile >> empID >> empFirstName >> empLastName >> empContactNumber >> empAddress;
		writeFile << empID << " " << empFirstName << " " << empLastName << " " << empContactNumber << " " << empAddress << endl;
	}

	readFile.close();
	writeFile.close();

	fstream writeFile2;
	fstream readFile2;
	readFile2.open("Temp.txt", ios::in);
	writeFile2.open("EmployeeDirectory.txt", ios::out);


	readFile2 >> empID >> empFirstName >> empLastName >> empContactNumber >> empAddress;

	while (!readFile2.eof()) {
		if (empID != ID) 
			writeFile2 << empID << " " << empFirstName << " " << empLastName << " " << empContactNumber << " " << empAddress << endl;
		
		readFile2 >> empID >> empFirstName >> empLastName >> empContactNumber >> empAddress;
	}

	readFile2.close();
	writeFile2.close();
}
void Directory::PrintDetails() {
	fstream readFile;
	readFile.open("EmployeeDirectory.txt", ios::in);

	assert(!readFile.fail());

	readFile >> empID >> empFirstName >> empLastName >> empContactNumber >> empAddress;

	while (!readFile.eof()) {
		cout << empID << " " << empFirstName << " " << empLastName << " " << empContactNumber << " " << empAddress << endl;
		readFile >> empID >> empFirstName >> empLastName >> empContactNumber >> empAddress;
	}
	readFile.close();
}
