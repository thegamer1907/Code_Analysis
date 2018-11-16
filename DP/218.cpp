#include <bits/stdc++.h>

#define F first
#define S second
#define pb push_back
#define ll long long


using namespace std;

vector<int> a;

vector<int> b;


int main(){

    ios_base::sync_with_stdio(0);

    cout.tie(0);cin.tie(0);

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n;

    cin>>n;

    a.resize(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int m;

    cin>>m;

    b.resize(m);

    for(int j=0;j<m;j++){
        cin>>b[j];
    }

    sort(a.begin(),a.end());

    sort(b.begin(),b.end());

    int i=n-1,j=m-1,k=0;


    while(i>=0 && j>=0){

        //cout<<i<<' '<<j<<endl;

        if (abs(a[i]-b[j])>1){
            if (a[i]>b[j]){
                i--;
            }
                else{
                    j--;
                }
            }
            else{
                k++;
                i--;
                j--;
            }
        }


        cout<<k<<endl;


        return 0;
    }
