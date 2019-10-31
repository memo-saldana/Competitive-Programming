#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a[100];
  char status = 'u';
  cin>>n;
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  
  for(int i=0; i< n-1; ++i ) {
    if(status == 'u' && a[i] >= a[i+1]){
      status = a[i] == a[i+1] ? 's' : 'd';
    } else if ( status == 's' && a[i] > a[i+1]){
      status = 'd';
    } else if( status == 's' && a[i] < a[i+1] || status == 'd' && a[i]<= a[i+1]){
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES"<<endl;
  return 0;
}