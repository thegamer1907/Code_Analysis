#include <bits/stdc++.h>
using namespace std;
 
#define M 1000000007
 
#define mp make_pair
#define pb push_back
#define tri pair<int, pair<int, int> >
#define TRI(a,b,c) (make_pair(a,make_pair(b,c)))
 
typedef long long ll;
typedef long double ld;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    set<char> st;
    string s; getline(cin,s);
    for(int i=0; i<s.size(); i++)
    {
    	if(s[i]!=' ' && s[i]!='\{' && s[i]!='\}' && s[i]!='\,')st.insert(s[i]);
    }
    cout<<st.size();
    return 0;
}