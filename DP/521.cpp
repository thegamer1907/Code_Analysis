#include<iostream>
#include<bits/stdc++.h>
#define sorrt(v) sort(v.begin(),v.end())
#define rsorrt(v) sort(v.rbegin(),v.rend())
#define fr(i,x,n) for(int i=x;i<n;i++)
#define frr(i,x,n) for(int i=x;i>=n;i--)
#define ll long long
using namespace std;
void Doaa()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int isprfect(int x)
{
     int sum = 0;
    fr(i,1,x+1)
	if (x % i== 0)
            sum++;

    return sum ;

}
int r[4005]={-1},a,b,c;
int DP(int n)
{
     if(n==0)
        return 0;
        if(n<0)
            return -1000000;
    if(r[n]!=-1)
        return r[n];
    return r[n]=max(max(DP(n-a),DP(n-b)),DP(n-c))+1;
}
bool solve(string a,string b)
{
    //cout<<a<<" "<<b<<endl;
     if(a==b&&a.size()!=0)
        return true;
    if(a.size()%2)
            return false;
    string a1=a.substr(0,a.size()/2);
    string a2=a.substr((a.size()/2),a.size());
    string b1=b.substr(0,b.size()/2);
    string b2=b.substr(b.size()/2,b.size());
    return ((solve(a1,b2)&&solve(a2,b1))||(solve(a1,b1)&&solve(a2,b2)));
}

int main()
{
    Doaa();
    string s;
    int count=0,arr[100005]={0},l,r,t;
    cin>>s;
    fr(i,1,s.size())
    {
        if(s[i]==s[i-1])count++;
        arr[i]=count;
    }
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        cout<<arr[r-1]-arr[l-1]<<endl;
    }
    return 0;
}
