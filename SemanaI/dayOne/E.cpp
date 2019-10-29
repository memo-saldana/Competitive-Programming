#include <bits/stdc++.h>
using namespace std;

int main() {
  unsigned long long n, x, y, maxC, minC, blackDiff, whiteDiff;
  cin >> n >> x >> y;
  maxC = max(x,y);
  minC = min(x,y);
  whiteDiff = minC - 1;
  blackDiff = n - maxC;

  if(whiteDiff <= blackDiff) {
    cout<<"White"<<endl;
  } else {
    cout<<"Black"<<endl;
  } 
}