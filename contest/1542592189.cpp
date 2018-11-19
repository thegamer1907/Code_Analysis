#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<ctime>
#include<algorithm>
#include<cstdlib>
#include<vector>
#include<queue>
#define ll __int64

const int MAXN=1e6+7;
const int MOD=1e9+7;

using namespace std;

int n,m;
int a[MAXN];

char c1,c2;
char s1[105][2];

int main(){
    cin>>c1>>c2;
    cin>>n;
//    cout<<c1<<c2<<endl;
    for(int i=0;i<n;i++){
        cin>>s1[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(s1[i][0]==c1&&s1[i][1]==c2){cout<<"YES"<<endl;return 0;}
            if(s1[j][0]==c1&&s1[j][1]==c2){cout<<"YES"<<endl;return 0;}
            if(s1[i][1]==c1&&s1[j][0]==c2){cout<<"YES"<<endl;return 0;}
            if(s1[j][1]==c1&&s1[i][0]==c2){cout<<"YES"<<endl;return 0;}
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
