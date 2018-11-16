#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+10;
vector<int>vec;
int n,k,a[maxn],even[maxn],odd[maxn];

int main(){
    scanf("%d%d",&n,&k);
    for (int i=1; i<=n; i++){
        scanf("%d",&a[i]);
        even[i]=even[i-1];
        odd[i] = odd[i-1];
        if(a[i]&1) even[i]++;
        else odd[i]++;
    }
    for (int i=2; i<=n; i++){
        if(even[i-1]==odd[i-1])
            vec.push_back(abs(a[i]-a[i-1]));
    }
    sort(vec.begin(),vec.end());
    int sum=0;
    for (int i=0; i<vec.size(); i++){
        sum+=vec[i];
        if(sum>k) return printf("%d\n",i),0;
    }
    printf("%d\n",(int)vec.size());
    return 0;
}