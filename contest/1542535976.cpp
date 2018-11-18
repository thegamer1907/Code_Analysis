#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define ll long long
#define p(x) pow(2,x)
#define ld long double
#define MAX 9
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define all(vec) vec.begin(),vec.end()
#define rall(vec) vec.rbegin(),vec.rend()
using namespace std;


int main(){IOS
string pass;cin>>pass;
int n;cin>>n;
vector<string>ss(n);
for(int i=0;i<n;++i){
    cin>>ss[i];
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        string temp1=ss[i]+ss[j],temp2=ss[j]+ss[i];
        auto f1=temp1.find(pass),f2=temp2.find(pass);
        if(f1!=string::npos || f2!=string::npos){cout<<"YES";return 0;}
    }
}
cout<<"NO";
return 0;
}
