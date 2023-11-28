#include <iostream>
using namespace std;

int main()
{

  int n;
  cout << "THE NUMBER IS " << endl;
  cin >> n;

  int product = 1;
  int mod;
  int div;
  int sum = 0;
  while ((n) != 0)
  {

    mod = n % 10;
    product = product * mod;
    n = n / 10;
    sum = sum + mod;

    cout << mod << endl;
  }

  int diff = product - sum;

  cout << "SUM  : " << sum << endl;
  cout << "PRODUCT  : " << product << endl;
  cout << "DIFF  : " << diff << endl;
  // cout << "SUM  : " << sum << endl ;
}