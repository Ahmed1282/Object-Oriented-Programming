#include<iostream>
using namespace std;

#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
private:
	int row;
	int col;
	int** mat;

public:
	Matrix();
	Matrix(int r, int c);
	void setRows(int r);
	int getRows()const;
	void setCol(int c);
	int getCol()const;
	void operator ++(int);
	void operator ++(); 
	void operator --(); 
	void operator --(int); 
	void display();
	
	
 };


#endif 

