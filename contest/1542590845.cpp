/*
    @@@@@      X     X       @@@@@
   @     @		X   X       @     @
  @  @@@@ @ 	 X X       @  @@@@ @
 @  @   @  @      X       @  @   @  @
  @  @@@ @@      X X       @  @@@ @@
   @            X   X       @
    @@@@@      X     X       @@@@@
*/

//Tayyorgarchilik
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
#define AXA true
#define ishkal_tugadi 0
#define ishkal_boshlandi main
#define PB push_back
#define MP make_pair
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) (int((x.size())))
#define pii pair<int,int>
#define ft first
#define sd second
#define vi vector <int>
#define si set <int>
#define db(x) cerr<<#x<<" = "<<x<<endl;
#define R(i,a,n) for (int i=a; i<=n; i++)
#define RALL(i,a) for (auto i:a)
#define L(i,n,a) for (int i=n; i>=a; i--)
ll gcd(ll a, ll b){
	return b?gcd(b,a%b):a;
}
ll lcm(ll a, ll b){
	return a*(b/gcd(a,b));
}
string sum(string a, string b){
    string ans="";
    R(i,0,max(SZ(a),SZ(b)))ans+='0';
	reverse(ALL(a));
    reverse(ALL(b));
    while (SZ(a)>SZ(b))b+='0';
    while (SZ(a)<SZ(b))a+='0';
    R(i,0,SZ(a)-1){
        int temp=int(ans[i]-'0');
        temp+=(a[i]-'0');
        temp+=(b[i]-'0');
        int j=0;
        while (temp>0){
            ans[i+j]=char((temp%10)+'0');
            temp/=10;
            j++;
        }
    }
    reverse (ALL(ans));
    while (ans[0]=='0')ans.erase(0,1);
    return ans;
}
string razn(string a, string b){
    string ans="";
    R(i,0,max(SZ(a),SZ(b)))ans+='0';
	reverse(ALL(a));
    reverse(ALL(b));
    while (SZ(a)>SZ(b))b+='0';
    while (SZ(a)<SZ(b))a+='0';
    R(i,0,SZ(a)-1){
        int temp=int(ans[i]-'0');
        temp+=(a[i]-'0');
        temp+=(b[i]-'0');
        int j=0;
        while (temp>0){
            ans[i+j]=char((temp%10)+'0');
            temp/=10;
            j++;
        }
    }
    reverse (ALL(ans));
    while (ans[0]=='0')ans.erase(0,1);
    return ans;
}
bool palindrom(string s){
	string ss="";
	R(i,0,s.size()-1)ss=s[i]+ss;
	return ss==s;
}



int ishkal_boshlandi(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
    string s;
    cin>>s;
    int n;
    cin>>n;
    //set<char> s1,s2;
    bool t1=false,t2=false;
    R(i,0,n-1){
        string temp;
        cin>>temp;
        if (temp==s){
            cout<<"YES";
            return 0;
        }
        //else s1.insert(temp[0]),s2.insert(temp[2]);
        else {
            if (temp[0]==s[1])t1=true;
            if (temp[1]==s[0])t2=true;
        }
    }
    if (t1&&t2){
        cout<<"YES";
        return 0;
    }else cout<<"NO";
	return ishkal_tugadi;
}
