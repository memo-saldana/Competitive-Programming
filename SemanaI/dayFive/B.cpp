#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, ans;
  unordered_set<int> s;
  cin >> n;
  for (int i = 1; (i*(1+i))/2 < n; i++)
  {
    s.insert((i*(i+1))/2);
  }
  for( auto it: s) {
    if(s.find(n-it) != s.end()){
      cout<<"YES"<<endl;
      return 0;
    }
  }
  cout<<"NO"<<endl;
  return 0;
}