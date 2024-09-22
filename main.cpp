#include <iostream>

using namespace std;

int main() {
  double sum = 0.0;

  // Loop through odd numbers from 1 to 95 (inclusive)
  for (int i = 1; i <= 95; i += 2) {
    sum += static_cast<double>(i) / (i + 2); // Calculate and add each term
  }

  cout << "Sum of the series: " << sum << endl;

  return 0;
}
