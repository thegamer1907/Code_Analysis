/*bismillah ->                                                                                                         << Suirkhanov Meyirlan >>
  GL HF


                                                                                                                      42

    bless my code =)
                                                                                                            NEVER FOLLOW YOUR RULES :D HAHAHAHA
*/


///scanf ("%d%d", &x, &y);
///printf("%d", &a)

#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio();   cin.tie(0);   cout.tie(0);
#define randoperation srand(time(0));
#define pii pair < int , int >
#define pll pair < ll, ll >
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define fast ios_base::sync_with_stdio();   cin.tie(0);   cout.tie(0);
#define randoperation srand(time(0));

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

const ll N = 1e6 + 8;
const ld pi = 3.14159265359;
const int INF = 1e9 + 1;
const double eps = 1e-9;

string s, str[N];

int n;

int main(){

  //freopen("inevit.in", "r", stdin);
  //freopen("inevit.out", "w", stdout);

  fast
  randoperation;

  ///           ||
  ///start here \/

  cin >> s;

  cin >> n;

  for(int i = 1; i <= n; i++){
    cin >> str[i];
    if(str[i] == s){
      cout << "YES";
      return 0;
    }
  }

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){

      string ans1 = "", ans2 = "", ans3 = "", ans4 = "";

      ans3 += str[i][1];
      ans3 += str[j][0];

      if(ans1 == s || ans2 == s || ans3 == s || ans4 == s){
        cout << "YES";
        return 0;
      }
    }
  }

  cout << "NO";
}
