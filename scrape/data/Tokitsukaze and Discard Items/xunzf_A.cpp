#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    long long n,m,k;
    long long b[100005]={0};
    cin>>n>>m>>k;
    long long ans=0,cnt=1;
    for(int i=1;i<=m;i++)
        cin>>b[i];
    bool flag=true;
    long long num_x,bl=1,num_y=(b[cnt]-1)/k;
    while(flag){
        bool flags=true,ff=false;
        long long num_z=0;
        while(flags){
            num_x=(b[cnt]-bl)/k;
            if(num_x==num_y){
                cnt++;
                num_z++;
                ff=true;
            }
            else{
                if(ff){
                    ans++;
                    bl+=num_z;
                    num_z=0;
                    ff=false;
                    if(cnt>m){
                        flag=false;
                        break;
                    }
                    continue;
                }
                else{
                    flags=false;
                    if(cnt>m){
                    flag=false;
                    break;
                    }
                    num_y=(b[cnt]-bl)/k;
                }

            }
        }
    }
    cout<<ans;
    return 0;
}