//
//  main.cpp
//  nik codeforces problems
//
//  Created by PREEYADARSHEE DEV on 15/06/18.
//  Copyright © 2018 PREEYADARSHEE DEV. All rights reserved.
//
#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<map>
#include<string>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#define INF (long long)1<<60
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    multiset<int>mu;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        mu.insert(a[i]);
    }
    int count=0;
    sort(a,a+n);
    for(int i=n/2-1;i>=0;i--)
    {
        if(mu.lower_bound(2*a[i])!=mu.end())
        {
            auto it=mu.find(a[i]);
            auto itr=mu.lower_bound(2*a[i]);
            mu.erase(itr);
            mu.erase(it);
            count++;
        }
    }
    printf("%d\n",count+(int)mu.size());
}
