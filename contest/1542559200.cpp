#include <bits/stdc++.h>
#define M 1000010
#define pb push_back
#define mp make_pair
#define st first
#define nd second
using namespace std;
map<string,bool> m;
int n;
string str[M],s;

int main(){
    ios_base::sync_with_stdio(0);
    cin>>s>>n;
    for(int i=1; i<=n; i++){
        cin>>str[i];
        m[str[i]]=true;
        //cout<<str[i]<<endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            string ss="";
            ss+=str[i][1];
            ss+=str[j][0];
            //cout<<str[i][1]<<endl;
            //cout<<ss<<endl;
            m[ss]=true;
        }
    }
    //cout<<s<<m[s]<<endl;
    puts(m[s]?"YES":"NO");
    return 0;
}
