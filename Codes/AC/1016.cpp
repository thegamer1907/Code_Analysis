#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+5;

map<char,int> m;
int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int mx=0;
    for (int i=0;i<2;i++){
        int l=0,cur=0,a=0,b=0;
        for (int j=0;j<n;j++){
            if (s[j]=='a'+i) ++a;
            else ++b;
            if (b>k){
                if (s[l]!='a'+i) --b;
                ++l;
            }else ++cur;
        }
        mx=max(mx,cur);
    }
    printf("%d\n",mx);
    return 0;
}
