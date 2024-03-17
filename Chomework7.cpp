#include <iostream>
using namespace std;
int main() {
    //Task1
    /*int num;
    cout << "Enter number :";
    cin >> num;

    int** array = new int* [num];
    for (int i = 0; i < num; ++i) {
        array[i] = new int[num];
    }

    for (int i = 0; i < num; ++i) {
        array[i][0] = num;
        for (int j = 1; j < num; ++j) {
            array[i][j] = array[i][j - 1] * 2;
        }
    }

    for (int i = 0; i < num; ++i) {
        for (int j = 0; j < num; ++j) {
            cout << array[i][j] << " ";
        }
        cout << std::endl;
    }*/

    //Task2
    int num;
    cout << "Enter number : ";
    cin >> num;

    const int rows = 2;
    const int cols = 4;

    int arr[rows][cols];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (j == 0) {
                if (i == 0)
                    arr[i][j] = num;
                else
                    arr[i][j] = arr[i - 1][cols - 1] + 1;
            }
            else {
                arr[i][j] = arr[i][j - 1] + 1;
            }
        }
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}