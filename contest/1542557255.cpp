#include <bits/stdc++.h>

using namespace std;

string gav;

string tries;

int main()
{
        int i, n, k=0, l=0;
    cin >> gav >> n;
    for(i=0; i<n; ++i){
        cin >> tries;
            if(tries[0]==gav[1])
        k=1;
            if(tries[1]==gav[0])
        l=1;
        if(tries==gav){
        cout<<"YES";
        return 0;
        }}
    if(2==k+l)
        cout <<"YES";
    else
        cout <<"NO";
}
