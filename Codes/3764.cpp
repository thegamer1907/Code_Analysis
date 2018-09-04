#include<iostream>
#include<string>

using namespace std;

bool can(long long *a, long long *b, long long *c, long long r, long long m) {
    long long p=0;
    for(int i = 0; i<3; i++) {
        p+=max(a[i]*m-b[i],0ll)*c[i];
    }
    return p<=r;
}

int main() {
  string st;
  cin >> st;
  long long a[3];
  long long b[3];
  long long c[3];
  long long r;
    for (int i=0; i<3; i++) {
    cin >> b[i];
  }
  for (int i=0; i<3; i++) {
    cin >> c[i];
    a[i]=0;
  }
  cin >> r;
  for(auto x:st) {
    if(x=='B') a[0]++;
    if(x=='C') a[2]++;
    if(x=='S') a[1]++;
  }
  long long lo = 0, hi=a[0]+b[0]+c[0]+r+100, mid; 
  while(lo+1!=hi) {
    mid=(hi+lo)/2;
    if(can(a,b,c,r, mid)) {
        lo=mid;
    }
    else{
        hi=mid;
    }
  }
  cout << lo << endl;
}; 
