#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a[100000], ans = 0;

  int sushi[2] = {0,0};

  cin>> n;
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  sushi[a[0]-1]++;
  for (int i = 1; i < n; i++)
  {
    // If its the same, or it changes for first time
    if(a[i-1] == a[i] || sushi[a[i]-1] == 0){
      sushi[a[i]-1]++;
    } else {
      // If both amounts are same, return as possible ans
      ans = max(ans, min(sushi[0],sushi[1])*2);
      
      sushi[a[i]-1]=1;
    }
  }
  ans = max(ans, min(sushi[0],sushi[1])*2);
  cout<< ans << endl;
  return 0;
}