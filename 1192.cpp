#include <bits/stdc++.h>
#define REEP(i, a, b) for(int i=(a); i<(b); i++)
#define REP(i, n) REEP(i, 0, n)
#define ALL(a) (a).begin(),(a).end()
using namespace std;

int solve(int x, int y, int s){
  int value1, value2, MAX=-1;
  REEP(i, 1, s){
    for(int j=s-i; j>=i; j--){
      value1=i*(100+x)/100;
      value2=j*(100+x)/100;
      if(value1+value2!=s) continue;
      MAX = max( MAX,i*(100+y)/100+j*(100+y)/100);
    }
  }
  return MAX;
}

int main(void){
  int x, y, s;
  while(cin >> x >> y >> s ,x) cout << solve(x,y,s) << endl;
  return 0;
}
