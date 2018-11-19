#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
# define ll long long int
int main()
{
    int n;
    vector< string >v;
    string y;
    string p;
    cin >> p >> n;
    for(int i=0;i<n;i++)
    {
    	cin >> y;
    	v.push_back(y);
    }
    int a=0;
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    			if( v[i][1] == p[0] && v[j][0] == p[1] ){a=1;}
    			if( v[j][1] == p[0] && v[i][0] ==p[1] ){a=1;}
    			if( v[i][0] == p[0] && v[i][1] ==p[1] ){a=1;}
    			if( v[j][0] == p[0] && v[j][1] ==p[1] ){a=1;}
        }
    }
    if(a==1){ cout << "YES" << endl;}
    else{ cout << "NO" << endl;}



	return 0;
}
