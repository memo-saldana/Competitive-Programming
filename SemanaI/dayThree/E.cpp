#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;

  cin >> n >> k;

  for(int i=0; i<n; ++i){
    if(((n-i)*(n-i+1))/2 - i == k){
      cout<<i<<endl;
      return 0;
    }
  }
  cout<<"0"<<endl;
  
  return 0;
}