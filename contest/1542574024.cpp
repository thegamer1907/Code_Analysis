#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
struct node {
    string a;
} str[105];
string b;
int n;
bool vis[105];
bool check(string x1,string x2)
{
    for(int i=0; i<x1.size(); i++) {
        if(x1[i]==x2[0]) {
            int flag=1;
            for(int j=0; j<x2.size(); j++) {
                if(x1[i+j]!=x2[j]) {
                    flag=0;
                    break;
                }
            }
            if(flag==1) {
                return 1;
            }
        }
    }
    return 0;
}
/*void dfs(string x,string y)
{
    if(check(x,y)) {
        cout<<"YES"<<endl;
        exit(0);
    }
	else {
        for(int i=1; i<=n; i++) {
            if(vis[i]==0) {
                vis[i]=1;
                dfs(x+str[i].a,y);
                vis[i]=0;
            }
        }
    }
}*/

int main()
{
    cin>>b;
    cin>>n;
    for(int i=1; i<=n; i++) {
        cin>>str[i].a;
    }
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            string tem=str[i].a+str[j].a;
            if(check(tem,b)) {
                cout<<"YES"<<endl;
                exit(0);
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
