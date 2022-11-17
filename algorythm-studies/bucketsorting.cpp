#include <bits/stdc++.h>
#define swap(x, y) \
    {              \
        x = x + y; \
        y = x - y; \
        x = x - y; \
    }

using namespace std;
int findMax(char arr[], char n)
{
    int i, max = arr[0], cnt = 0;
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    while (max > 0)
    {
        cnt++;
        max = max / 10;
    }

    return cnt;
}

void bucketSort(char arr[], char *bucket[], char n)
{
    static char i, j[10], k, l, d = 1;
    char c;
    c = findMax(arr, n);

    for (char m = 0; m < c; m++)
    {
        for (i = 0; i < 10; i++)
            j[i] = 0;
        for (i = 0; i < n; i++)
        {
            k = (arr[i] / d) % 10;
            bucket[k][j[k]] = arr[i];
            j[k]++;
        }

        l = 0;
        for (i = 0; i < 10; i++)
        {
            for (k = 0; k < j[i]; k++)
            {
                arr[l] = bucket[i][k];
                l++;
            }
        }
        d *= 10;
    }
}
int main()
{
    int n, i;
    char *arr;
    char *bucket[10];
    // cout << "Enter no of element : ";
    cin >> n;

    arr = new char[n + 1];
    for (i = 0; i < 10; i++)
        bucket[i] = new char[n];

    // cout << "Enter array element : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    bucketSort(arr, bucket, n);

    // cout << "Sorted array : ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}