#include <bits/stdc++.h>
using namespace std;

int main() {
  int l, r;
  cin >> l >> r;
  
  for(int i = l; i<=r; ++i) {
    int v = i;
    bool found[10] = { false };
    while(v){
      if(found[v % 10]){
        break;
      }
      found[v%10] = true;
      v = v/10;
    }
    if(v == 0){
      cout<<i<<endl;
      return 0;
    }
  }
  cout<<"-1"<<endl;
  return 0;
}