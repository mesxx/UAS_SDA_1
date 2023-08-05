#include <iostream>
#include <cstring>
using namespace std;

void BubbleSort(char arr[][50], int n)
{
    char temp[50];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (strcmp(arr[j], arr[j + 1]) > 0)
            {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main()
{
    char arr[][50] = {
        "Fahmi",
        "Romi",
        "Andri",
        "Fadillah",
        "Ruli",
        "Rudi",
        "Dendi",
        "Zaki"};

    int n = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
