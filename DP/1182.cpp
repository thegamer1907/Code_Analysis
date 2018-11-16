#include<map>
#include<vector>
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x);
typedef long long                           ll;
typedef vector<int>                         vi;
typedef vector<long long>                   vll;
typedef vector<bool>                        vb;
typedef vector<double>                      vd;
typedef vector< vector<int> >               vvi;
typedef pair<int, int>                      pii;
typedef vector< pair<int,int> >             vpii;
typedef vector< vector< pair<int,int> > >   vvpii;
const ll INF = 10000005;
const int N  = 3e5+50;

int arr[101];

int main()
{
    int n,no=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i])no++;
    }

    int cnt=0, ans =0;

    for(int i=0;i<n;i++){
        cnt = 0;
        for(int j=i;j<n;j++){
            if(arr[j] == 0) cnt++;
            else cnt--;
            ans = max(ans,cnt);
        }
    }

    if(ans == 0) ans = -1;

    cout << no+ans << endl;

}















