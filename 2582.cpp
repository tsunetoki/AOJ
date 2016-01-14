#include <bits/stdc++.h>
#define REEP(i, a, b) for(int i=(a); i<(b); i++)
#define REP(i, n) REEP(i, 0, n)
#define ALL(a) (a).begin(),(a).end()
using namespace std;

int solve(int n){
  int cnt=0, sum=0;
  char check;
  vector<int> tmp(n);
  vector<string> set(n);
  REP(i, n) cin >> set[i];
  REP(i, n){
    check=set[i][1];
    switch(check){
      case 'u':
	tmp[i]=1;
	break;
      case 'd':
	tmp[i]=-1;
      break;
    }
  }
  REP(i, n){
    sum+=tmp[i];
    if(cnt%2==0){
      if(sum==2) cnt++;
    }
    if(cnt%2==1){
      if(sum==0) cnt++;
    }
  }
  return cnt;
}

int main(void){
  int n;
  while(cin >> n, n) cout << solve(n) << endl;
  return 0;
}
