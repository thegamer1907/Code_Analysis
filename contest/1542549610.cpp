//
//  A.cpp
//
//  Created by Vlad Turcuman on 15/12/2017.
//  Copyright © 2017 Vlad Turcuman. All rights reserved.
//

#include <algorithm>
#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include <cmath>
#include <map>

#define pii pair<int,int>
#define fs first
#define sc second
#define NMax 1001

using namespace std;

int m,n;
map<vector<int>, bool > dp[2][5];

bool Add(vector<int> &a,vector<int> b){
    for(int i = 0;i<a.size();i++)
    {
        a[i] += b[i];
        if(a[i] > 2)
            return 0;
    }
    return 1;
}

bool ok(vector<int> a, int c)
{
    for(auto it : a)
        
        if(it > c/2)
            return 0;
    return 1;
}

void Add(map<vector<int>, bool> A[], map<vector<int>, bool> B[], vector<int> v)
{
    vector<int> tmp;
    for(int j = 1;j<=3;j++)
    for(auto it : A[j])
    {
        
        tmp = it.first;
        B[j][it.first] = 1;
        if(Add(tmp, v))
        {
            if( ok ( tmp, j+1) )
            {
                cout<<"YES";
                exit(0);
            }
            B[j+1][tmp] = 1;
        }
    }
    
    B[1][v] = true;
                if(ok(v,1)){
                   cout<<"Yes";
                   exit(0);
                }
}

int main()
{
    cin>>n>>m;
    vector<int> v(m);
    
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>v[j];
        Add(dp[i%2], dp[(i+1)%2], v);
    }
    
    cout<<"No";
    
    return 0;
    
}

	 			   						   	  		 	  	 	 	