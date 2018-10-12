//
//  main.cpp
//  nik the hardest gcd ever
//
//  Created by PREEYADARSHEE DEV on 11/06/18.
//  Copyright © 2018 PREEYADARSHEE DEV. All rights reserved.
//
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <bitset>
#include <chrono>
#define  N 10000001
using namespace std::chrono;
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    vector<int>cnt(N+1,0);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        cnt[a[i]]++;
    }
    bitset<N>check(0);
    vector<pair<int,int>>v;
    v.push_back(make_pair(0,0));
    //auto start=high_resolution_clock::now();
    for(int i=2;i<=N;i++)
    {
        if(check[i]==0)
        {
            int count=0;
            for(int j=i;j<=N;j=j+i)
            {
                check[j]=1;
                count=count+cnt[j];
            }
            v.push_back(make_pair(i,count));
        }
    }
    for(int i=1;i<v.size();i++)
    {
        v[i].second+=v[i-1].second;
    }
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        pair<int,int>nik,pd;
        nik.first=a;
        nik.second=0;
        pd.first=b;
        pd.second=0;
        auto it=lower_bound(v.begin(),v.end(),nik);
        auto ik=lower_bound(v.begin(),v.end(),pd);
        if(it!=v.end())
        {
            while(it->first>=a&&it!=v.begin())
            {
                it--;
            }
        }
        else
        {
            it--;
            while(it->first>=a&&it!=v.begin())
            {
                it--;
            }
        }
        if(ik!=v.end())
        {
            while(ik->first>b&&ik!=v.begin())
            {
                ik--;
            }
        }
        else
        {
            ik--;
            while(ik->first>b&&ik!=v.begin())
            {
                ik--;
            }
        }
        printf("%d\n",ik->second-it->second);
    }
    //auto end=high_resolution_clock::now();
    //auto duration=duration_cast<milliseconds>(end-start);
    //cout<<duration.count()<<"\n";
}
