#include <bits/stdc++.h>

using namespace std;

map <char, long long> need;
map <char, long long> have;
map <char, long long> cost;

long long money;

inline bool __may__be(long long ans) {
      map <char, long long> q;

      for (char food : vector<char>{'B', 'S', 'C'}) {
            q[food] = need[food] * ans;
      }

      long long told = 0;

      for (char food : vector<char>{'B','S','C'}) {
            q[food] -= have[food];
            q[food] = max(q[food], 0LL);
            told += q[food] * cost[food];
      }

      return told <= money;
}

int main(){
      string recept;
      cin >> recept;

      for (char i : recept)
            need[i]++;

      for (char food : vector<char>{'B', 'S', 'C'}) {
            cin >> have[food];
      }

      for (char food : vector<char>{'B', 'S', 'C'}) {
            cin >> cost[food];
      }

      cin >> money;
      
      long long l = 0;
      long long r = 1e15;

      while (r - l > 1) {
            long long mid = (l + r) >> 1;
            if (__may__be(mid))
                  l = mid;
            else
                  r = mid;
      }

      cout << l << '\n';

      return 0;
}