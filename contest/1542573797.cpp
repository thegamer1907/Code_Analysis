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

int n;
string s, st[MXN];

int main(){
   cin >>s >>n;
   for(int i = 0; i < n; i ++){
      cin >>st[i];
   } for(int i = 0; i < n; i ++){
      if(st[i][1] == s[0]){
         for(int j = 0; j < n; j ++){
            if(st[j][0] == s[1]){
               cout <<"YES";
               return 0;
            }
         }
      }
      if(st[i] == s){
         cout <<"YES";
         return 0;
      }
   } cout <<"NO";
   return 0;
}