# include <bits/stdc++.h>

#define fr first
#define sc second
#define mk make_pair
#define pb push_back
#define ll long long

using namespace std;

vector<string>sd(101);
int main()
{
    string s, s1 ="";
    int n, i, j;
    cin >> s;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> sd[i];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++){
           s1 += sd[i];
           s1 += sd[j];
        }
    for (i = 0; i < s1.size() - 1; i++)
        if (s1[i] == s[0] && s1[i + 1] == s[1]){
          cout << "YES";
          return 0;
        }
    cout << "NO";
   return 0;
}


