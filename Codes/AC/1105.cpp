#include<bits/stdc++.h>


#define lld long long int
#define vi vector< int >
#define vlld vector < lld >
#define vii vector< vi >
#define pr pair< int,lld >
#define ulld unsigned long long int


using namespace std;

int compare(pr a,pr b){

  return a.first < b.first;

}


lld calc(int n,int d,vector < pr > vec){
  vector < pr > input;
  sort(vec.begin(),vec.end(),compare);
  lld sum = 0;
  for(int i = 0;i<n;i++){
    sum += vec[i].second;
    pr a;
    a.first = vec[i].first;
    a.second = sum;
    input.push_back(a);
  }
  
  lld maxm = 0;
  for(int i= 0;i<input.size();i++){
    int search_pt = input[i].first + d -1;
//    cout<<search_pt<<endl;
    int mid = 0;
    int low = 0,high = input.size()-1;
    while(low<=high){
      mid = (low+high)/2;
      if(input[mid].first < search_pt)
        low = mid+1;
      else if(input[mid].first > search_pt)
        high = mid-1;
      else if(input[mid].first == search_pt && mid < input.size()-1 && input[mid].first == input[mid+1].first)
        low = mid+1;
      else break;
    }
    lld bottom = (i>0)?input[i-1].second:0;
//    cout<<bottom<<" "<<i<<" "<<mid<<endl;
    if(input[mid].first > search_pt)
      maxm = max(maxm,input[mid-1].second-bottom);
    else
      maxm = max(maxm,input[mid].second-bottom);
  }
  return maxm;
}


int main(){
  int n,d;
  cin>>n>>d;
  vector< pr > vec;
  for(int i = 0;i<n;i++)
  {
    int mon;
    lld fac;
    cin>>mon>>fac;
    pr a;
    a.first = mon;
    a.second = fac;
    vec.push_back(a);
  } 
  cout<<calc(n,d,vec)<<endl;

}
