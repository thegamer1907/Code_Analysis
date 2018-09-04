#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct st{
    int num,pos;
}a[200005];
bool cmp(st a,st b){
    if(a.num==b.num)return a.pos<b.pos;
    return a.num<b.num;
}
int n;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){scanf("%d",&a[i].num);a[i].pos=i;}
    sort(a,a+n,cmp);
    int p,ans=1E9+10,k,use;
    for(int i=0;i<n;i++){
        k=a[i].pos;
        p=a[i].num%n;
        int t=p>k?n+k-p+a[i].num:k-p+a[i].num;
        if(ans>t){
            ans=t;
            use=a[i].pos+1;
        }

    }
    cout<<use<<endl;
	return 0;
}
