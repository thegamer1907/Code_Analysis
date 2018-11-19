/*
#####################################################
# I will win.. maybe not immediately but definitely #
#####################################################
*/

#include <bits/stdc++.h>
using namespace std;

//save time
typedef long long ll;

//for sorting
#define all(a) a.begin(),a.end()

//Constants
#define PI   3.141592653593
#define MOD  1000000007LL
#define EPS  0.000000001

//loops
#define REP(i,n) 	for(int i=0;i<(n);++i)
#define FOR(i,a,b) 	for(int i=(a);i<(b);++i)
#define DFOR(i,a,b) for(int i=(a);i>=(b);--i)

//vectors
#define vi vector<int>
#define vll vector<ll>
#define vii vector<pair<int,int> >
#define pb 	push_back

//pairs
#define pi pair<int,int>
#define pll pair<ll,ll>
#define mp make_pair
#define F first
#define S second

//fast I/O
#ifndef _WIN32
#define getchar getchar_unlocked
#define putchar putchar_unlocked
#endif
#define gc getchar
#define pc putchar
#define scan getFoo

//If using cin and cout
#define IOS ios::sync_with_stdio(false)
#define TIE cin.tie(NULL)

//queue
#define qi queue<int>
#define PQ priority_queue

//general
#define E empty()

//Input methods
template <typename T>
void getFoo(T &x){
    x=0;
    register char c=gc();
    for(;c<48 || c>57;c=gc());
    for(;c>47 && c<58;c=gc())
        x=(x<<1)+(x<<3)+c-48;
}

template <typename T1,typename T2>
void getFoo(T1 &x,T2 &y){
    getFoo(x);
    getFoo(y);
}

template <typename T1,typename T2,typename T3>
void getFoo(T1 &x,T2 &y,T3 &z){
    getFoo(x);
    getFoo(y);
    getFoo(z);
}
//Declare all variables and methods needed between this comment and the next one(OCD lol)

//Code goes here !!
int main(){
    IOS;
    TIE;
    double arr[5];
    REP(i,5)
        cin>>arr[i];
    arr[3]*=30;
    arr[4]*=30;
    arr[0]+=(arr[2]/3600.0 + arr[1]/60.0);
    arr[1]+=arr[2]/60.0;
    arr[0]*=30;
    arr[1]*=6;
    arr[2]*=6;
    double start=arr[3],end=arr[4];
    sort(arr,arr+5);
    REP(i,5)
        if((abs(arr[i]-start)<EPS && abs(arr[(i+1)%5]-end)<EPS)|| (abs(arr[i]-end)<EPS && abs(arr[(i+1)%5]-start)<EPS)){
            cout<<"YES\n";
            return 0;
        }
    cout<<"NO\n";
    return 0;
}
