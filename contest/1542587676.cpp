#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <cstring>
#include <ctime>
#include <unordered_map>
#include <iomanip>
using namespace std;

#define fi first
#define se second
#define pb push_back
#define all(v) (v).begin(),(v).end()

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pii;

string letters[110];

int main(){
  string password;
  int N;

  cin >> password;
  cin >> N;

  for(int i = 0; i < N; i++){
    cin >> letters[i];
    if(letters[i] == password){
      cout << "YES" << endl;
      return 0;      
    }
  }

  for(int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      if((password[0] == letters[i][1] && password[1] == letters[j][0]) || (password[0] == letters[j][1] && password[1] == letters[i][0])) {
        cout << "YES" << endl;
        return 0;
      }
    }
  }
    cout << "NO" << endl;
    return 0;
}