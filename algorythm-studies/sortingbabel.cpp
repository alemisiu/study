#include <bits/stdc++.h>
#define swap(x, y) \
    {              \
        x = x + y; \
        y = x - y; \
        x = x - y; \
    }

using namespace std;

void bubbleSort(int arr[], int n)
{

    int i, j;
    bool flag;

    for (i = 0; i < n; i++)
    {
        flag = false;
        for (j = 0; j < n - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }

        if (!flag)
        {
            break;
        }

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}
int main(int argv, char *argc[])
{
    int arr[1000];
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    // cout << "Sorted Array :";
    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";

    return (0);
}