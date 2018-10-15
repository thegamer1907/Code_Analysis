#include<iostream>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include<algorithm>
#include <stdio.h>
#include <string.h>
using namespace std;
//You Can Use Dfs OR BFS Okyyyyyyyyyy
// Vvector visited is
vector <vector<int> >v(100000);
vector <int> d;
vector <bool> visited(1000000);
//set<int >s;
queue<int>q;
 int s;

string bb(int k){
if(k==0 ){
    return "zero";
}
if(k==1){
    return "one";
}
if(k==2){
    return "two";
}
if(k==3){
    return "tree";
}
if(k==4){
    return "four";
}
if(k==5){
    return "five";
}
if(k==6){
    return "six";
}
if(k==7){
    return "seven";
}
if(k==8){
    return "eight";
}
if(k==9){
    return "nine";
}
if(k==10){
    return "ten";
}
if(k==11){
    return "eleven";
}
if(k==12){
    return "twelve";
}
if(k==13){
    return "thirteen";
}
if(k==14){
    return "fourteen";
}
if(k==15){
    return "fifteen";
}
if(k==16){
    return "sixteen";
}
if(k==17){
    return "seventeen";
}
if(k==18){
    return "eighteen";
}
if(k==19){
    return "nineteen";
}
if(k==20){
    return "twenty";
}
if(k==30){
    return "thirty";
}
if(k==40){
    return "forty";
}
if(k==50){
    return "fifty";
}
if(k==60){
    return "sixty";
}
if(k==70){
    return "seventy";
}
if(k==80){
    return "eighty";
}
if(k==90){
    return "ninety";
}


}

int main()
{

   int n;
   cin>>n;
   int a[n];
   int countt=n;

   for(int i=0;i<n;i++){

    cin>>a[i];
   }
   sort(a,a+n);
   reverse(a,a+n);
   int j=n/2+n%2;
   int i=0;
for( j;j<n;j++){

    if(a[i]>= a[j]*2)
    {
        i++;
       countt--;
    }
   }
   cout<<countt;

        }



