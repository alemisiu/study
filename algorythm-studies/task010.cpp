#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int t[n];
    for (int &x : t)
        cin >> x;
    int c[n];
    for (int i = 0; i < n; i++)
        
    {
        c[i] = 1;
        for (int j = 0; j < i; j++)
            if (t[j] <= t[i])
                c[i] = max(c[i], c[j] + 1);
    }
    cout << *max_element(c, c + n) << endl;
    return 0;
}