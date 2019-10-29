#include <bits/stdc++.h>
using namespace std;

#define maxN 100000
int a[maxN];

int main() {
  unsigned long long b, k, r=0;
  cin >> b >> k;
  bool bIsEven = b%2==0;
  bool even = true;
  for(int i=0; i<k; ++i) {
    cin>> a[i];
  }
  if(!bIsEven) {
    for(int i=0; i<k; ++i) {
      bool currentIsEven = a[i]%2 == 0;
      // cout<<a[i]<<endl;
      // cout<<"cIE "<<currentIsEven<<endl; 
      currentIsEven = currentIsEven || bIsEven;
      // cout<<"cIE "<<currentIsEven<<endl; 
      even = (even && currentIsEven) || (!even && !currentIsEven);
      // if(even){
      //   cout<<  "even"<<endl;
      // } else {
      //   cout<<  "odd"<<endl;

      // }
    }

  } else {
    if(a[k-1]%2!=0){
      even = false;
    }

  }
  if(even){
    cout<<"even"<<endl;
  } else {
    cout<<"odd"<<endl;
  }
}