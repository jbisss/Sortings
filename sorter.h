#ifndef SORTER_H
#define SORTER_H
#include <QDebug>
#include <QPushButton>

class Sorter
{
public:
    Sorter();
    void swap(int &par1, int &par2);
    void swapButtons(QVector <QPushButton*>& arrButtons, int firstButtonIndex, int secondButtonIndex);
    void print(int *arrToSort, int N);
    bool isSorted(int *arrToSort, int N);
};

#endif // SORTER_H
