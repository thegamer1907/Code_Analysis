#include<iostream>
using namespace std;

int n, q;
long long int k[200010], cumSum[200020], a[200010];

int bin_search(long long int val){
  int beg = 0, end = n+1, mid;
  while (beg<=end){
    mid = (beg+end)/2;
    if (cumSum[mid] == val){
      return mid;
    }
    else if(cumSum[mid]<val){
      if (mid+1 >= n+1 || cumSum[mid+1]>val){
        return mid;
      }
      else{
        beg=mid+1;
      }
    }
    else{
      end=mid-1;
    }
  }
  return -1;
}

int main(){
  cin>>n>>q;
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
  for(int i=0; i<q; i++){
    cin>>k[i];
  }
  cumSum[0] = 0;
  for(int i=0; i<n; i++){
    cumSum[i+1] = cumSum[i]+a[i];
  }
  long long int totalArrows = 0, menLeft;
  for(int i=0; i<q; i++){
    totalArrows += k[i];
    menLeft = n - bin_search(totalArrows);
    if (menLeft <= 0){
      menLeft = n;
      totalArrows = 0;
    }
    cout<<menLeft<<endl;
  }
  return 0;
}