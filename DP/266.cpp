#include <bits/stdc++.h>

using namespace std;

int main()
{
    int b, g;

    priority_queue<int> B, G;
    cin >> b;
    int p;
    for(int i = 0; i < b; i++){
        cin >> p;
        B.push(p);
    }
    cin >> g;
    for(int i = 0; i < g; i++){
        cin >> p;
        G.push(p);
    }
    int ans = 0;
    while(!G.empty() && !B.empty()){
        if(abs(G.top() - B.top()) < 2){
            ans++;
            G.pop();
            B.pop();
        }else if(G.top() > B.top()){
            G.pop();
        }else B.pop();
    }
    cout << ans;











}
