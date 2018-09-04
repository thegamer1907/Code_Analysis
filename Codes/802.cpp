
// Author            -  Ranadev Varma
// Codeforces Handle -  Ranadev_CaptainR
// Codechef Handle   -  ranadev
 
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
 
#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <iterator>
#include <iomanip>
#include <deque>

using namespace std ;

long long int power(int p)
{
    long long int ans = 1 ;
    while(p--)
    {
        ans*=2;
    }
    return ans;
}

int main()
{
    long long int n,k ;
    cin >> n >> k ;
    long long int len ;
    len = power(n)-1;
    while(1)
    {
        if(k==(len+1)/2)
        {
            cout << n << "\n";
            return 0;
        }
        else if(k<(len+1)/2)
        {
            n--;
        }
        else
        {
            n--;
            k-=power(n);
        }
        len = power(n)-1;
    }
}