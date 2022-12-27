#include <iostream>
using namespace std;

void partition(int t[], int n, int p)
{
    int r = 0, w = 0;
    for (int i = 0; i < n; i++)
    {
        if (t[i] == p)
        {
            swap(t[i], t[w++]);
        }
        else if (t[i] < p)
        {
            swap(t[i], t[w]);
            swap(t[w++], t[r++]);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    int t[n] ; 
    for (int &x : t)
        cin >> x;
    int p = t[k - 1];
    partition(t, n, p);
    for (int x : t)
        cout << x << " ";
    cout << endl;
    return 0;
}