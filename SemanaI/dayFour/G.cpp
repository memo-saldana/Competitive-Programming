#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, d, start=0, end, jumps = 0;
  string lily;
  cin >> n >> d >>lily;
  end = d;
  while(start!=end){
    if(end >= n-1){
      cout<<jumps+1 <<endl;
      return 0;
    }
    if(lily[end] == '1'){
      jumps++;
      start = end;
      end+= d;
    } else {
      end--;
    }
  }
  cout<<"-1"<<endl;
  
  return 0;
}