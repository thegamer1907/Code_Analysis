#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

int main(){
  enum {QUAD1, QUAD2, QUAD3};
  string input;
  int data[5];
  float degrees[3];
  float t1Degrees, t2Degrees;
  int t1Quad, t2Quad;
  getline(cin, input);
  stringstream splitter(input);
  int index = 0;
  while(splitter >> input){
    data[index++] = stoi(input);
  }

  data[0] = (data[0] == 12) ? 0 : data[0] ;
  t1Degrees = data[3] * (360.0/12.0);
  t2Degrees = data[4] * (360.0/12.0);
  degrees[0] = data[2] * (360.0 / 60.0); 
  degrees[1] = (data[1] + (data[2]/60.0)) * (360.0/60.0);
  degrees[2] = (data[0] + (data[1]/60.0) + (data[2]/3600.0)) * (360.0/12.0);


  sort(degrees, degrees+3);

  if(t1Degrees <= degrees[0] || t1Degrees >= degrees[2]){
    t1Quad = QUAD1;
  } else if(t1Degrees > degrees[0] && t1Degrees <= degrees[1]){
    t1Quad = QUAD2;
  } else {
    t1Quad = QUAD3;
  }

  if(t2Degrees <= degrees[0] || t2Degrees >= degrees[2]){
    t2Quad = QUAD1;
  } else if(t2Degrees > degrees[0] && t2Degrees <= degrees[1]){
    t2Quad = QUAD2;
  } else {
    t2Quad = QUAD3;
  }
  
  if(t1Quad == t2Quad) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }

}
