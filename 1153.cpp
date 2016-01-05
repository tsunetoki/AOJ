#include <bits/stdc++.h>
#define REEP(i, a, b) for(int i=(a); i<(b); i++)
#define REP(i, n) REEP(i, 0, n)
#define ALL(a) (a).begin(),(a).end()
using namespace std;

void solve(int n, int m){
  int taro_max=101, hana_max=101, sum=0;
  vector<int> taro(n+1);
  vector<int> hana(m);
  REP(i, n){
    cin >> taro[i];
    taro[n]+=taro[i];
    sum+=taro[i];
  }
  REP(i, m){
    cin >> hana[i];
    sum+=hana[i];
  }
  REP(i, n){
    REP(j ,m){
      if((taro[n]-taro[i]+hana[j])*2==sum){
	if(taro[i]+hana[j]<taro_max+hana_max){
	  taro_max=taro[i];
	  hana_max=hana[j];
	}
      }
    }
  }
  if(taro_max==101) cout << -1 << endl;
  else cout << taro_max << " " << hana_max << endl;
  return;
}

int main(void){
  int n, m;
  while(cin >> n >> m,!(n==0&&m==0)) solve(n,m);
  return 0;
}
