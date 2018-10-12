#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
typedef long long ll;
map<string,int>mp;
int main()
{
    int n,m,num1=0,num2=0,num3=0,i;
    cin>>n>>m;
    string s;
    for(i=0;i<n;i++){
        cin>>s;
        num1++;
        mp[s]=1;
    }
    for(i=0;i<m;i++){
        cin>>s;
        if(mp[s]==0){
            num2++;
        }
        else{
            num2++;
            num3++;
        }
    }
    if(num3%2==1){
        num2--;
    }
    //printf("%d %d",num1,num2);
    if(num1>num2){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
