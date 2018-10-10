#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define INF 0x7fffffff
#define LL long long 
vector<int> a;
vector<double> b;
int main(){
    int n,l;
    int x;
    cin>>n>>l;
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    b.push_back(a[0]);
    b.push_back(l-a[n-1]);
    for(int i=1;i<n;i++){
        b.push_back((a[i]-a[i-1])/2.0);
    }
    sort(b.begin(),b.end());
    printf("%.10lf\n",b[n]);
    return 0;
}