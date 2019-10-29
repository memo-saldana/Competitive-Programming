#include <bits/stdc++.h>
using namespace std;

#define maxN 100

int main() {
  int n, k, current, distinct=0;
  unordered_map<int,int> mp;
  cin >>n >> k;
  for(int i=0; i<n; ++i) {
    cin>>current;
    if(mp.find(current)== mp.end()){
      distinct++;
      mp[current] = i+1;
    }
  }
  if(distinct >= k) {
    cout<<"YES"<<endl;
    unordered_map<int,int>::iterator currentPair = mp.begin();
    for(int i=0; i<k; ++i){
      cout<<currentPair->second<<" ";
      currentPair++;
    }
    cout<<endl;
  } else {
    cout<<"NO"<<endl;
  }
}