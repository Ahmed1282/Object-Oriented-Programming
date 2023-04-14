#ifndef Q3_H
#define Q3_H



class Matrix{

private:
    int rows, columns;
    int** matrix;

public:
    Matrix();
    Matrix(int R,int C);
    void view_matrix();
    void operator=(Matrix matrix2);
    bool operator==(Matrix matrix2);
    Matrix operator+(int num);
    Matrix operator-(int num);
    Matrix operator+(Matrix &m2);
    Matrix operator-(Matrix &m2);

};

 #endif
