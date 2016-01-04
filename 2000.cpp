#include <bits/stdc++.h>
#define REEP(i, a, b) for(int i=(a); i<(b); i++)
#define REP(i, n) REEP(i, 0, n)
#define ALL(a) (a).begin(),(a).end()
using namespace std;
 
int solve(int N){
  int x, y, M, l;
  char d;
  vector< vector<int> > board (21, vector<int>(21));
  REP(i, N){
    cin >> x >> y;
    board[x][y]++;
  }
  x=y=10;
  cin >> M;
  REP(i, M){
    cin >> d >> l;
    switch(d){
    case 'E':
      REP(j, l) board[++x][y]--;
      break;
    case 'W':
      REP(j, l) board[--x][y]--;
      break;
    case 'N':
      REP(j, l) board[x][++y]--;
      break;
    case 'S':
      REP(j, l) board[x][--y]--;
      break;
    }
  }
  REP(i,21) REP(j,21) if(board[i][j]>0) return 0;
  return 1;
}
 
int main(void){
  int N;
  while(cin >> N, N) cout << (solve(N)?"Yse":"No") << endl;
  return 0;
}
