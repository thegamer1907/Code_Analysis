#include <iostream>

using namespace std;

int normalize(int hour);

bool can_traverse(int hour_hand,int minute_hand,int second_hand,int start,int stop,int step);

int main(){
  int hour_hand,minute_hand,second_hand,start,stop;
  cin>>hour_hand>>minute_hand>>second_hand>>start>>stop;
  hour_hand=normalize(hour_hand);
  start=normalize(start);
  stop=normalize(stop);


  if(can_traverse(hour_hand,minute_hand,second_hand,start,stop,1) ||
     can_traverse(hour_hand,minute_hand,second_hand,start,stop,59))
    cout<<"YES\n";
  else
    cout<<"NO\n";
}

int normalize(int hour){
  if(hour==12)
    return 0;
  return hour*5;
}

bool can_traverse(int hour_hand,int minute_hand,int second_hand,int start,int stop,int step){
  int position=start;
  if(step==1 && (position==hour_hand || position==minute_hand || position==second_hand))
    return false;
  while(position!=stop){
    position=(position+step)%60;

    if(step==1 && position==stop)
      return true;

    if(position==hour_hand || position==minute_hand || position==second_hand){
      //cout<<"bad at: "<<position<<'\n';
      return false;
    }
  }
  return true;
}
