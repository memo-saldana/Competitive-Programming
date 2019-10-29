#include <bits/stdc++.h>
using namespace std;

#define maxN 100
#define maxTime 100000

float buses[maxN][2];

int main() {
  float b, t, r=0;
  cin>> b >> t;
  
  for(int i=0; i<b; ++i){
    cin>>buses[i][0] >> buses[i][1];    
  }

  int currentArrival = maxTime;
  for(int i=0; i<b; ++i){
    // int n;
    // if((t-buses[i][0])%buses[i][1] == 0){
    //   n = (t-buses[i][0])/buses[i][1];
    // } else {
    //   n = t-buses[i][0] > 0? 1+((t-buses[i][0])/buses[i][1]) : 0;
    // }
    int n = (t>buses[i][0]) ? ceil((float)(t-buses[i][0])/(float)buses[i][1]) : 0;
    
    // Get next bus of the route after he arrives to station
    // cout<<"n "<< n<<endl;
    int currentBus = buses[i][0] + buses[i][1]*(n);

    // cout<<currentBus<<endl;
    // Check if closer than previous ones
    if(currentBus<currentArrival){
      currentArrival = currentBus;
      r=i+1;
    }
  }
  cout<<r<<endl;
}