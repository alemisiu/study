#include <iostream>
using namespace std;
int ilemniejszych(int t[], int n, int x)
{
    if(n==0) return 0;
    if(n==1) return t[0] <x;
    int m =n /2;
    if(t[m] < x ) return m +1 +ilemniejszych(t + m + 1, n - m - 1,x);

    else return ilemniejszych (t,m,x);
}
int main()
{
 ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int t[n];
    for (int &x : t)
        cin >> x;
  int k;
  cin>>k;
    while (k--)
    {
        int x;
        cin >> x;
        cout << n -  ilemniejszych(t, n, x) << '\n';
    }
    return 0;
}