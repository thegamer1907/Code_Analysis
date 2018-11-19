#include<bits/stdc++.h>
using namespace std;
#define con continue
#define bk break
#define LL long long
#define db double
#define pt cout<<'\n'
#define ms(a, b) memset((a), (b), sizeof(a))
#define mp make_pair
#define endl '\n'
int inf=2147483647;const long long ll =9223372036854775807,ninf=1000000000;const double eps = 1e-6; const long long nll =1000000000000000000;
#define sz size()
#define len(X) strlen(X)
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ULL unsigned long long
#define de cout<<"test"<<endl;
#define st system("pause");
#define F first
#define S second
class SlimeXSlimesCity
{
    public:
int merge(vector <int> population)
{

}
};

int main()
{
 int a,b;
 while(cin>>a>>b){
    int num[16]={};
    int cnt[4]={};
    for(int i=0;i<a;i++){
            int y=1;
    int now=0;
        for(int j=0;j<b;j++){
            int x;
            cin>>x;
            now+=y*x;
            cnt[j]+=x;
            y*=2;
        }
        num[now]++;
    }

    int ok=0;
    for(int i=a;i>=1;i--){
        int h=i/2;
        int v;
        if(i%2){
            v=i/2+1;
        }
        else{
            v=i/2;
        }
        int no=0;
        int y=1;
        int now=0;

        int A[4]={};
        for(int j=0;j<4;j++){
            if(cnt[j]>h){
                no=1;
                now+=y;
            }
            if(cnt[j]>=v)
                A[j]=1;

            y*=2;
        }
        int best=0;
        int maxr=0;
        for(int k=15;k>=1;k--){
          if(num[k]>0){
                int t=0;
            int r=k;
            int f=0;
            while(r){
            if(A[f]&&r%2){
                t++;
                }
                r/=2;
                f++;
            }
            if(t>maxr){
                maxr=t;
                best=k;
            }
          }
        }
        num[best]--;
           int q=best;
           int w=0;
           while(q){
            if(q%2)
            cnt[w]--;

            q/=2;
            w++;
           }

        if(!no){
            ok=1;
        }
    }

    if(ok){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
 }

    return 0;
}
