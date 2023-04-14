#include"Q2.h"
#include<iostream>
using namespace std;

Matrix::Matrix()  
{
	row = 0;
	col = 0;
}

Matrix::Matrix(int r, int c)
{
	row = r;
	col = c;
	mat = new int* [row];
	for (int i = 0; i < row; i++)
	{
		mat[i] = new int[col];
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			mat[i][j] = 1;
		}
	}
}
void Matrix::setRows(int r)
{
	row = r;
}

int Matrix::getRows()const 
{
	return row;
}

void Matrix::setCol(int c)
{
	col = c;
}

int Matrix::getCol()const
{
	return col;
}

void Matrix::operator++(int)  
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			this->mat[i][j]++;
		}
	}
}

void Matrix:: operator++() 
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			++this->mat[i][j];
		}
	}
}

void Matrix:: operator--(int)  
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			this->mat[i][j]--;
		}
	}
}


void Matrix:: operator--()  
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			--this->mat[i][j];
		}
	}
}

void Matrix::display()
{
	for (int i = 0; i < row; i++)
	{
		cout<<"		| ";
		for (int j = 0; j < col; j++)
		{
			cout<< mat[i][j] << " ";
		}
		cout<<"|";
		cout << endl;
	}
}

