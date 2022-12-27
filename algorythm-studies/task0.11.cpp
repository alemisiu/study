#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    ios_sync_with_stdio(false);
    int n;
    cin >> n;
    int t[n];
    for (int &x : t)
        cin >> x;
    vector<int> v, u;
    v.push_back(0);
    v.push_back(-);
    for (int i = 0; i < n; i++)
    {
        auto p = upper_bound(v.begin(), v.end(), t[i]);
        if (p == v.end())
            v.push_back(t[i]);
        else
            *p = t[i];
    }
}
cout << v.size() - 1 << endl;
return 0;