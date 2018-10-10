//

//  main.cpp
//  NR_ONE_LOVE

//
//  Created by Admin on  12.03.2018.
//  Copyright © 2018 Admin. All rights reserved.
//

//she is one love she is reason of my both allukranian olimpiads she is NR
//she is Nastya RUDENKO she is ONE LOVE

/*
______¶¶¶¶¶¶¶¶¶¶¶¶¶________¶¶¶¶¶¶¶¶¶¶¶¶¶
___¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶__¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶
__¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶
_¶¶¶¶¶¶¶¶¶__________¶¶¶¶¶__________¶¶¶¶¶¶¶¶¶
¶¶¶¶¶¶¶¶_____________________________¶¶¶¶¶¶¶¶
¶¶¶¶¶¶¶________¶¶¶¶¶¶____¶¶¶¶¶¶_______¶¶¶¶¶¶¶
¶¶¶¶¶¶¶_____¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶______¶¶¶¶¶¶
¶¶¶¶¶¶______¶¶¶¶¶¶___¶¶¶¶___¶¶¶¶¶¶_____¶¶¶¶¶¶
¶¶¶¶¶¶¶____¶¶¶¶¶______________¶¶¶¶_____¶¶¶¶¶¶
_¶¶¶¶¶¶____¶¶¶¶¶____¶¶¶¶¶¶____¶¶¶¶_____¶¶¶¶¶¶
__¶¶¶¶¶_____¶¶¶¶___¶¶¶¶¶¶¶____¶¶¶¶____¶¶¶¶¶¶
__¶¶¶¶¶¶_____¶¶¶¶___¶¶¶¶¶¶___¶¶¶¶_____¶¶¶¶¶
___¶¶¶¶¶¶_____¶¶¶¶____¶¶____¶¶¶¶____¶¶¶¶¶¶
____¶¶¶¶¶¶¶____¶¶¶¶¶______¶¶¶¶_____¶¶¶¶¶¶
______¶¶¶¶¶¶_____¶¶¶¶¶¶¶¶¶¶¶_____¶¶¶¶¶¶¶
_______¶¶¶¶¶¶¶_____¶¶¶¶¶¶¶______¶¶¶¶¶¶
_________¶¶¶¶¶¶¶______¶¶_____¶¶¶¶¶¶¶¶
___________¶¶¶¶¶¶¶¶________¶¶¶¶¶¶¶¶
_____________¶¶¶¶¶¶¶¶____¶¶¶¶¶¶¶¶
_______________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶
__________________¶¶¶¶¶¶¶¶¶¶
_____________________¶¶¶¶
*/

#pragma GCC optimize("O3")
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <vector>
#include <queue>
#include <iostream>
#include <iterator>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <ctime>
#include <cstring>
#include <stack>
#include <ctime>
#include <iomanip>
#include <unordered_map>
//#define int long long
#define en "\n"
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
#define for_all(a) (a.begin(),a.end())
#define sz(a) (int)a.size()
#define fst first
#define snd second
#define pii pair<int,int>
#define pdd pair<ld,ld>
#define vi vector <int>
using namespace std;
vi beautiful;
int sumcyfr(int x){
    int ans=0;
    while (x){
        ans+=x%10;
        x/=10;
    }
    return ans;
}
int main(int argc, const char * argv[]){
    int j=1;
    while (sz(beautiful)<10000){
        if (sumcyfr(j)==10){
            beautiful.push_back(j);
            //cout<<beautiful.size()<<" "<<j<<en;
        }
        ++j;
    }
    //for (int i:beautiful) cout<<i<<endl;
    int k;
    cin>>k;
    --k;
    cout<<beautiful[k]<<en;
    return 0;
}
