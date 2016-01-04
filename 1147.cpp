#include <bits/stdc++.h>
#define REEP(i, a, b) for(int i=(a); i<(b); i++)
#define REP(i, n) REEP(i, 0, n)
#define ALL(a) (a).begin(),(a).end()
using namespace std;

int solve(int cnt){
  int input, result=0, max=-1, min=1001;
  REP(i,cnt){
    cin >> input;
    result += input;
    if(input>max) max=input;
    if(input<min) min=input;
  }
  result=(result-min-max)/(cnt-2);
  return result;
}

int main(void){
  int cnt;
  while(cin>>cnt,cnt){
    cout << solve(cnt) << endl;
  }  
  return 0;
}
