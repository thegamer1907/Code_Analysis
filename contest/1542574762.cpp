#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;
int sm[20];

int pst, k;

bool fb(false);
int aa[4];
int bbb[30];
void dfs(int n,int num){
    if(n==0||fb){
        if(sm[0])
            fb=1;
        
        //for(int i=0;i<num;++i)
        //     cerr<<bbb[i];
        //if(num)
        //    cerr<<endl;
        return;
    }
   
    if(sm[n]>0){        
        for(int i=0;i<k;++i)
        {
            if(n&(1<<i))
                aa[i]++;
        }
        bbb[num]=n;
        int tn=num+1;
        bool t=true;
        for(int i=0;i<k;++i)
            if(aa[i]>tn/2){
                t=false;
                //cerr<<aa[i]<<"-"<<n<<endl;
                break;
            }
        fb=t;
        //if(fb)
        //   return;
        dfs(n-1,tn);
        for(int i=0;i<k;++i)
        {
            if(n&(1<<i))
                --aa[i];    
        }
    }
    dfs(n-1,num);
}
int main() {
    
    cin >> pst>>k;
    int bt = 1;
    for (int i = 0; i < pst; ++i) {
        int t = 0;
        for (int j = 0; j < k; ++j) {
            cin>>bt;
            t *= 2;
            t += bt;
        }
        sm[t]=1;
       // cerr<<t<<endl;
    }
    
    dfs((1<<k)-1,0);
    if (fb)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}