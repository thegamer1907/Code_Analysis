#include<bits/stdc++.h>
#define lld long long int
#define faster ios::sync_with_stdio(false);cin.tie(0);
#define vi vector< int >

using namespace std;


lld calc(string input, vi number,vi price, lld r){
  
  int num[3] = {0,0,0};
    
  lld price_sum = 0;
  for(int i= 0;i<input.size();i++)
    if(input[i]=='B')
      num[0]++;
    else if(input[i]=='S')
      num[1]++;
    else if(input[i]=='C')
      num[2]++;

    if(num[0]==0) number[0] = 0;
    if(num[1]==0) number[1] = 0;
    if(num[2]==0) number[2] = 0;
    
    lld counter = 0;
    
    while( number[0] > 0 || number[1] >0 || number[2] > 0){
      int flag = 1;
      for(int i = 0;i<3;i++){
        if(number[i]-num[i] < 0){
          if(price[i]*(num[i]-number[i]) > r){
            flag = 0;
            break;  
          }
          r -= price[i]*(num[i]-number[i]);
          number[i] = 0;
        }
        else
          number[i] -= num[i];
      }

      if(!flag)
        break;      
      counter++;
    }
    price_sum = num[0]*price[0]+num[1]*price[1]+num[2]*price[2];
    counter += (r/price_sum);
    return counter;
}

int main(){
  faster
  string input;
  vi number(3),price(3);
  lld r;
  cin>>input;
  for(int i = 0;i<3;i++)
    cin>>number[i];
  for(int i = 0;i<3;i++)
    cin>>price[i];
  
  cin>>r;  
  cout<<calc(input,number,price,r)<<endl;

}

