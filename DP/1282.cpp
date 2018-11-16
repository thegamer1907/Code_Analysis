#include <bits/stdc++.h>
using namespace std;


int main(){
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


    int n;

    cin>>n;

    vector<int> a(n);

    int f=0,ma=0,ed=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for (int i=0;i<n;i++){
        if (a[i]==0){
            f=1;
            int o=1;
            for(int j=i+1;j<n;j++){
                ma=max(ma,o);
                if (a[j]==1){
                    o--;
                }
                else{
                    o++;

                }
            }
            ma=max(ma,o);
        }
        else{
            ed++;
        }
    }

    if (f==0){
        cout<<n-1<<endl;
        return 0;
    }
    else{
    cout<<ma+ed<<endl;
    }
    return 0;
    }
