#include<bits/stdc++.h>
using namespace std;
int t[3];
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    int h,m,s,a,b;
    while(cin>>h>>m>>s>>a>>b){
        int cnt=0;
        for(int i=min(a,b);i<max(a,b);++i) cnt+=i==h;
        a=a*5;
        b=b*5;
        for(int i=min(a,b);i<max(a,b);++i){
            if(i==m) ++cnt;
            if(i==s) ++cnt;
        }
        cout<<(cnt%3?"NO":"YES")<<endl;
    }
    return 0;
}
/*
12 30 45 3 11
12 0 1 12 1
3 47 0 4 9
*/
/**
#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    int flag=1;
    int a[] = {0,5,10,15,20,25,30,35,40,45,50,55,60};
    int c=0;
    for(int i=min(t1,t2);i<max(t2,t1);i++)
    {
        if(i==h)
            c++;
    }
    for(int i=min(a[t1],a[t2]);i<max(a[t2],a[t1]);i++)
    {
        if(i==m)
            c++;
        if(i==s)
            c++;
    }
    if(c==3 || c==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
**/
