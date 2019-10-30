#include <bits/stdc++.h>
using namespace std;

int main() {
  string t, s;
  int i=0;
  unordered_set<char> vocals = {'a','e','i','o','u'};
  cin>> s >> t;
  if(s.length() != t.length()) {
    cout<<"No"<<endl;
    return 0;
  }
  while(i<s.length() && i<t.length()){
    if((vocals.find(s[i])==vocals.end() && vocals.find(t[i])!=vocals.end())
        || (vocals.find(s[i])!=vocals.end() && vocals.find(t[i])==vocals.end())){
      cout<<"No"<<endl;
      return 0;
    }
    i++;    
  }
  cout<<"Yes"<<endl;
  
}