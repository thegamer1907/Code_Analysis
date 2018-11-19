/*
Author    : MANISH RATHI
Institute : NIT KURUKSHETRA

*******************************
Don't Stop when you are tired  *
Stop When you are Done         *
******************************* 
*/

#include<bits/stdc++.h>
using namespace std;
#define MAX 1000007
#define mode 1000000007
#define ll long long
#define ii pair<int,int>
#define vi vector<int>
#define vii vector< ii >
#define vvi vector< vi >
#define vvii vector< vii >
#define mp make_pair
#define pb push_back
#define read(x) scanf("%d",&x)
#define print(x) printf("%d\n",x)
#define read2(x,y) scanf("%d%d",&x,&y);
#define print2(x,y) printf("%d %d\n",x,y);
#define read_s(x) scanf("%s",x);
#define print_s(x) printf("%s",x);
#define rep(i,a,b) for(i=a;i<=b;i++)
#define tr(container,it) \
	for(typeof(container.begin()) it= container.begin();it!=container.end();it++)

int main()
{
	//freopen("A-large.in", "r", stdin);
	//freopen("outout1b.txt", "w", stdout);
    int h,m,s,a,b,c,d;
    cin>>h>>m>>s;
    cin>>a>>b;
    
    m= m/5;
    s= s/5;
    int w1,w2;
    w1=w2=0;
    if(b>a)
    {
        if(h>=a&&h<b)
            w2=1;
        else w1=1;
        if(m>=a&&m<b)
            w2=1;
        else w1=1;
        if(s>=a&&s<b)
            w2=1;
        else w1=1;
    }
    else 
    {
        if(h<a&&h>=b)
            w2=1;
        else w1=1;
        if(m<a&&m>=b)
            w2=1;
        else w1=1;
        if(s<a&&s>=b)
            w2=1;
        else w1=1;
    }
    if(w1==0||w2==0)
        cout<<"YES";
    else cout<<"NO";
    cout<<endl;
    return 0;
}
