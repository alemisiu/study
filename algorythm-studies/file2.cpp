#include <iostream>
using namespace std;
int main()
{
    int num1, num2, gcd;
    cin >> num1;
    cin >> num2;

    for (int i = 1; i <= num1 && i <= num2; i++) 
    {
        if (num1 % i == 0 && num2 % i == 0) 
        {
            gcd = i;
        }
    }
    cout << gcd ;
    return 0;
}
