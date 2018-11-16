#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a;
    int cells [100000];
    cin>>n>>a;
    cells[0] = 0;
    for(int i = 1; i < n; i++){
        cin>>cells[i];
    }

    int current = 1;

    for(int i = 1; i < n; i++){
            if(current == a){
                cout<<"YES";
                current = -1;
                break;
            }
            if(current > a){
                cout<<"NO";
                current = -1;
                break;
            }
        current = current + cells[current];
    }

    if(current == a){
                cout<<"YES";
                current = -1;
            }
            if(current > a){
                cout<<"NO";
                current = -1;
            }

    return 0;
}
