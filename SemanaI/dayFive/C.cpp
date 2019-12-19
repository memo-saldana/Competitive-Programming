#include <bits/stdc++.h>
using namespace std;

#define maxN 550
#define maxM 550
#define maxA 100100

int mat[maxN][maxM];

int primes[maxA];

bool prime(int x) {

  if (primes[x] != 0) {
    return primes[x] == 1;
  }

  if (x == 0 || x == 1) {
      return false;
  }
  if (x == 2)
      return true;

  for (int i = 2; i <= x/2; i++) {
      if (x % i == 0) {
          primes[x] = 2;
          return false;
      }
  }

  primes[x] = 1;

  return true;
}

int nextprime(int n) {
  int i = 0;

  while (true) {
    if (prime(i+n))
      return i;
    i++;
  }
}

int main() {
    int n, m, count = 0;
    vector<int> rows;
    vector<int> cols;

    cin >> n >> m;

    memset(primes, 0, sizeof(primes));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            count += nextprime(mat[i][j]);
        }
        rows.push_back(count);
        count = 0;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            count += nextprime(mat[j][i]);
        }
        cols.push_back(count);
        count = 0;
    }
    cout << min(*min_element(rows.begin(), rows.end()), *min_element(cols.begin(), cols.end())) << endl;
    return 0;
}