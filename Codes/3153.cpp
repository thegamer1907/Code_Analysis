#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define LL long long

mt19937 mr((ull)time(0));
#define e3 (mr()%1000)
#define e6 e3*e3
#define e9 e3*e3*e3

#define op1 for(int i=0;i<10;i++){freopen(in[i],"r",stdin);freopen(out[i],"w",stdout);solve();}
#define op2 solve();

char in[10][10]= {"1.in","2.in","3.in","4.in","5.in","6.in","7.in","8.in","9.in","10.in"};
char out[10][10]= {"1.out","2.out","3.out","4.out","5.out","6.out","7.out","8.out","9.out","10.out"};

#define inf 0x3f3f3f3f

int a[100005];
int b[100005];
void solve()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int t=a[i]/n;
        b[i]=t*n;
        a[i]%=n;
        if((a[i]-i)>0){
            b[i]+=n+i;
        }else {
            b[i]+=i;
        }
    }
    int t=1e9+7,r=0;
    for(int i=0;i<n;i++){
        if(b[i]<t){
            t=b[i];
            r=i+1;
        }
    }
    printf("%d\n",r);
}
int main()
{
    op2
}
