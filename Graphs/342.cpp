#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{int n,t;
   string q;
   cin>>n;
   cin>>t;
   cin>>q;char temp;
   char z;
   for (size_t i = 0; i < t; i++) {
     for (size_t j = 0; j < n-1; j++) {
       /* code */if(q[j]=='B'&&q[j+1]=='G')
       {temp=q[j];

         q[j]=q[j+1];
         q[j+1]=temp;
        j++;
       }
     }
   }
   for (size_t i = 0; i < n; i++) {
     /* code */cout<<q[i];
   }

cout<<"\n";
}