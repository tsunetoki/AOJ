#include <bits/stdc++.h>
#define REEP(i, a, b) for(int i=(a); i<(b); i++)
#define REP(i, n) REEP(i, 0, n)
#define ALL(a) (a).begin(),(a).end()
using namespace std;

int solve(int n, int m, int p){
  double sum=0, tmp=0;
  vector<int> x(n);
  REP(i, n){
    cin >> x[i];
    sum+=x[i];
  }
  if(x[m-1]==0) return 0;
  tmp=(int)(sum*(100-p)/x[m-1]);
  
  return tmp;
}

int main(void){
  int n, m, p;
  while(cin >> n >> m >> p,n) cout << solve(n,m,p) << endl;
  return 0;
}
