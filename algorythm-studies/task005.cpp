#include <iostream>
using namespace std;
struct krotka
{
    int zysk, mini, maks;
};
krotka maks_zysk(const int t[], int n);
main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int c[n];
    for (int &x : c)
        cin >> x;
    cout << maks_zysk(c, n).zysk << endl;
    return 0;
}

krotka maks_zysk(const int t[], int n)
{
    if (n == 1)
        return {0, t[0], t[0]};
    int h = n / 2;
    krotka lewa = maks_zysk(t, h);
    krotka prawa = maks_zysk(t + h, n - h);
    int z = max(max(lewa.zysk, prawa.zysk), prawa.maks - lewa.mini);
    return {z, min(lewa.mini, prawa.mini), max(lewa.maks, prawa.maks)};
}