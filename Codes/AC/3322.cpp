#include <bits/stdc++.h>
#define F first
#define S second
typedef long long ll;
using namespace std;


int n;
int a[100010];

int main()
{
    cin >>n;
    for (int i=0;i<n;i++){
        cin >>a[i];
    }
    pair<int,int> mn={1e9,1e9};
    for (int i=0;i<n;i++){
        if (a[i]-i<=0){
            mn=min(mn,{0,i});
        //cout <<a[i]<<" :: "<<i<<endl;
            //cout <<"ASD";
            continue;
        }
        if ((a[i]-i)%n)a[i]+=n-((a[i]-i)%n);
        mn=min(mn,{a[i],i});
    }
    //cout <<mn.F<<endl;
    cout <<mn.S+1<<endl;
    return 0;
}