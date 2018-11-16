#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <set>
using namespace std;
int main() {
    int n,ans=0,ne=0;
    cin>>n;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)
            ne++;
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            int ed=0;
            for(int k=i;k<=j;k++){
                if(a[k]==1)
                    ed--;
                else
                    ed++;
            }
            if(ed>ans){
                ans=ed;
            }

        }
    if(ans==0)
        cout<<ne-1;
    else
    cout<<ans+ne;
    return 0;
}
