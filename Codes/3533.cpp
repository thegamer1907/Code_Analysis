#include<bits/stdc++.h>

using namespace std;
#define loop(i, x) for(;i<x;i++)
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pii>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define mt make_tuple
#define tiii tuple<int, int, int>
#define tiiii tuple<int, int, int, int>

unsigned ll getCandiesEaten(unsigned ll n, unsigned ll k){
  unsigned ll eaten=0;
  unsigned ll days=0;
  while(n > 0){
    if(n <= k){
      eaten += n;
      break;
    }

    eaten += k;
    n -= k;
    n -= (unsigned ll)(n/10);
  }

  return eaten;
}

int main(){
  unsigned ll n;
  cin >> n;
  unsigned ll halfN=n/2;
  if(halfN*2 != n) halfN += 1;
  unsigned ll start=0, end=n;

  // cout << n << " " << halfN << endl;

  while(start < end-1){
    unsigned ll mid = (start + end)>>1;
    unsigned ll eaten=getCandiesEaten(n, mid);

    // cout << mid << ": " << eaten << endl;
    if(eaten < halfN){
      start = mid;
    } else {
      end = mid;
    }
  }

  cout << end << endl;
}