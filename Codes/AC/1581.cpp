#include <bits/stdc++.h>
using namespace std;

struct node{
    long long base;
    long long index;
};
int n;
long long S;
int l,r,ans;

bool fun(node a,node b){
    return (a.base+ans*a.index)<(b.base+ans*b.index);
}

int main() {
    cin >> n >> S;
    node arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i].base;
        arr[i].index = i+1;
    }
    long long temp[n];
    long long temp1[n];
    long long temp2[n];
    long long cost;
    l=0;
    r=n;
    ans = -1;
    int ans1;
    while(l<=r){
        //cout << l << " " << r << endl;
        int purana  = ans;
        ans  = (l+r+1)/2;
        if(ans == purana){
            break;
        }
        if(ans == 0){
            ans1  = 0;
            cost  = 0;
            break;
        }
        sort(arr,arr+n,fun);
        temp[0] = arr[0].base + arr[0].index;
        temp1[0] = arr[0].base;
        temp2[0] = arr[0].index;
        for(int i =1;i<n;i++){
            temp1[i] = temp1[i-1] + arr[i].base;
            temp2[i] = temp2[i-1] + arr[i].index;
            temp[i] = temp1[i] + (i+1)*temp2[i];
        }
        long long  cost1 = temp[ans-1];
        if(cost1>S){
            r = ans-1;
        }
        else if(cost1<=S){
            l = ans+1;
            cost = cost1;
            ans1 = ans;
            
        }
    }
    cout << ans1 << " " << cost << endl;
	// your code goes here
	return 0;
}
