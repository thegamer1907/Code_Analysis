#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
   /* string song;
    string dub = "WUB";
    string sp = " ";
    cin >> song;
    int i=0;
    int j;
    i = song.find(dub);
    j = i;
    while(1){
      
      i = song.find(dub);
      if(i == -1)
        break;
      else{
        song.erase(i,3);
        i = song.find(dub);
        if(i!=j && j!=0){
          song.insert(j,sp);
          j=i+1;
        }
        else j = i;
    }
    }
    cout << song;
}
*/
    string initial;
    int j,n,t,i;
    char temp;
    cin >> n>>t;
    cin >> initial;
   for(j=0;j<t;j++){
    for(i=0;i<n-1;){
      if(initial[i]=='B' && initial[i+1] == 'G'){
        temp = initial[i];
        initial[i] = initial[i+1];
        initial[i+1] = temp;
        i+=2;
      }
      else i++;
    }
  }
  cout << initial;
}