#include <iostream>
#include <vector>
#include <algorithm>
#include <set>


using namespace std;


const int MAXN = 110;
const int MAX_LEN = 15;


int N, M;
set<string> BStrings[MAXN+MAXN][MAX_LEN+1];
pair<string, string> start_end[MAXN+MAXN];


void input(){

  cin >> N;

  string str;
  int len;
  for(int i = 1 ; i <= N ; i++){

    cin >> str;

    len = (int)str.size();

    for(int j = 0 ; j < len ; j++)
      for(int l = 1 ; l <= min(len-j, MAX_LEN) ; l++)
        BStrings[i][l].insert(str.substr(j, l));

    if(len <= MAX_LEN)
      start_end[i] = {str, str};
    else
      start_end[i] = {str.substr(0, MAX_LEN), str.substr(len-MAX_LEN)};
  }
}


void solve(){

  cin >> M;

  int id1, id2, len, ans;
  string str;
  for(int i = N+1 ; i <= N+M ; i++){

    cin >> id1 >> id2;

    for(int l = 1 ; l <= MAX_LEN ; l++){

      for(string s : BStrings[id1][l])
        BStrings[i][l].insert(s);

      for(string s : BStrings[id2][l])
        BStrings[i][l].insert(s);
    }

    str = start_end[id1].second + start_end[id2].first;
    len = (int)str.size();

    for(int j = 0 ; j < len ; j++)
      for(int l = 1 ; l <= min(len-j, MAX_LEN) ; l++)
        BStrings[i][l].insert(str.substr(j, l));

    ans = 0;
    for(int l = 1 ; l <= MAX_LEN ; l++)
      if((int)BStrings[i][l].size() == (1 << l))
        ans = l;

    cout << ans << "\n";

    if((int)start_end[id1].first.size() == MAX_LEN){

      start_end[i].first = start_end[id1].first;
    }
    else{

      string tmp = start_end[id1].first + start_end[id2].first;
      tmp = tmp.substr(0, MAX_LEN);
      start_end[i].first = tmp;
    }

    if((int)start_end[id2].second.size() == MAX_LEN){

      start_end[i].second = start_end[id2].second;
    }
    else{

      string tmp = start_end[id1].second + start_end[id2].first;
      int tmp_len = (int)tmp.size();
      tmp = tmp.substr(max(0, tmp_len - MAX_LEN));
      start_end[i].second = tmp;
    }
  }
}


int main() {

  ios::sync_with_stdio(false);
  cin.tie(0);


  input();
  solve();


  return 0;
}


