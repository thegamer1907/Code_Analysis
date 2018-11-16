# include <iostream>

using namespace std;

int num[100005], occ[100005], sum[100005];
int main(){
  ios :: sync_with_stdio(false);

  int N, Q;
  cin >> N >> Q;
  for(int i=1; i<=N; i++)
    cin >> num[i];

  for(int i=N; i>=1; i--){
    sum[i] = sum[i+1];
    if(occ[num[i]] == 0){
      occ[num[i]]++;
      sum[i]++;
    }
  }

  for(int q=0; q<Q; q++){
    int x;
    cin >> x;
    cout << sum[x] << endl;
  }
  return 0;
}
