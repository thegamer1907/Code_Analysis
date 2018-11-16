#include <bits/stdc++.h>
using namespace std;
int main (){

int n,k,i,l,countt=0;
int number[100];

scanf("%d%d",&n,&k);
for(i=0 ;i<n ;i++){

scanf("%d",&number[i]);

}

for(i=0 ;i<n ;i++){

if (number[i]>=number[k-1] && number[i]>0)

{

    countt++;
}







    }


printf("%d",countt);



}


