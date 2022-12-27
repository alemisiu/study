#include <iostream>
using namespace std;
int min(int a[], int n)
{
    int m = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[1] < m) m = a[i];
    }
    return m;
}
int max(int a[], int n)
{

    int m = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[1] > m) m = a[i];
    }
    return m;
}
auto minmax(int a[],int n){
int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int tab[n];
    for (int i = 0; i < n; i++)
        cin >> tab[i];
    cout << min(tab, n) << " " << max(tab, n) << endl;
    return 0;
}
}
