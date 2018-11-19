#include <iostream>
#include <bits/stdc++.h>
/*#include <sstream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <queue>
#include <cmath>
#include <map>
#include <set>
#include <algorithm>
#include<climits>
#include <bitset>
#include <ctime>
#include <cassert>
#include <functional>
#include <iomanip>
#include <vector>
#include <stack>
#include <fstream>*/
//priority_queue<int,vector<int>,greater<int> >vec;
#define OO 1e10
//std::ifstream cin("input.txt");
//std::ofstream cout("output.txt");
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
//cout<<fixed<<setprecision(*)<<***<<endl;
//a=97  A=65 z=122 Z=90
/*scanf("%d",&..);
printf("%d",..);*/

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie();
	bool b=false,d=false;
	string w,s; cin>>w;
	int n; cin>>n;
	for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s==w){cout<<"YES"<<endl; return 0;}
        if(s[0]==w[1]){b=true;}
        if(s[1]==w[0]){d=true;}
    }
    if(b&&d){cout<<"YES"<<endl; return 0;}
    cout<<"NO"<<endl;
	return 0;
}
