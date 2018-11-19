#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool in (int x,int y,int z)
{
    if(x<z && x>y) return 1;
    return 0;
}
int main()
{
    int al =3600*12;
    int h,m,s,t1,t2; int arr[3];
    cin>>h>>m>>s>>t1>>t2;t1=(t1*3600)%al;t2=(t2*3600)%al;
    arr[0]=(h*3600+ m*60+s)%al;arr[1]=(m*al/60+ s*12)%al;arr[2]=(s*al/60)%al;
    sort(arr,arr+3);
    if(in(t1,arr[0],arr[1]) && in(t2,arr[0],arr[1])) {cout<<"YES"<<endl;return 0;}
    if(in(t1,arr[1],arr[2]) && in(t2,arr[1],arr[2])) {cout<<"YES"<<endl;return 0;}
    if((in(t1,-1,arr[0])|| in(t1,arr[2],al+1) ) && (in(t2,-1,arr[0])|| in(t2,arr[2],al+1))) {cout<<"YES"<<endl;return 0;}
    cout<<"NO"<<endl;
    return 0;
}
