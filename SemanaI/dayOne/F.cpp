
int a[maxN];

int main() {
  int n, k;
  cin >> n >> k;
  for(int i=0; i<n; ++i){
    cin>> a[i];
  }
  int res = 0;
  int front =0;
  while(front<n && a[front] <= k ){
    res++;
    front++;

  }
  int back = n-1;
  while(back > front && a[back] <= k){
    res++;
    back--;
  }
  cout<<res;
}