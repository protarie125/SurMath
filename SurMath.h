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

class Matrix { // 매트릭스 클래스를 만들긔
public:
    // construct
    Matrix(); // 기본 생성자 = 1차 정방행렬, zero-matrix
    Matrix(int n); // n차 정방행렬의 생성자
    Matrix(int row, int column); // row, column을 지정해서 생성
    //Matrix(type, row, column); // 원하는 type(class)의 data를 가지도록 생성하고 싶음
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
    QVector< QVector< int > > m_data; // pointer를 사용하는 편이 좋을지도? 궁금
    //QVector< QVector< type > > m_type_data // 흠?
};

#endif // SURMATH_H
