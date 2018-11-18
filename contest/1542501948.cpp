#include <iostream>

using namespace std;

int n,k;
bool tab[17];
bool b;

int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int l=0;
        for(int j=0;j<k;j++){
            cin>>b;
            l+=b*(1<<j);
        }
        tab[l]=1;
    }
    if(tab[0]){
        cout<<"Yes";
        return 0;
    }
    for(int i=0;i<(1<<k);i++){
        for(int j=i+1;j<(1<<k);j++){
            if(tab[i] && tab[j] && !(i&j)){
                cout<<"Yes";
                return 0;
            }
        }
    }
    cout<<"No";
    return 0;
}
