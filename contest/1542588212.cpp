#include<bits/stdc++.h>
#include <map>
#include <cmath>
#include <queue>
#include <vector>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
#define inf 0x3f3f3f3f
using namespace std;

int main()
{
    string str,num[110];
    cin>>str;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>num[i];
    int mdzzzz=0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            string c = num[i];
            c += num[j];
            if(c.find(str)!=string::npos)
                mdzzzz=1;
        }
    }
    if(mdzzzz)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
