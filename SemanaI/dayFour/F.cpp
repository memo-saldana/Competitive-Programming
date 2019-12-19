#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, v, c=0, spent = 0;
  cin>> n >> v;
  for (int i = 1; i < n; i++)
  {
    if(c>= (n-i) ){
      cout<<spent<<endl;
      return 0;
    }
    else {
      int liters = min((v-c), (n-i));
      spent += i*liters;
      c+=liters;
    }
    c--;
  }
  cout<<spent<<endl;
  
  return 0;
}