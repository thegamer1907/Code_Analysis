#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int n;
string a;
char b[105][5];
int main(){
    cin>>a;
    cin>>n;
    for (int i=0; i<n; i++) {
        scanf("%s",b[i]);
    }
    int ans1=0,ans2=0;
    bool flag=false;
    for (int i=0; i<n; i++) {
        if (b[i][0]==a[0]&&b[i][1]==a[1]) {
            flag=true;
        }
        if (b[i][1]==a[0]) {
            ans1++;
        }
    }
    for (int i=0; i<n; i++) {
        if (b[i][0]==a[1]) {
            ans2++;
        }
    }
    if (ans1&&ans2) {
        flag=true;
    
    }
    if (flag) {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}