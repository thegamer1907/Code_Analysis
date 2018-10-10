#include<bits/stdc++.h>

using namespace std;

vector<int>prm;
vector<int> acc;
bool sv[20000000];
int lo[20000000];
int cnt[20000000];

void getprim(){
    sv[1]=1;
    for(int i=2;i<10000002;i++){
        if(!sv[i]){
            prm.push_back(i);
            for(int j=2;j*i<10000002;j++)sv[j*i]=1;
        }
    }
}
void capture(){
    bool fnd =0;
    for(int i=0;i<prm.size();i++){
        for(int j=1;j*prm[i]<=10000000;j++)if(lo[prm[i]*j])cnt[prm[i]]+=lo[prm[i]*j];
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    getprim();
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        lo[x]++;
        //cout<<cnt[2]<<endl;
    }
    capture();
    acc.push_back(0);
    //cout<<prm.size()<<endl;
    for(int i=0;i<prm.size();i++)acc.push_back(acc[i]+cnt[prm[i]]);
    /*for(int i=0;i<20;i++)cout<<prm[i]<<" ";
    cout<<endl;
    for(int i=0;i<20;i++)cout<<cnt[prm[i]]<<" ";
    cout<<endl;*/
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int l,r;
        cin>>l>>r;
        int s = lower_bound(prm.begin(),prm.end(),l)-prm.begin();
        int e = upper_bound(prm.begin(),prm.end(),r)-prm.begin();
        //cout<<s
        //cout<<s<<" "<<e<<endl;
        cout<<acc[e]-acc[s]<<endl;
    }
}
