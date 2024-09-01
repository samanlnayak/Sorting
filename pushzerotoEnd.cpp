#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {5, 4, 0, 0, 0, 3, 0, 1};
    int n = 8;

    for (int i = 0; i < n - 1; i++)
    {

        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] == 0)
            {
                // int temp=arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;
                swap(arr[j], arr[j + 1]);

                flag = false;
            }
        }
        if (flag == true)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
