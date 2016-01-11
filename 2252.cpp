#include <bits/stdc++.h>
#define REEP(i, a, b) for(int i=(a); i<(b); i++)
#define REP(i, n) REEP(i, 0, n)
#define ALL(a) (a).begin(),(a).end()
using namespace std;

int solve(string str){
  int ans=0, flag=0, cnt[33]={0};
  string check="yuiophjklnm";
  REP(i, (int)str.length()){
    flag=2;
    REP(j, (int)check.length()){
      if(str[i] == check[j]){
	flag=1;
	break;
      }
    }
    cnt[i]=flag;
  }
  REP(i,(int)str.length()-1){
    if(cnt[i]!=cnt[i+1]) ans++;
  }
  return ans;
}

int main(void){
  string str;
  while(cin>>str,str!="#"){
    cout << solve(str) << endl;
  }
  return 0;
}
