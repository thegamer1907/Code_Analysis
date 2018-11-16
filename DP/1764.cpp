#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=1e9;
int ab[100010],ba[100010],tmp[100010];
int main()
{
    string s;
    cin>>s;
    int flag=0;
    for(int i=0;i<s.length();i++){
        if(i!=s.length()-1&&s[i]=='A'&&s[i+1]=='B'){
            for(int j=i+2;j<s.length();j++){
                if(j!=s.length()-1&&s[j]=='B'&&s[j+1]=='A'){
                    flag=1;
                    break;
                }
            }
            break;
        }
    }
    for(int i=0;i<s.length();i++){
        if(i!=s.length()-1&&s[i]=='B'&&s[i+1]=='A'){
            for(int j=i+2;j<s.length();j++){
                if(j!=s.length()-1&&s[j]=='A'&&s[j+1]=='B'){
                    flag=1;
                    break;
                }
            }
            break;
        }
    }
    if(flag) printf("YES\n");
    else printf("NO\n");
    return 0;
}
