//
//  main.cpp
//  C
//
//  Created by vincent alek on 6/1/17.
//  Copyright © 2017 vincent alek. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <limits.h>
#include <utility>
#include <queue>
using namespace std;

#define fir first
#define sec second

long long arr[100003];
priority_queue<long long> pq;

int main()
{
    int n; long long s; scanf("%d %lld", &n, &s);
    for(int i = 1; i <= n; i++) scanf("%lld", &arr[i]);
    int ans_1 = 0;
    long long ans_2 = 0;
    for(long long i = 1; i <= n && (i*i*i+i*i) <= s*2; i++)
    {
        long long sum = 0;
        for(int j = 1; j <= n; j++) arr[j] += (long long)j;
        for(int j = 1; j <= i; j++) pq.push(arr[j]);
        for(int j = (int)i+1; j <= n; j++)
        {
            long long temp = pq.top();
            if(temp > arr[j])
            {
                pq.pop();
                pq.push(arr[j]);
            }
        }
        while(!pq.empty())
        {
            long long temp = pq.top();
            sum += temp;
            pq.pop();
        }
        if(sum <= s)
        {
            ans_1 = (int)i;
            ans_2 = sum;
        }
        else break;
    }
    printf("%d %lld\n", ans_1, ans_2);
    return 0;
}
