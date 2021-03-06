#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<long long int> values;
  long long int l, k, data, result=0;
  string keys;
  char prev;
  cin>> l >> k;
  
  for(int i = 0; i < l; i++)
  {
    cin>>data;
    values.push_back(data);
  }
  cin>>keys;
  prev = keys[0];
  priority_queue<long long int> current;
  current.push(values[0]);
  for(int i = 1; i < l; i++)
  {
    
    if(keys[i]==prev){
      current.push(values[i]);
    } else {
      for(int j = 0; j < k && !current.empty(); j++)
      {
        result+=current.top();
        current.pop();
      }
      current = priority_queue<long long int>();
      prev = keys[i];
      current.push(values[i]);
    }
  }
  for(int j = 0; j < k && !current.empty(); j++)
  {
    result+=current.top();
    current.pop();
  }
  
  cout<<result<<endl;
  return 0;
} 