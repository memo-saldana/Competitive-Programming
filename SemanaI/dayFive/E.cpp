#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  string s, t;
  cin>>q;
  while(q--){
    // cout<<q<<endl;

    cin >>s >>t;
    // cout<<s << " "<<t<<endl;
    if(s == t) {
      cout<<"YES"<<endl;
    } else {
      unordered_set<char> myS;
      bool b = true;
      int i=0;
      int n = s.length();
      
      for (int i = 0; i < n; i++)
      {
        myS.insert(s[i]);
      }
      for (int i = 0; i < n && b; i++)
      {
        if(myS.find(t[i])!= myS.end()){
          b = false;
        }
      }
      
      if(b) {
        cout<<"NO"<<endl;
      } else {
        cout<<"YES"<<endl;
      }
      
    }
  }
  
  return 0;
}