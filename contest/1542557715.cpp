#include<bits/stdc++.h>
using namespace std;
int main(){
    char c1,c2;
    cin>>c1>>c2;
    int n;
    cin>>n;
    char a[n][2];
    for(int i=0;i<n;i++)
    cin>>a[i][0]>>a[i][1];
    int f=0;
    for(int i=0;i<n;i++){
        if((a[i][0]==c2 && a[i][1]==c1) || (a[i][0]==c1 && a[i][1]==c2)){
            f=1;
            break;
        }
        for(int j=i+1;j<n;j++){
            if((a[i][0]==c2 && a[j][1]==c1) || (a[i][1]==c1 && a[j][0]==c2)){
                f=1;
                break;
            }
        }
    }
    if(f==1)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}