#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, ans = 0, current = 0;
  string text;

  cin>>n;
  cin.ignore();
  getline(cin, text);

  for (int i = 0; i < n; i++)
  {
    if(text[i] == ' '){
      ans = max(ans,current);
      current = 0;
    } else if( text[i] >= 'A' && text[i] <= 'Z'){
      current++;
    }
  }
  ans = max(ans, current);
  cout<< ans<<endl;
  
  return 0;
}