#include <bits/stdc++.h>

using namespace std;

int max_pairs(vector <int> &a,vector <int> &b)
{
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i,j,cnt=0,la=a.size(),lb=b.size();
    for(i=0;i<la;i++){
        for(j=0;j<lb;j++){
            if(abs(a[i]-b[j])<=1){
                cnt++;
                b[j]=INT_MAX;
                break;
            }
        }
    }
    return cnt;
}

int main()
{
    int i,n,m;
    cin >> n;
    vector <int> arr1(n);
    for(i=0;i<n;i++)
        cin >> arr1[i];
    cin >> m;
    vector <int> arr2(m);
    for(i=0;i<m;i++)
        cin >> arr2[i];
    cout << max_pairs(arr1,arr2) << endl;
}