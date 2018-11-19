/*
 * LIVEARCHIVE_4448.cpp
 *
 *  Created on: Sep 29, 2017
 *      Author: Hossam Eissa
 *      Idea:
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5+5;
const double eps = 1e-9;
const double EPS = 1e-8;
int main()
{
    ios::sync_with_stdio(false);
    int n;
    string s;
    cin>>s;
    cin>>n;
    vector<string>v;
    for(int i=0;i<n;i++){
        string s2;
        cin>>s2;
        if(s==s2){
            cout<<"YES"<<endl;
            return 0;
        }
        v.push_back(s2);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[0]==v[i][1]&&s[1]==v[j][0]){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
