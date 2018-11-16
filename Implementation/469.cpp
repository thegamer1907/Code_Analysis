#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
  int cuantos;
	cin>>cuantos;
  int cual;
	cin>>cual;

  int total = 0;
  int participantes[cuantos];
  
  for (int i =0; i < cuantos; i++) {
    int n;
    cin>>n;
    participantes[i] = n;
  }
  // cout<<cual<<endl;
  // cout<<participantes[cual -1]<<endl;
  for (int i =0; i < cuantos; i++) {
    if (participantes[i] >= participantes[cual -1]) {
      if (participantes[i] > 0) total += 1;
    }
  }
  cout<<total;
  return 0;
}

