#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i, j, k, l, n, a, b, r, c, ara[257];

    cin>>n>>a>>b;
    if(a>b)
        swap(a, b);
    r = log2(n);
    for(i=1;i<=n;i++)
        ara[i] = i;
    for(i=1;i<=r-1;i++){
        c = 0;
        for(j=1,k=1;j<=n;j+=2,k++){
            if(ara[j]==a && ara[j+1]==b){
                c = 1;
                break;
            }
            else if(ara[j]==a || ara[j+1]==a){
                ara[k] = a;
            }
            else if(ara[j]==b || ara[j+1]==b){
                ara[k] = b;
            }
            else
                ara[k] = ara[j];
        }
        n /= 2;
        if(c)break;
    }
    if(i==r)
        cout<<"Final!"<<endl;
    else
        cout<<i<<endl;


    return 0;
}