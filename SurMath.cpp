#include "SurMath.h"

SurMath::SurMath()
{

}

Matrix::Matrix()
{
    setRow(1);
    setColumn(1);
    m_isSquare = true;
    QVector< int > temp(1, 0);
    m_data.clear();
    m_data.append(temp);
}

Matrix::Matrix(int n)
{
    if (n > 0) {
        setRow(n);
        setColumn(n);
        m_isSquare = true;
        QVector< int > temp(n, 0);
        m_data.clear();
        for (int i = 0; i < n; i++) {
            m_data.append(temp);
        }
    } else {
        //throw invalid_argument("n must be positive integer");
    }
}

Matrix::Matrix(int row, int column)
{
    if (row > 0 && column > 0) {
        setRow(row);
        setColumn(column);
        m_isSquare = false;
        QVector< int > temp(column, 0);
        m_data.clear();
        for (int i = 0; i < row; i++) {
            m_data.append(temp);
        }
    } else {
        //throw invalid_argument("row and column must be positive integer");
    }
}

Matrix::~Matrix()
{
    //delete m_data;
}

int Matrix::row()
{
    return m_row;
}

int Matrix::column()
{
    return m_column;
}

bool Matrix::isSquare()
{
    return m_isSquare;
}

void Matrix::setRow(int n)
{
    QVector< int > tempRow(column(), 0);
    QVector< QVector< int > > tempData;
    tempData.clear();
    for (int i = 0; i < n; i++) {
        if (i < m_row) {
            tempData.append(m_data[i]);
        } else {
            tempData.append(tempRow);
        }
    }
    m_data = tempData;
    m_row = n;
}

void Matrix::setColumn(int n)
{
    QVector< int > tempRow(n, 0);
    QVector< QVector< int > > tempData;
    tempData.clear();
    for (int i = 0; i < row(); i++) {
        for (int j = 0; j < n; j++) {
            if (j < m_column) {
                tempRow[j] = m_data[i][j];
            }
        }
        tempData.append(tempRow);
    }
    m_data = tempData;
    m_column = n;
}
