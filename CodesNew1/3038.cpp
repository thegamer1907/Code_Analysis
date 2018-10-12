/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
#include<bits/stdc++.h>
int main()
{
    long long int k,n,ans=0;
    string s;
    cin >> k >> s;
    n = s.length();
    unordered_map<int,int> M;
    M[0] = 1;
    int sum = 0;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        if(s[i] == '1')sum++;
        v.push_back(sum);
        M[sum]++;
    }
    for(int i=n-1; i>=0; i--)
    {
        int temp = v[i];
        M[temp]--;
        ans = ans + M[temp-k];
    }
    cout << ans ;
}
