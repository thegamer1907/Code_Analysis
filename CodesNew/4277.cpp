#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn = 5e5+7;
typedef long long ll;
string s[maxn],a;
int main()
{
//    freopen("in.txt","r",stdin);
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    string::iterator it;
    for(int i=n-1;i>=1;i--){
        int siz=s[i].size();
        it=s[i].begin();
        for(int j=0;j<siz;it++,j++){
            if(s[i][j]<s[i+1][j]){
                break;
            }
            else if(s[i][j]>s[i+1][j]){
                s[i].erase(it,s[i].end());
                break;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<s[i]<<endl;
    }

}
