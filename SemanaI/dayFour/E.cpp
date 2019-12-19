#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a[100000], ans=1;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  int start=0, end=1;

  while(end<n){
    if(a[end-1]>a[end]){
      ans = max(ans, end-start);
      start = end;
    }
    end++;
  }

  ans = max(ans, end-start);
  cout<<ans<<endl;
  return 0;
}