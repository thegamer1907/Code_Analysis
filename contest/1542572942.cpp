#include<iostream>
using namespace std;
bool a[16];
int n, c;
int main(){
    cin >> n >> c;
    int i, j;
    int p;
    int r;
    for(i=0;i<n;i++){
        r = 0;
        for(j =0;j<c;j++){
            cin >>p;
            r*=2;
            r+=p;
        }
        a[r]=1;
    }
    if(a[0]){
        cout << "YES\n";
        return 0;
    }
    for(i=0;i<16;i++){
        if(a[i]!=0){
            for(j=0;j<16;j++){
                if(a[j]){
                    if((i|j) == (i^j))
                    {
                        cout << "YES\n";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "NO\n";
    return 0;
}

