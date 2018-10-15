#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
    return a.first <= b.first;
}

int main()
{
    int n,d;
    cin >> n >> d;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int x=a[n-1]+d;
    int b=d;
    for(int i=0;i<d;i++){
        a[0]+=1;
        sort(a,a+n);
    }
    int y=a[n-1];
    cout << y << " " << x;
}
