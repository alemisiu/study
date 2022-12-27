#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        double x = (1.0 / n) * (1 + sqrt(1 + 4 * n * n));
        printf("%.4lf\n", x);
    }
    return 0;
}