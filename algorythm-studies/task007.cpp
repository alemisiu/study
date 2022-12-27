#include <bits/stdc++.h>

using namespace std;

int t;
int n;

int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

cin >> t;
while (t--) {
cin >> n;
double ans = (acos(-1) * n) / (2 * n);
printf("%.4lf\n", ans);
}

return 0;
}