#include <bits/stdc++.h>
using namespace std;

int main() {

  int n,a,b,c, res=0;
  cin>>n>>a>>b>>c;
  if(a==1 || b==1 || c==1) {
    cout<<n<<endl;
    return 0;
  }
  for (int i = 0; i*a <= n; i++)
  {
    for (int j = 0; j*b+a*i <= n; j++)
    {
      for (int k = 0; k*c+j*b+a*i <= n; k++)
      {
        if(a*i+b*j+c*k== n){
          res = max(i+j+k, res);
          break;
        }
      }
      
    }
    
  }
  cout<<res<<endl;
  
  return 0;
}