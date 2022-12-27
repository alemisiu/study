#include <iostream>
#include <iomanip>

using namespace std;
double wielomian(double a[], int s, double x)
{
    double w = 0;
    for (int i = s; i >= 0; i--)
        w = (w * x + a[i]);
    return w;
}
int main()
{
    int n;
    cin >> n;
    double w[n];
    for (int i = 0; i < n; i++)
        cin >> w[i];
    double a = 0, b = 100;
    while (b - a > .5e-7)
    {
        double x = (a + b) / 2;
        double y = wielomian(w, n - 1, x);
        if (y > 0)
            a = x;
        else
            b = x;
    }
    cout << setprecision(7) << fixed << (a + b) / 2 << endl;
    return 0;
}