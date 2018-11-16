#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
const int N = 100 + 5;
int n, m, a[N], ans;
stack <int> st1;
stack <int> st2;
int main(){
    cin >> n;
    for(int i = 0; i< n; i++)
        cin >> a[i];
    sort(a, a+n);
    reverse(a, a+n);
    for(int i = 0; i < n; i++)
        st1.push(a[i]);
    cin >> m;
    for(int i = 0; i< m; i++)
        cin >> a[i];
    sort(a, a+m);
    reverse(a, a+m);
    for(int i = 0; i < m; i++)
        st2.push(a[i]);
    while(!st1.empty() && !st2.empty()){
        int w = st1.top(), e = st2.top();
        if(w - e <= 1 && w - e >= -1){
            ans++;
            st1.pop();
            st2.pop();
        }
        else{
            if(st1.top() > st2.top()){
                st2.pop();
            }
            else{
                st1.pop();
            }
        }
    }
    cout << ans << endl;
    return 0;
}