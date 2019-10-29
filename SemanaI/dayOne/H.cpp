#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long c, a, b;
  cin >> c;
  for (int i = 0; i < c; i++) {
    cin>> a >> b;
    if(abs(a-b) == 1) {
      cout<< "NO" <<endl;
    } else {
      cout<< "YES" <<endl;
    }
  }
}
