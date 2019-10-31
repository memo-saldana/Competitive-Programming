#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a[100], start=0, end=0, ans = 0;
  cin>> n;

  for (int i = 0; i < n; i++)
  {
    cin>> a[i];
  }

  while(end<n-1){
    if(a[end] + 1 != a[end+1]){
      ans = max(ans, end-start-1);
      start = ++end;
    } else {

      end++;
    }
  }
  ans = max(ans, end-start);
  cout<<ans<<endl;
  return 0;
}