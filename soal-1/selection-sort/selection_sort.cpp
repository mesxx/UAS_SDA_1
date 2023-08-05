#include <iostream>
#include <string>
using namespace std;

void Swap(string &a, string &b)
{
    string temp = a;
    a = b;
    b = temp;
}

void SelectionSort(string array[], int ARRAY_SIZE)
{
    int min_index;
    string min_value;

    for (int start_index = 0; start_index < (ARRAY_SIZE - 1); start_index++)
    {
        min_index = start_index;
        min_value = array[start_index];

        for (int index = start_index + 1; index < ARRAY_SIZE; index++)
        {
            if (array[index] < min_value)
            {
                min_value = array[index];
                min_index = index;
            }
        }
        Swap(array[min_index], array[start_index]);
    }
}

void DisplayArray(string array[], int ARRAY_SIZE)
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << array[i] << endl;
    }
}

int main()
{
    string names[8] = {
        "Fahmi",
        "Romi",
        "Andri",
        "Fadillah",
        "Ruli",
        "Rudi",
        "Dendi",
        "Zaki"};

    SelectionSort(names, 8);
    DisplayArray(names, 8);

    return 0;
}
