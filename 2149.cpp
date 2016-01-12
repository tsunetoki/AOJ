#include <bits/stdc++.h>
#define REEP(i, a, b) for(int i=(a); i<(b); i++)
#define REP(i, n) REEP(i, 0, n)
#define ALL(a) (a).begin(),(a).end()
using namespace std;

int solve(int n, int a, int b, int c, int x){
  int cnt=0, j=0;
  vector<int> y(n);
  REP(i, n) cin >> y[i];
  do{
    if(x==y[j]) j++;
    x=(a*x+b)%c;
    cnt++;
    if(cnt>10001) return -1;
  }while(j<n);
  cnt--;
  return cnt;
}

int main(void){
  int n,a,b,c,x;
  while(cin >> n >> a >> b >> c >> x,n){
    cout << solve(n,a,b,c,x) << endl;
  }
  return 0;
}
