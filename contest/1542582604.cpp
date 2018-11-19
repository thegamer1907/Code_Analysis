#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <set>

using namespace std;

set <string> se,see;

int main()
{
    int n,k;
    cin>>n>>k;
    string s="";
    int Max = 0;
    for(int i=0;i<n;i++){
        s = "";
        int ans = 0;
        for(int j=0;j<k;j++){
            int d;
            scanf("%d",&d);
            if(d == 0) ans++;
            char ch = d + '0';
            s += ch;
        }
        see.insert(s);
        Max = max(Max,ans);
        ans = 0;
    }
    if(Max==k){
        puts("YES");
        return 0;
    }
    for(string ss:see){
        int h=0;
        for(int i=0;i<k;i++){
            if(ss[i]=='0') h++;
        }
        if(h==Max){
            se.insert(ss);
        }
    }
    int a[4];
    for(string s1:se){
        for(string s2:see){
            if(s1!=s2){
                for(int i=0;i<k;i++) a[i]=0;
                for(int i=0;i<k;i++){
                    a[i]+=(s1[i]-'0');
                    a[i]+=(s2[i]-'0');
                }
                int h=0;
                for(int i=0;i<k;i++){
                    if(a[i]<=1) h++;
                }
                if(h==k){
                    puts("YES");
                    return 0;
                }

            }
        }
    }
    puts("NO");
    return 0;
}
