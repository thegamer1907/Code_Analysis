#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mp make_pair
#define ff first
#define ss second

using namespace std;

const int N=1e6+7;

int n,k,teams[N][4],x,inter=0,a,b,c,d,e,f,s1,s2,s3,s4,t1,t2,t3,t4;

int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++){
        for(int t=0;t<k&&scanf("%d",&teams[i][t]);t++);
    }
    if(k==1){
        for(int i=0;i<n;i++){
            if(!teams[i][0])inter=1;
        }
    }
    else if(k==2){
        for(int i=0;i<n;i++){
            if(!teams[i][0])a=1;
            if(!teams[i][1])b=1;
        }
        inter=a&b;
    }
    else if(k==3){
        for(int i=0;i<n;i++){
            if(!teams[i][0]&&!teams[i][1])a=1;
            if(!teams[i][1]&&!teams[i][2])b=1;
            if(!teams[i][0]&&!teams[i][2])c=1;
            if(!teams[i][0])s1=1;
            if(!teams[i][1])s2=1;
            if(!teams[i][2])s3=1;
        }
        inter=(s1&&b)||(s2&&c)||(s3&&a);
    }
    else{
        for(int i=0;i<n;i++){
            if(!teams[i][0]&&!teams[i][1]&&!teams[i][2])t1=1;
            if(!teams[i][0]&&!teams[i][1]&&!teams[i][3])t2=1;
            if(!teams[i][0]&&!teams[i][2]&&!teams[i][3])t3=1;
            if(!teams[i][1]&&!teams[i][2]&&!teams[i][3])t4=1;
            if(!teams[i][0]&&!teams[i][1])a=1;
            if(!teams[i][0]&&!teams[i][2])b=1;
            if(!teams[i][0]&&!teams[i][3])c=1;
            if(!teams[i][1]&&!teams[i][2])d=1;
            if(!teams[i][1]&&!teams[i][3])e=1;
            if(!teams[i][2]&&!teams[i][3])f=1;
            if(!teams[i][0])s1=1;
            if(!teams[i][1])s2=1;
            if(!teams[i][2])s3=1;
            if(!teams[i][3])s4=1;
        }
        inter=(a&&f)||(b&&e)||(c&&d)||(t1&&s4)||(t2&&s3)||(t3&&s2)||(t4&&s1);

    }
    if(inter)cout<<"YES";
    else cout<<"NO";
    return 0;
}
