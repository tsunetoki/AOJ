#include <bits/stdc++.h>
#define REEP(i, a, b) for(int i=(a); i<(b); i++)
#define REP(i, n) REEP(i, 0, n)
#define ALL(a) (a).begin(),(a).end()
using namespace std;


void solve(void){
  int tmp=0, cnt=0;
  string str, ans;
  char data[9][5]={{'.',',','!','?',' '},{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
  cin >> str;
  for(int i=0 ; str[i]!='\0' ; i++){
    switch(str[i]){
    case '0':
      if(cnt==0) continue;
      cnt--;
      if((int)str[i-1]-48==1) cnt%=5;
      else if((int)str[i-1]-48==7||(int)str[i-1]-48==9) cnt%=4;
      else cnt%=3;
      ans += data[(int)str[i-1]-49][cnt];
      cnt=0;
      tmp++;
      break;
    default:
      cnt++;
      break;
    }
  }
  cout << ans << endl;
}

int main(void){
  int n;
  cin>>n;
  while(n--){
    solve();
  }
  return 0;
}
