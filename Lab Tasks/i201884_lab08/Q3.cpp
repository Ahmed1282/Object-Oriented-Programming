#include<iostream>
#include "Q3.h"

using namespace std;


void Matrix::view_matrix()
{
    for(int i = 0; i < rows ; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout<<matrix[i][j]<<"   ";
        }
        cout<<endl;
    }        
}

Matrix::Matrix()
{
    rows = columns =0;
}

Matrix::Matrix(int R,int C)
{
    rows = R;
    columns = C;
    matrix = new int*[rows];
	for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int[columns];
        for (int j = 0; j < columns; j++)
        {
            matrix[i][j] = i+j+1;
        }
    }
}

void Matrix::operator=(Matrix matrix2)
{
    rows = matrix2.rows;
    columns = matrix2.columns;
    delete []matrix;
    matrix = new int*[rows];
	
	for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int[columns];
        for (int j = 0; j < columns; j++)
        {
            matrix[i][j] = matrix2.matrix[i][j];
        }
    }        
}

bool Matrix::operator==(Matrix matrix2)
{
    if(rows==matrix2.rows && columns == matrix2.columns)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                if(matrix[i][j] != matrix2.matrix[i][j])
                {
                    return false;
                }
            }
                
        }
		return true;
    }
    else
    {
        return false;
    }

}

Matrix Matrix::operator+(int num)
{
    Matrix *temp = new Matrix;
    temp->rows = rows;
    temp->columns = columns;
    temp->matrix = new int* [rows];
    for(int i = 0; i < rows; i++)
    {
        temp->matrix[i] = new int [columns];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
    	{
            temp->matrix[i][j] = matrix[i][j]+ num ;
        }
    }
    return *temp;
}

Matrix Matrix::operator-(int num)
{
    Matrix *temp = new Matrix;
    temp->rows = rows;
    temp->columns = columns;
    temp->matrix = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        temp->matrix[i] = new int [columns];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            temp->matrix[i][j] = matrix[i][j]- num ;
        }
    }
    return *temp;
}
    


Matrix Matrix::operator+(Matrix &m2)
{
    Matrix *temp = new Matrix;
    temp->rows = rows;
    temp->columns = columns;
    temp->matrix = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        temp->matrix[i] = new int [columns];
    }    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            temp->matrix[i][j] = matrix[i][j]+m2.matrix[i][j] ;
        }
    }
    return *temp;
}

Matrix Matrix::operator-(Matrix &m2)
{
    Matrix *temp = new Matrix;
    temp->rows = rows;
    temp->columns = columns;
    temp->matrix = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
    	temp->matrix[i] = new int [columns];
    }
        
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            temp->matrix[i][j] = matrix[i][j]-m2.matrix[i][j] ;
        }
	}
    return *temp;
}


int main()
{
    Matrix M1(3,3);   
    cout<<"\nNormal\n";
    M1.view_matrix();
	Matrix M2 = M1+1;
    cout<<"\n\nM2 = M1+1\n";
    M2.view_matrix();
    cout<<endl;
	M2 = M1-4;
    cout<<"\n\nM2 = M1-4\n";
    M2.view_matrix();
    cout<<endl;
	Matrix M3 = M1+M2;
	cout<<"\n\nM3 = M1+M2\n";
    M3.view_matrix();
    M3 = M1-M2;\
   	cout<<"\n\nM3 = M1-M2\n";
    M2.view_matrix();

return 0;
}
