#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <map>
#define ld long double
#define ll long long
#define y2 adjfajskdflaskdjflajs

using namespace std;
const int MXN = 1e6 + 7;
const double EPS = 1e-9;
const int INF = 1e9 + 7;

int n, cnt, ans;
string s, st;

int main(){
   cin >>s >>n;
   for(int i = 0; i < n; i ++){
      cin >>st;
      if(st[1] == s[0]){
         cnt ++;   
      } if(st[0] == s[1]){
         ans ++;
      }
      if(st == s){
         cout <<"YES";
         return 0;
      }
   } if(ans > 0 && cnt > 0){
      cout <<"YES";
      return 0;
   } cout <<"NO";
   return 0;
}