#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
using namespace std;
string a[105];
string s;
int main()
{
    cin>>s;
    int n;
    int flag=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==s) flag++;
    }
    int num=0,numm=0;
    for(int i=0;i<n;i++){
        if(a[i][0]==s[1]){
            num++;
        }
        if(a[i][1]==s[0]){
            numm++;
        }
    }
    if(num&&numm) flag++;
    if(flag) printf("YES\n");
    else printf("NO\n");
    return 0;
}
