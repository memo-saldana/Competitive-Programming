#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y, z, a, b, c;
  cin >> x >> y >> z;
  cin >> a >> b >> c;

  // Andrew eats green
  a = a-x;
  if( a<0 ){
    cout<< "NO" << endl;
    return 0;
  }

  if( y <= (a + b)){
    // D can eat

    // M eats black first
    z = z - c;
    if((z+y) <= (a+b)){
      cout <<"YES" << endl;
      return 0;
    }
  } 
  cout << "NO"<<endl;
  return 0;
}
