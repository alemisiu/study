#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n, liczba;
    cin >> n;
    vector<int> z[n];
    for (int i = 0; i < n; i++)
    {
        cin >> liczba;
        z[liczba * n / 128].push_back(liczba);
    }

    for (int i = 0; i < n; i++)
        if (z[i].size() > 1) 
            sort(z[i].begin(), z[i].end());

    for(int i = 0; i < n; i++)
        for(int j = 0; j < z[i].size(); j++)
            cout << z[i][j] << " ";
}