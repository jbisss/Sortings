#ifndef INSERTSORTER_H
#define INSERTSORTER_H
#include "sorter.h"

class Insertsorter: private Sorter
{
public:
    Insertsorter();
    void sort(int arrToSort[], int N);
};

#endif // INSERTSORTER_H
