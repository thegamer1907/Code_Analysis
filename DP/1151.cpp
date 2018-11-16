#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
     int a;
     int i(0),j(0),m(-1);
     while(n--){
         cin>>a;
           if(a==1){
               i++;
               if(j>0)
               j--;
           }
           else{
               j++;
             m=max(m,j) ; 
           }
          }
          cout<<m+i<<endl;
    return 0;
}