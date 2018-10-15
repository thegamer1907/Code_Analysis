#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,a,d,ans1,ans2;
    priority_queue <int> pq1;
    priority_queue<int, vector<int>, greater<int> > pq2;
    cin >> n >>m ;
    d=n;
    while(d--){
        cin>>a;
        pq1.push(a);
        pq2.push(a);
    }
    d=n-1;

    if(n!=1){
        ans2=m+pq1.top();
        while(m--){
            a=pq2.top()+1;
            pq2.pop();
            pq2.push(a);
        }
        while(d--){
            pq2.pop();
        }
        ans1=pq2.top();
        cout<< ans1 << " "<<ans2 <<endl;
    }else{
        ans1=ans2=pq1.top()+m;
        cout<< ans1 << " "<<ans2 <<endl;
    }


    return 0;
}