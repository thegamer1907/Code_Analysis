#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define FOR(a,n) for(int i=a;i<n;++i)
#define arrin(n) for(int i=0; i < n; ++i) cin>>arr[i];
#define arrout(n) for(int i=0; i < n; ++i) cout<<arr[i]<<" ";cout<<nl;
#define mod 1000000007
#define pb push_back
typedef long long ll;

//there are two ways of reaching the points: clockwise or anti-clockwise. 

int main()
{
    fastio();
    double h, m, s, t1, t2, ang1, ang2;
    int flag=0;
    cin>>h>>m>>s>>t1>>t2;    //sec is not been changed because it will represent the same time on clock as 45 sec is same as 45 mins on clock
    m+=s/60;                 //shows minutes representing in the clock
    h=h*5+m/60;              //multiplied h by 5 because 5 mins on clock represents 1'O clock;15 mins represent 3'O clock
    t1*=5;
    t2*=5;
    if(t1>t2)
        swap(t1, t2);
    if(s>=t1&&s<=t2)
        flag++;
    if(m>=t1&&m<=t2)
        flag++;
    if(h>=t1&&h<=t2)
        flag++;
    if(flag==0||flag==3)    //flag=0 means that in clockwise movemnet from t1 to t2, there is no hand. 
        cout<<"YES"<<endl;  // flag=3 means that all the obstructions of hands are there in btw t1 and t2 and other half is empty
    else
        cout<<"NO"<<endl;
    return 0;
}