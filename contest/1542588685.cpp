#include <bits/stdc++.h>
using namespace std;

#define PB push_back
#define MP  make_pair
#define FOR(init,num,inc) for(int i=init; i<num;i=i+inc)
#define N "\n"
#define VII vector<int> :: it
#define VILLI   vector<long long int> :: iterator
#define my_input(n) for(int i=0,a;i<n;i++) {cin>>a; v.PB(a);}
#define sz size()

typedef int I;
typedef long long int LLI;
typedef vector<int> VI;
typedef vector<long long  int > VLLI;
typedef vector<string> VS;
typedef set<int> SI;
typedef set<long long int> SLLI;
typedef set<string> SS;

int main()
{
string s,s2;

map< char, int > m1, m2;
cin>>s;
int n;
cin>>n;
for(int i=0; i< n; i++)
{
    cin>>s2;
    if (s2==s) {cout<<"YES"; return 0;}
    m1.insert(MP(s2[1], 1));
    m2.insert(MP(s2[0], 1));

}


int flag=0;
auto it=m1.begin();
auto it2=m2.begin();
it = m1.find(s[0]);
if (it==m1.end())  {cout<<"NO"; return 0;}
it2=m2.find(s[1]);
if (it2!=m2.end()) {cout<<"YES"; return 0;}
else {cout<<"NO"; return 0;}


}
