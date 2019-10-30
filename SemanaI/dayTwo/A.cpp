  #include <bits/stdc++.h>
  using namespace std;

  int main() {
    int q, n;
    string s;
    cin>>q;

    while(q--){
      cin>> n;
      cin>> s;
      string first = s.substr(0,1);
      string second = s.substr(1);

      if(n==2 && first >= second){
        cout<<"NO"<<endl;
      } else {
        cout<<"YES"<<endl;
        cout<<"2"<<endl;
        cout<<first<<" "<<second<<endl;
      }
    }
  }