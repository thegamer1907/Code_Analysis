#include <bits/stdc++.h>

using namespace std;

bool f[(int)1e6+5];
vector<int> prime;
void sieve(){
    /** nlog(log(n)) **/
    f[0]=f[1]=1;
    for(int i=2;i<1e6+5;i++){
        if(f[i])continue;
        prime.push_back(i);
        for(long long j=1ll*i*i;j<1e6+5;j+=i)f[j]=1;
    }
}

vector<int> factor;
void getFactor(int n){
    for(int i=2; i<=n/i; i++){
        while(n%i==0){
            factor.push_back(i);
            n/=i;
        }
    }if(n!=1)factor.push_back(n);
}

long long GCD(long long a,long long b){
    return b ? GCD(b,a%b) : a;
}

long long LCM(long long a,long long b){
    return a/GCD(a,b)*b;
}

long long power(long long a,long long b){
    long long ret=1;
    for(int i=1;i<=b;i++)ret*=a;
    return ret;
}

int MaxSubarray_Sum(int arr[],int n){
    int best=0,sum=0;
    for(int i=0;i<n;i++){
        sum=max(arr[i],arr[i]+sum);
        if(arr[i]==-1)sum=0;
        best=max(best,sum);
    }return best;
}


int main(){

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //ios_base::sync_with_stdio(false); //cin.tie(0);

    string str,s; cin>>str;
    s=str;
    reverse(s.begin(),s.end());
    int n; cin>>n;
    string arr[n];
    bool flag=0;
    bool ans1=0,ans2=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==str || arr[i]==s)flag=1;
        else if(arr[i][1]==str[0])ans1=1;
        else if(arr[i][0]==str[1])ans2=1;
    }
    puts( (flag) || (ans1&&ans2) ? "YES":"NO");
    return 0;
}
