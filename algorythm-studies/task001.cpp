#include <iostream>
using namespace std;
int main()
{
    int n;
    int resultIndex;
    long resultValue;
    cin >> n;

    resultIndex = 1;
    cin >> resultValue;

    for (int i = 0; i < n - 1; i++)
    {
        int candidateIndex = i + 2;
        long candidateValue;
        fscanf(stdin, "%d " , &candidateValue);
        // cin >> candidateValue;

        if (candidateValue < resultValue)
        {
            resultIndex = candidateIndex;
            resultValue = candidateValue;
        }
    }
    cout << resultIndex;
}