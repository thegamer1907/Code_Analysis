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
    string pass;
    cin>>pass;
    int n;
    read(n);
    int e,f,g;
    e=f=g=0;
    for(int i=0;i<n;i++)
    {
        string key;
        cin>>key;
        if(key.compare(pass)==0)
            e=1;
        if(pass[0]==key[1])
            f=1;
        if(pass[1]==key[0])
            g=1;
    }
    if(e==1||(f&&g))
        cout<<"YES";
    else cout<<"NO";
    cout<<endl;
    return 0;
}
