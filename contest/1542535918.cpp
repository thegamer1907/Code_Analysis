#include<bits/stdc++.h>
using namespace std;

#define	FastRead                    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll                          long long
#define ull                         unsigned long long
#define SP(n)                       cout << setprecision(n)
#define PI                          acos(-1.0)
#define For(i,a,b)                  for(int i=a;i<b;i++)
#define Rof(i,a,b)                  for(int i=b;i>=a;i--)
#define Read()                      freopen("input.txt","r",stdin);
#define pb                          push_back
#define debug                       cout << "check" << endl;
#define min3(a,b,c)                 min(a,min(b,c))
#define min4(a,b,c,d)               min(a,min(b,min(c,d)))
#define max3(a,b,c)                 max(a,max(b,c))
#define max4(a,b,c,d)               max(a,max(b,max(c,d)))
#define mem(arr,n)                  memset(arr,n,sizeof(arr))

int main()
{
    FastRead
    string str,s;
    cin >> str;
    int n,last=0,first=0,flag=0,both=0;
    cin >> n;
    while(n--){
        cin >> s;
        if(s == str) flag=1;
        if(s[1] == str[0]) first=1;
        if(s[0] == str[1]) last=1;
        if(s[0] == str[1] && s[1] == str[0]) both=1;
    }
    if(flag || both){
        cout << "YES";
    }
    else if(first && last) cout << "YES";
    else cout << "NO";
    return 0;
}

