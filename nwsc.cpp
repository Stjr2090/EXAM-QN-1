#include <iostream>

using namespace std;

int main() {

  cout << "Enter the amount loaded onto your account (in UGX): ";
  double balance;
  cin >> balance;
  cout << "Enter the number of water units consumed: ";
  int units;
  cin >> units;
  double cost = 0;
  if (units <= 10) {
    cost = units * 150;
  } else if (units <= 20) {
    cost = 10 * 150 + (units - 10) * 175;
  } else {
    cost = 10 * 150 + 10 * 175 + (units - 20) * 200;
  }
  //subcharge
  cost *= 1.15;
  // 18% VAT
  cost *= 1.18;
  if (balance >= cost) {
    balance -= cost;
    cout << "Transaction successful. Remaining balance: " << balance << " UGX" << endl;
  } else {
    cout << "Error: Insufficient balance. Remaining balance: " << balance << " UGX" << endl;
  }
  return 0;
}
