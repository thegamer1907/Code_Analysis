#include <bits/stdc++.h>
using namespace std;
typedef bool boolean;

char ss[5];
int n; 
boolean front = false, rear = false;

int main() {
     scanf("%s%d", ss, &n);
     char string[5];
     int check=0;
     for(int i = 1; i <= n; i++) {
         scanf("%s", string);
         if(ss[0] == string[0] && ss[1] == string[1]) {
         	 check=1;
         }
         if(ss[0] == string[1])
             rear = true;
         if(ss[1] == string[0])
             front = true;
         if(rear && front) {
         	 check=1;
            
         }
     }
     if(check==1){
     	cout<<"YES"<<endl;
     }else{
     cout<<"NO"<<endl;  
     }
     return 0;
    }