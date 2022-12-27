#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Odczytanie długości ciągu
  int n;
  cin >> n;

  // Odczytanie poszczególnych elementów ciągu
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // Pętla wyznaczająca długość najdłuższego podciągu niemalejącego
  int dlugosc = 1;
  int maksymalna_dlugosc = 0;
  for (int i = 1; i < n; i++) {
    if (a[i] >= a[i-1]) {
      dlugosc++;
    } else {
      dlugosc = 1;
    }
    maksymalna_dlugosc = max(maksymalna_dlugosc, dlugosc);
  }

  // Wypisanie wyniku
  cout << maksymalna_dlugosc << endl;

  return 0;

}






