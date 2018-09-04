#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int friends,money_separation;
  while(cin>>friends>>money_separation){
    vector<pair<int,int>> friend_(friends);
    for(int f=0;f<friends;f++)
      cin>>friend_[f].first>>friend_[f].second;
    sort(friend_.begin(),friend_.end());

    long long best_factor=0,group_factor=friend_[0].second;
    int first=0,last=0;
    while(true){
      if(friend_[last].first-friend_[first].first>=money_separation){
        group_factor-=friend_[first].second;
        first++;
        continue;
      }
      best_factor=max(best_factor,group_factor);
      last++;
      if(last==friends)
        break;
      group_factor+=friend_[last].second;
    }
    cout<<best_factor<<'\n';
  }
}
