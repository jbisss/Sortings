#include "insertsorter.h"

insertsorter::insertsorter()
{

}
void insertsorter::sort(int arrToSort[], int N)
{
    for(int i = 1; i < N; i++)
    {
        int temp = arrToSort[i];
        int j = i;
        for(; j> 0 && temp < arrToSort[j-1];j--)
        {
            arrToSort[j] = arrToSort[j - 1];
        }
        arrToSort[j] = temp;
    }
    this->print(arrToSort, N);
}