#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int ans,pivot,n,k,participants[101] = {0};
    cin >> n >> k;
    ans = 0;
    for(int i = 0;i < n; i++)
        cin >> participants[i];
    pivot = participants[k-1];
    sort(participants, participants+n);
    for(int i = n-1;0 <= i;i--){
        if(pivot <= participants[i] && 0 < participants[i])
            ans += 1;
        else
            break;
    }
    cout << ans;
}