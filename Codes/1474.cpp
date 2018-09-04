#include <iostream>
#include <algorithm>
using namespace std;
const int maxn=1e5+10;
int N,S;
int t=1;
struct node{
    int a;
    int k;
    friend bool operator < (const node& p,const node& q){
        return (q.a+q.k*t)>(p.a+p.k*t);
    }
}a[maxn];

bool cmp(const node& a,const node& b){
    return (a.a+a.k*t)<(b.a+b.k*t);
}
int main(){
    cin>>N>>S;
    for(int cnt=1;cnt<=N;cnt++){
        cin>>a[cnt].a;
        a[cnt].k=cnt;
    }
    
    int i;
    bool flag=1;
    long long int sum=0;
    long long int con=0;
    long long int pre=0;
    long long int ansi=0;
    long long int ans=0;
    for(i=1;i<=N;i++){
        t=i;
        sum=0;con=0;
        nth_element(a+1,a+i+1,a+N+1);
        for(int j=1;j<=i;j++){
            sum+=a[j].a;
            con+=a[j].k;
        }
        if(sum+i*con>S){
            if(pre>ans){
                ansi=i-1;
                ans=pre;
            }
            flag=0;
            break;
        }
        else pre=sum+i*con;
    }
    if(flag)cout<<N<<" "<<pre<<endl;
    else cout<<ansi<<" "<<ans<<endl;
}