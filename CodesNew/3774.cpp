# include <iostream>
# include <algorithm>
const int maxn=100005;
int main(){
    using namespace std;
    int n, m;
    cin >> n >> m;
    int a[maxn], sum=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a, a+n);
    int maxx=a[n-1]+m;
    int ans=0;
    for(int i=0; i<m; i++){
        a[0]++;
        sort(a, a+n);
    }
    ans=a[n-1];
    cout << ans <<" "<< maxx<<endl;
    return 0;
}
