#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {5, 4, 8, 6, 2, 3, 2, 1};
    int n = 8;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
