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

//int n,m;
int a[MAXN];

char c1,c2;
char s1[105][2];
double h,m,s;
double t1,t2;

int main(){
    cin>>h>>m>>s>>t1>>t2;
    if((int)s==0){}
    else {h=(int)h%12+0.5;m=m+0.5;}
    if((int)s==0&&(int)m!=0){
        h=(int)h%12+0.5;
    }
    h*=5;t1*=5;t2*=5;
    if(h>m)swap(h,m);
    if(m>s)swap(m,s);
    if(h>m)swap(h,m);
//    cout<<h<<" "<<m<<" "<<s<<endl;
    if(t1>=h&&t1<=m&&t2>=h&&t2<=m){cout<<"YES"<<endl;return 0;}
    else if(t1>=m&&t1<=s&&t2>=m&&t2<=s){cout<<"YES"<<endl;return 0;}
    else if((t1>=s||t1<=h)&&(t2>=s||t2<=h)){cout<<"YES"<<endl;return 0;}
    cout<<"NO"<<endl;
    return 0;
}
