#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int n, a[100000], negs=0, z=0, moves=0;
  cin >>n;
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  
  for (int i = 0; i < n; i++)
  {
    int v = a[i];
    if(v == 0){
      z++;
      moves ++;
    } else {
      if(v<0){
        negs++;
        moves+= v*-1 - 1;
      } else {
        moves+= v-1;
      }
    }
  }
  if(negs%2 != 0){
    if(z==0){
      moves +=2;
    }
  }
  cout<< moves<<endl;
  return 0;
}