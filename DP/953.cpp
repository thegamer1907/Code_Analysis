#include <iostream>

using namespace std;

int main()
{
    int n;
    int k=0;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            k++;
        }
    }
    int y=k;
    int maxx=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            k=y;
                for(int c=i;c<=j;c++){
                    if(a[c]==1){
                        k--;
                    }
                    else{
                        k++;
                    }
                }

                maxx=max(maxx,k);

        }
    }
    cout<<maxx;

}
