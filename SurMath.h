#ifndef SURMATH_H
#define SURMATH_H
#include <QVector>

namespace SMath {
class SurMath;
class Matrix;
}

class SurMath
{
public:
    SurMath();
};

class Matrix {
public:
    // construct
    Matrix();
    Matrix(int n);
    Matrix(int row, int column);
    // distruct
    ~Matrix();
    // get
    int row();
    int column();
    bool isSquare();
    // set
    void setRow(int n);
    void setColumn(int n);
private:
    int m_row;
    int m_column;
    bool m_isSquare;
    QVector< QVector< int > > m_data;
};

#endif // SURMATH_H
