#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int red = 2*n;
  int green = 5*n;
  int blue = 8*n;

  int notebooks = 0;

  notebooks += (red%k ==0) ? red/k : red/k + 1;
  notebooks += (green%k==0) ?  green/k : green/k + 1;
  notebooks += (blue%k ==0) ?  blue/k : blue/k + 1;

  cout << notebooks << endl;
}