#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
   int i,k=0,t,n;
   char d;
   cin>>n; 
   cin>>t;
   char ar[n];
   int qw[n];
   for(int q=0;q<n;q++){
       cin>>ar[q];
       if(ar[q]=='B')
            {
            qw[k]=q;
            k++;
                
            }
        }
        
        for(int q=0;q<t;q++){
            for(int w=0;w<k;w++){
                if(qw[w]+1<=n){
                if(ar[qw[w]+1]=='G'){
                    ar[qw[w]]='G';
                    ar[qw[w]+1]='B';
                    qw[w]=qw[w]+1;
                }
            }
                
            }
        }
    for(int y=0;y<n;y++){
            cout<<ar[y];
        }
        
    return 0;
}