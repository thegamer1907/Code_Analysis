// 438 A

#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    string pass;
    string tmp;
    int n;
    bool first[26];
    bool sec[26];

    for (int i = 0; i < 26; ++i)
    {
      first[i] = false;
      sec[i] = false;
      /* code */
    }

    cin >>pass;
    cin >> n;
    while(n--)
    {
      cin >> tmp;
      first[tmp[0]-'a'] = true;
      sec[tmp[1]-'a'] = true;
      if(tmp == pass) 
      {
        cout << "YES";
        return 0;
      }
    }
    if(first[pass[1]-'a'] && sec[pass[0] - 'a'])
    {
      cout << "YES";
    }
    else
    {
      cout <<"NO";
    }

    return 0;

} 
