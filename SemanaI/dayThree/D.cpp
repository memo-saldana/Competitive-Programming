#include <bits/stdc++.h>
using namespace std;

int main() {
  int c;
  string s;
  cin>> c >> s;

  for(int i=1; i<c; i++) {
    if(s[i-1] != s[i]) {
      cout <<"YES" <<endl;
      cout<<s[i-1] << s[i] << endl;
      return 0;
    }
  }
  cout<<"NO"<<endl;
  return 0;
}