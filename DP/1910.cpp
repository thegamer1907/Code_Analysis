#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

struct fff{
int fir;
int sec;
int ans;
};

bool comp(fff d, fff d1){
return (d.fir < d1.fir);
}
bool comp1(fff d, fff d1){
return (d.sec < d1.sec);
}

int n,n1,c[100020],a[100020],i,i1;

fff b[100020];

int main(){
ifstream ci("input.txt");
ofstream cou("output.txt");
cin >> n >> n1;
int k = 0;
for (int i = 0; i<n; i++){
    cin >> c[i];
    if (a[c[i]] == 0) k++;
    a[c[i]]++;
}
for (int i = 0; i<n1; i++){
    cin >> b[i].fir;
    b[i].sec = i + 1;
}
int pred = 0;
int answer = k;
sort(b,b+n1,comp);
for (i = 0; i<n1; i++){
    for (i1 = pred; i1<b[i].fir-1; i1++)
    {
        //cout << i1;
        a[c[i1]]--;
        if (a[c[i1]] == 0) answer -= 1;
    }
    //cout << endl;
    pred = b[i].fir-1;
    b[i].ans = answer;
}
sort(b,b+n1,comp1);
for (i = 0; i<n1; i++)
    cout << b[i].ans << endl;
}
