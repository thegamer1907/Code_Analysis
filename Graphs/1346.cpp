#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t,now_place;
    now_place=0;
    cin>>n>>t;
    t--;
    vector<int>cellway(n-1,0);
    for(int i=0;i<n-1;i++)
        cin>>cellway[i];
    while(true)
    {
     now_place +=cellway[now_place];
        if(now_place>t)
        {
            cout<<"NO";
            break;
        }
        else if(now_place==t)
        {
            cout<<"YES";
            break;
        }
        continue;

    }


}