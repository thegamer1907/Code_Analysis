#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <iterator>
#include <utility>
#include<climits>
using namespace std;

int main()
{
    int n,num=0,count=0;
     cin>>n>>num;
     int arr[n-1];
     for(int i=0;i<n-1;i++){
         cin>>arr[i];
      }

     for(int i=0;i<n-1;){
      i=i+arr[i];
      if(i==num-1){
         cout<<"YES"<<endl;
         count=1;
               }
     }
     if(count!=1)
     cout<<"NO"<<endl;
}
