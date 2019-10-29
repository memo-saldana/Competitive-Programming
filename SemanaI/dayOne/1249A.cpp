#include <bits/stdc++.h>
using namespace std;

#define maxN 100

int a[maxN], c[maxN];

int main() {
  int q, n;
  cin>>q;
  while(q--){
    cin>>n;

    for(int i=0; i<n; ++i) {
      cin>>a[i];
    }
    sort(a, a+n);
    int ans=1;
    for(int i=0; i<n-1; ++i) {
      if(a[i+1] == a[i]+1) ans=1;
    }
    cout<<ans<<endl;
  }
}