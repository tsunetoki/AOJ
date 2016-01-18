#include <bits/stdc++.h>
#define REEP(i, a, b) for(int i=(a); i<(b); i++)
#define REP(i, n) REEP(i, 0, n)
#define ALL(a) (a).begin(),(a).end()
using namespace std;

int solve(int n, int r){
  int p, c, array[n], tmp[n];
  REP(i, n) array[i]=n-i;
  REP(i, r){
    cin >> p >> c;
    REP(j, n) tmp[j]=array[j];
    REP(j, c) array[j]=tmp[p+j-1];
    REP(j, p-1) array[c+j]=tmp[j];
  }
  return array[0];
}

int main(void){
  int n, r;
  while(cin >> n >> r, n){
    cout << solve(n, r) << endl;
  }
  return 0;
}
