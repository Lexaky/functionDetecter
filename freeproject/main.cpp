/* This is an example of passing an array using function parameters */
#include <iostream>
#include <conio.h>
using namespace std;

void outputOfArray(int sizeOfArray, int *pointer)
{
    for(int i = 0; i <= sizeOfArray*sizeOfArray - 1; i++)
    {
        *pointer = 5;
        *(pointer + 4) = 10; // Пример присваивания нужному элементу какого-либо значения
        cout << *(pointer + i) << " "; // 1 = 4 байта = размеру между ячейками двумерного массива
        if(i == 4 || i == 9 || i == 14 || i == 19 || i == 24) //first number is 4 because first element have a zero order
        {
            cout << endl;
        }

    }
}

int main()
{
    setlocale(LC_ALL, "rus");
        int sizeOfBox = 5; // That's size of array
        int box[sizeOfBox][sizeOfBox] = { // Filling of the values of array
                          {1, 2, 3, 4, 5},
                          {1, 2, 3, 4, 5},
                          {1, 2, 3, 4, 5},
                          {1, 2, 3, 4, 5},
                          {1, 2, 3, 4, 5}, };
        for(int i = 0; i < sizeOfBox; i++)
        {
            for(int j = 0; j < sizeOfBox; j++)
            {
                cout << box[i][j] << " ";
            }
            cout << endl;
        } // output of array
        cout << endl;
        cout << &box << " " << *box << endl;
        outputOfArray(sizeOfBox, *box); // call the function with transfering of the array like a pointer
        system("pause");// waiting of the click
    return 0;
}
