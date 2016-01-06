#include <bits/stdc++.h>
#define REEP(i, a, b) for(int i=(a); i<(b); i++)
#define REP(i, n) REEP(i, 0, n)
#define ALL(a) (a).begin(),(a).end()
using namespace std;

int solve(void){
  int year, month, day;
  cin >> year >> month >> day;
  if(year%3==0) day=21-day;
  else day=20-day;
  REEP(i,year+1,1000){
    if(i%3==0) day+=200;
    else day+=195;
  }
  if(year%3==0) REEP(i,month+1,11) day+=20;
  else{
    REEP(i,month+1,11){
      if(i%2==0) day+=20;
      else day+=19;
    }
  }
  return day;
}

int main(void){
  int n;
  cin >> n;
  while(n--) cout << solve() << endl;
  return 0;
}
