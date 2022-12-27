#include <iostream>
#include <cmath>
#include <sstream>
#include <string>
#include <vector>
#include<cstdio>
using namespace std;

// C++ program to add 2 fractions
// Function to return gcd of a and b
int gcd(int u, int v)
{
    while (v)
        v ^= u ^= v ^= u %= v;
    return u;
}

// Function to convert the obtained fraction
// into it's simplest form
void lowest(int &den3, int &num3)
{
    // Finding gcd of both terms
    int common_factor = gcd(num3, den3);

    // Converting both terms into simpler
    // terms by dividing them by common factor
    den3 = den3 / common_factor;
    num3 = num3 / common_factor;
}

// Function to add two fractions
void addFraction(int num1, int den1, int num2,
                 int den2, int &num3, int &den3)
{
    // Finding gcd of den1 and den2
    den3 = gcd(den1, den2);

    // Denominator of final fraction obtained
    // finding LCM of den1 and den2
    // LCM * GCD = a * b
    den3 = (den1 * den2) / den3;

    // Changing the fractions to have same denominator
    // Numerator of the final fraction obtained
    num3 = (num1) * (den3 / den1) + (num2) * (den3 / den2);

    // Calling function to convert final fraction
    // into it's simplest form
    lowest(den3, num3);
}

int main()
{
    int numberOfTests;
    fscanf(stdin, "%d", &numberOfTests);

    for (int idx = 0; idx < numberOfTests; idx++)
    {
        int a, b, c, d;
        fscanf(stdin, "%d %d %d %d", &a, &b, &c, &d);

        int e, f;
        addFraction(a, b, c, d, e, f);

        cout << e << "/" << f << "\n";
    }
    return 0;
}