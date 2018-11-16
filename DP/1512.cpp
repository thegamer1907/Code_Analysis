#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>
#include <map>
#include <string>
#include <queue>
#include <stack>
#include <deque>
#include <set>

using namespace std;

#define ll long long
#define pb push_back
#define ppb pop_back
#define bs binary_search
#define __ ios_base::sync_with_stdio(0); cin.tie(NULL);

vector<int> scan_array(int n) {
    vector<int> m(n);
    for(int i = 0; i < n; i++) {
        cin>>m[i];
    }
    return m;
}

bool is_prime(int x) {
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int digits_sum(int n) {
    int tmp = 0;
    while(n != 0) {
        tmp += n % 10;
        n /= 10;
    }
    return tmp;
}

int digits_sum(string s) {
    int sz = s.size(), ans = 0;
    for(int i = 0; i < sz; i++) {
        ans += s[i] - '0';
    }
    return ans;
}

string convert_from_decimal(int num, int base) {
    string result = "";
    while (num) {
        int last_digit = num % base;
        if (last_digit < 10)
            result += '0' + last_digit;
        else
            result += 'A' + (last_digit - 10);
        num /= base;
    }
    reverse(result.begin(), result.end());
    return result;
}

int convert_to_decimal(string str, int base) {
    int len = str.size(), power = 1, num = 0, val;
    for (int i = len - 1; i >= 0; i--) {
        if (str[i] >= '0' && str[i] <= '9')
            val = (int)str[i] - '0';
        else
            val = (int)str[i] - 'A' + 10;
        if (val >= base) {
            cout<<"Invalid Number";
            return -1;
        }
        num += val * power;
        power = power * base;
    }
    return num;
}

int mod(int a, int b) {
    if(a >= 0)
        return a % b;
    else {
        if(a % b == 0) return 0;
        else {
            if(b > 0)
                return a - (a / b - 1) * b;
            else
                return a - (a / b + 1) * b;
        }
    }
}

bool is_palindrome(string s) {
    if (s == string(s.rbegin(), s.rend())) {
        return true;
    }
    return false;
}

int factorial(int n) {
    int ans = 1;
    for(int i = 2; i <= n; i++) {
        ans *= i;
    }
    return ans;
}

struct compare {
    bool operator()(const std::string& first, const std::string& second) {
        return first.size() < second.size();
    }
};

bool can(int l, int s) {
  if(s >= 0 && s <= l * 9) return true;
  return false;
}

int main() { __
  int n, cur_ans = 0, ans = 0;
  cin>>n;
  int v[n];
  for(int i = 0; i < n; i++) {
    cin>>v[i];
  }
  for(int i = 0; i < n; i++) {
    for(int j = i; j < n; j++) {
      cur_ans = 0;
      for(int x = 0; x < n; x++) {
        if(x >= i && x <= j) {
          cur_ans += (1 - v[x]);
        }
        else 
          cur_ans += v[x];
      }
      ans = max(ans, cur_ans);
    }
  }
  cout<<ans;
  return 0;
}