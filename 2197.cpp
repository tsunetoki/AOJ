#include <bits/stdc++.h>
#define REEP(i, a, b) for(int i=(a); i<(b); i++)
#define REP(i, n) REEP(i, 0, n)
#define ALL(a) (a).begin(),(a).end()
using namespace std;
 
int solve(int N){
  int ans[1001]={0}, sum;
  REEP(i, 1, 1001){
    sum = i;
    REEP(j, i+1, 1001){
      sum += j;
      if(sum > 1000) break;
      ans[sum]++;
    }
  }
  return ans[N];
}
 
int main(void){
  int N;
  while(cin>>N,N) cout << solve(N) << endl;
  return 0;
}
