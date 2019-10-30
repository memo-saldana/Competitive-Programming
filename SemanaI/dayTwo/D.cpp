#include <bits/stdc++.h>
using namespace std;

int main() {
  int c, l, r, ans, end, start;
  cin>> c;
  while (c--){
    cin>> l >> r;
    l--;
    end = r%2 == 0? r/2 : r/2 - r;
    start = l%2 == 0? l/2 : l/2 - l;
    // cout<< "Start "<<start<<endl;
    // cout<< "end "<<end<<endl;
    cout<<end-start<<endl;
    
  }
  return 0;
}