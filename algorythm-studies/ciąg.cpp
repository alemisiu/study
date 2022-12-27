#include <iostream>
using namespace std;
int main()
{
    int n;
    int t1[1000000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        t1[i] = v;
    }

    int m;
    cin >> m;
    int result;
    int index;

    cin >> index;
    result = t1[index - 1];

    for (int i = 0; i < m - 1; i++)
    {
        cin >> index;
        int candidate = t1[index - 1];
        if (candidate < result)
        {
            result = candidate;
        }
    }
    cout << result;
}