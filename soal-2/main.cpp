#include <iostream>

using namespace std;

int FindIndex(int vec[], int n, int size)
{
    bool trap = false;
    for (int i = 0; i < size; i++)
    {
        if (vec[i] == n)
        {
            cout << i + 1 << endl;
            trap = true;
        }
    }

    if (trap == false)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int vec[] = {19, 40, 10, 90, 2, 50, 60, 50, 1};
    int size = sizeof(vec) / sizeof(vec[0]);

    cout << "Enter the number : ";
    int n;
    cin >> n;

    int final = FindIndex(vec, n, size);
    if (final == -1)
    {
        cout << "Angka"
             << " " << n << " "
             << "tidak ada dalam array" << endl;
    }

    return 0;
}
