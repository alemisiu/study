#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int min, max;
    cin >> min;
    max = min;

    for (int i; i < n - 1; i++)
    {
        int current;
        cin >> current;
        if (current > max)
        {
            max = current;
        }
        if (current < min)
        {
            min = current;
        }
    }

    cout << min;
    cout<< " ";
    cout << max;

    return 0;
}