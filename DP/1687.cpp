#include <bits/stdc++.h>
using namespace std;
    
#define fastIO ios::sync_with_stdio(false);	cin.tie(NULL); cout.tie(NULL);
#define asc(s) sort(s.begin(),s.end())
#define des(s) sort(s.rbegin(),s.rend())
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define rev(v) reverse(v.begin(), v.end())
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define precision(x,p) fixed<<setprecision(p)<<x
#define mod 1000000007
#define PI 3.14159265358979
typedef long long ll;
    
vector<string> split(string s)
{
    istringstream buf(s);
    istream_iterator<string>beg(buf), end;    
    vector<string>list(beg, end);
    return list;
}
    
    
bool isvowel(char c)
{
    string s = "aeiou";
    if(find(s.begin(),s.end(), c) != s.end()) return true;
    return false; 
}

bool cmp(pair <int,int> &a, pair <int,int> &b)
{
    return a.second > b.second || (a.second==b.second && a.first>b.first);
}



void solve()
{
    string s;
    cin>>s;
    vector<int>mp1,mp2;
    for(int i =0 ; i< s.size() ; i++){
        if(s.substr(i,2)=="AB"){
            mp1.push_back(i);
        }
        if(s.substr(i,2)=="BA"){
            mp2.push_back(i);
        }
    }

    if(mp1.size()>0 && mp2.size() >0){
        if(abs(mp2[mp2.size()-1]-mp1[0])>1||abs(mp1[mp1.size()-1]-mp2[0])>1){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;

}

int main()
{

    fastIO

    int t=1;
    // cin>>t;
    
    for(int test_case=1;test_case<=t;test_case++)
    {
        solve();
    }
        return 0;
    
}   