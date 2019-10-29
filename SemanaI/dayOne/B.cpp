#include <bits/stdc++.h>
using namespace std;

#define maxN 100
int a[maxN];

int main() {
  int n, pos=0, neg=0;
  cin>> n;
  for(int i=0; i<n; ++i){
    cin>> a[i];
    if(a[i]>0) pos++;
    if(a[i]<0) neg++;
  }
  int half = ceil((float)n/2.0); 
  if(pos>= half){
    cout<<"1"<<endl;
  } else if(neg >= (n/2) +1) {
    cout<<"-1"<<endl;
  } else {
    cout<<"0"<<endl;
  }
}