#include <iostream>
#include <vector>
#include <algorithm>
#include <set>


using namespace std;


int N;
string orig;
set<string> consider;


void input(){

  cin >> orig >> N;

  string tmp;
  for(int i = 0 ; i < N ; i++)
    cin >> tmp, consider.insert(tmp);
}

bool containsLetter(char ch, int id){

  for(string str : consider)
    if(str[id] == ch)
      return true;

  return false;
}

bool solve(){

  if(consider.find(orig) != consider.end())
    return true;

  if(containsLetter(orig[0], 1) && containsLetter(orig[1], 0))
    return true;

  return false;
}


int main() {

  ios::sync_with_stdio(false);
  cin.tie(0);


  input();
  if(solve())
    cout << "YES";
  else
    cout << "NO";



  return 0;
}


