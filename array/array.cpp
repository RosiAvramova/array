#include <iostream>
using namespace std;

bool findNum(int* arr, int target) {

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == target) return true;
            return false;
    }
}

void printNum(int* arr)
{
    cout << "Printing: " << 20 * 10;
}

void printMatrix(int row, int columns)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << '#';
        }
        cout << endl;
    }
}

int main()
{
    int arr[10] = { 1,46,2,3,53,2,5,4,55,100 };
    int rows = 0, coulumns = 0;
    cin >> rows >> coulumns;
    printMatrix(rows, coulumns);


}
