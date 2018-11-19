#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ifstream cin ("input.txt");
//ofstream cout ("output.txt");
vector<vector<int> > v;
v.resize(5);
int h,m,s,t1,t2;
cin>>h>>m>>s>>t1>>t2;
v[0].push_back((3600*h+m*60+s)%43200);
v[0].push_back(0);
v[1].push_back((720*m+12*s)%43200);
v[1].push_back(0);
v[2].push_back((720*s)%43200);
v[2].push_back(0);
v[3].push_back((t1*3600)%43200);
v[3].push_back(1);
v[4].push_back((t2*3600)%43200);
v[4].push_back(1);
sort(v.begin(),v.end());


if((v[0][1]==v[4][1] && v[0][1]==1)||(v[0][1]==v[1][1] && v[0][1]==1)||(v[1][1]==v[2][1] && v[1][1]==1)||(v[2][1]==v[3][1] && v[2][1]==1)||(v[3][1]==v[4][1] && v[3][1]==1)) {cout<<"YES";return 0;}
else cout<<"NO";
}

