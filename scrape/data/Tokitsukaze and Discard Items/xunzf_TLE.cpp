#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    long long n,m,k;
    long long b[100005]={0};
    cin>>n>>m>>k;
    long long num_y=k,ans=0,cnt=1;
    for(int i=1;i<=m;i++)
        cin>>b[i];
    bool flag=true;
    while(flag){
        long long num_x=0;
        bool flags=true,ff=false;
        while(flags){
            if(b[cnt]<=num_y){
                cnt++;
                ff=true;
                num_x++;
            }
            else{
                if(ff){
                    ans++;
                    num_y+=num_x;
                    num_x=0;
                    ff=false;
                if(cnt>m){
                    flag=false;
                    break;
                    }
                }
                else{
                    flags=false;
                    num_y=num_y+k;
                    if(cnt>m){
                    flag=false;
                    break;
                    }
                }

            }
        }
    }
    cout<<ans;
}