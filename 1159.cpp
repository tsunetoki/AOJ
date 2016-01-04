#include <bits/stdc++.h>
#define REEP(i, a, b) for(int i=(a); i<(b); i++)
#define REP(i, n) REEP(i, 0, n)
#define ALL(a) (a).begin(),(a).end()
using namespace std;

int solve(int n,int p){
  int cnt=0, pool=p;
  vector<int> cnd(n,0);
  for(;;cnt++){
    if(pool!=0){
      cnd[cnt%n]++;
      pool--;
      if(pool==0){
	REP(i, n){
	  if(cnd[i]==p) return i;
	}
      }
    } else {
      pool = cnd[cnt%n];
      cnd[cnt%n]=0;
    }
  }
}

int main(void){
  int n, p;
  while (cin >> n >> p, !(n==0&&p==0)){
    cout << solve(n, p) << endl;
  }
  return 0;
}
