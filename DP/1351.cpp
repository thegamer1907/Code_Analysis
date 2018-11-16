
//  main.cpp
//  IOI Goals
//
//  Created by Nishant Dhankhar on 25/07/18.
//  Copyright © 2018 Nishant Dhankhar. All rights reserved.
//

#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
#include <iostream>
//#include <bits/stdc++.h>
#define all(v)
#define FOR(i,k,n) for(int i=k;i<n;i++)
//#define size() strlen()
#define REV(x) reverse(x.begin(),x.end())
//#define ll %l64d
//#define co 100005;
using namespace std;
#define fori(i,n) for(int i=0;i<n;i++)
#define mp(a,b) make_pair(a,b)
#define SORT(x) sort(x.begin(),x.end())
//vector<int> num;
#define pb push_back
//int compi(char a,char b)
using namespace std;
//   pair<int,int> p,pi,pf;
#define ll long long
//3

//#define rev(s) reverse(s.begin(),s.end())


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        if(a[i]) a[i]-=2;
        else if(!a[i]) a[i]++;
    }
    //dp calculate the max no. of 1s by flipping an interval
    //
    int dp[n];
    
    int maxi;
    maxi=a[0];
    dp[0]=a[0];
    for(int i=1;i<n;i++){
        dp[i]=max(dp[i-1]+a[i],a[i]);
        maxi=max(dp[i],maxi);
    }
   // cout<<dp[n-1];
    cout<<sum+maxi<<'\n';
    return 0;
}



