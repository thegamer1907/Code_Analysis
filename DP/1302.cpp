#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> ones(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]){
            if(i == 0) ones[i] = 1;
            else ones[i] = ones[i-1] + 1;
        } else{
            if(i!=0)
                ones[i] = ones[i-1];
        }
    }

    int mx = 0;
    int tmp = 0,l,r;
    for(int i=0;i<n;i++){
        tmp = 0;
        for(int j=i;j<n;j++){

            if(a[j] == 0)
                tmp++;
            if(i == 0)
                l = 0;
            else
                l = ones[i-1];

            mx = max(mx, l  + ones[n-1]-ones[j] + tmp);
        }
    }

    cout<<mx;
    return 0;
}
