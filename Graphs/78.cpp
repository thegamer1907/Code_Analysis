#include <iostream>
using namespace std;
void swap(char *x,char *y)
{
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
    
}

int main(){
    int n,t;
    cin>>n>>t;
    char a[n],b[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
     while(t--)
     {
         for(int i=1;i<n;i++)
          if (a[i-1]=='B' && a[i]=='G'){
              swap(&b[i-1],&b[i]);
          }
         for(int i=0;i<n;i++){
        a[i]=b[i]; 
     }
     }
     for(int i=0;i<n;i++)
        cout<<b[i];
    return 0; 
}