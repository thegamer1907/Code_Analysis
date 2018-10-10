#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int potions,single_spells,multi_spells,prepare_time,mana;
  while(cin>>potions>>single_spells>>multi_spells>>prepare_time>>mana){
    //mana points, new prepare time
    vector<pair<int,int>> single_spell(single_spells);
    //mana points, potions made
    vector<pair<int,int>> multi_spell(multi_spells);

    for(int s=0;s<single_spells;s++)
      cin>>single_spell[s].second;
    for(int s=0;s<single_spells;s++)
      cin>>single_spell[s].first;

    for(int m=0;m<multi_spells;m++)
      cin>>multi_spell[m].second;
    for(int m=0;m<multi_spells;m++)
      cin>>multi_spell[m].first;

    sort(single_spell.begin(),single_spell.end());

    for(int s=1;s<single_spell.size();s++)
      single_spell[s].second=min(single_spell[s].second,single_spell[s-1].second);

    long long best=static_cast<long long>(potions)*prepare_time;

    for(int s=0;s<single_spell.size();s++)
      if(single_spell[s].first<=mana)
        best=min(best,static_cast<long long>(potions)*single_spell[s].second);

    for(int m=0;m<multi_spell.size();m++)
      if(multi_spell[m].first<=mana){
        int potions_left=max(0,potions-multi_spell[m].second);
        best=min(best,static_cast<long long>(potions_left)*prepare_time);

        int mana_left=mana-multi_spell[m].first;
        
        if(single_spell[0].first>mana_left)
          continue;

        auto i=upper_bound(single_spell.begin(),single_spell.end(),make_pair(mana_left,prepare_time+1));
        i--;
        int new_prepare_time=i->second;
        best=min(best,static_cast<long long>(potions_left)*new_prepare_time);
      }

    cout<<best<<'\n';
  }
}
