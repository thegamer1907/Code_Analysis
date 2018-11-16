
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <assert.h>

using namespace std;

void print(auto list_){
    cout<<" => ";
    for(auto v : list_){
        cout<< v << " ";
    }
    cout<<endl;
}
int proccess(int n, int k, vector<int> v){
    int found_pos = 0;
    int find_for = v[k-1];

    sort(v.begin(), v.end(), greater<int>());

    auto itrFindPos = find(v.begin(), v.end(), find_for);
    int iFindPos = itrFindPos - v.begin();

    auto itrUpperPos = upper_bound(v.begin(), v.end(), find_for, greater<int>());
    int iUpperPos = itrUpperPos - v.begin()-1;


//    cout<< "n = " << n << ", k = " << k << ", finding_for_score = " << find_for
//    << " found_at = " << iFindPos << " : " << v[iFindPos]
//    << "; upper_found_at = " << iUpperPos << " : " << v[iUpperPos] <<endl;
//    print(v);


    if( v[iUpperPos] == 0){
            int counts = count_if(v.begin(), v.end(), [](int i){return (i> 0);} );
            found_pos = counts;
    }else{ found_pos = iUpperPos+1;}

    return found_pos;
}

/*
n = 8, k = 5, finding_for_score = 7 found_at = 3 : 7; upper_found_at = 5 : 7
6
n = 4, k = 2, finding_for_score = 0 found_at = 0 : 0; upper_found_at = 3 : 0
0
n = 4, k = 1, finding_for_score = 1 found_at = 0 : 1; upper_found_at = 3 : 1
4
n = 4, k = 4, finding_for_score = 1 found_at = 0 : 1; upper_found_at = 3 : 1
4
n = 1, k = 1, finding_for_score = 5 found_at = 0 : 5; upper_found_at = 0 : 5
1

*/
void testcase1(){
    int n = 8;
    int k = 5;
    vector<int> v = {10, 9, 8, 7, 7, 7, 5, 5};

    assert( n >= k);
    assert( n >= 1 && n <= 50);
    assert( k >= 1 && k <= 50);

    int found_pos = proccess(n, k, v);
    cout<<found_pos<<endl;
    assert(found_pos == 6);
}

void testcase2(){
    int n = 4;
    int k = 2;
    vector<int> v = {0, 0, 0, 0};

    assert( n >= k);
    assert( n >= 1 && n <= 50);
    assert( k >= 1 && k <= 50);

    int found_pos = proccess(n, k, v);
    cout<<found_pos<<endl;
    assert(found_pos == 0);
}

void testcase3(){
    int n = 4;
    int k = 1;
    vector<int> v = {1, 1, 1, 1};

    assert( n >= k);
    assert( n >= 1 && n <= 50);
    assert( k >= 1 && k <= 50);

    int found_pos = proccess(n, k, v);
    cout<<found_pos<<endl;
    assert(found_pos == 4);
}



void testcase4(){
    int n = 4;
    int k = 4;
    vector<int> v = {1, 1, 1, 1};

    assert( n >= k);
    assert( n >= 1 && n <= 50);
    assert( k >= 1 && k <= 50);

    int found_pos = proccess(n, k, v);
    cout<<found_pos<<endl;
    assert(found_pos == 4);
}


void testcase5(){
    int n = 1;
    int k = 1;
    vector<int> v = {5};

    assert( n >= k);
    assert( n >= 1 && n <= 50);
    assert( k >= 1 && k <= 50);

    int found_pos = proccess(n, k, v);
    cout<<found_pos<<endl;
    assert(found_pos == 1);
}

void testcase6(){
    int n = 5;
    int k = 5;
    vector<int> v = {3,2,1,0,0};

    assert( n >= k);
    assert( n >= 1 && n <= 50);
    assert( k >= 1 && k <= 50);

    int found_pos = proccess(n, k, v);
    cout<<found_pos<<endl;
    assert(found_pos == 3);
}

void testcaseIO(){
    int n;
    int k;
    cin>> n >> k;
    vector<int> v;
    int tmp;
    for(int i = 0; i < n; ++i){
        cin>> tmp;
        v.push_back(tmp);
    }

    assert( n >= k);
    assert( n >= 1 && n <= 50);
    assert( k >= 1 && k <= 50);

    int found_pos = proccess(n, k, v);
    cout<<found_pos<<endl;
}


int main(){    //158A
//    testcase1();
//    testcase2();
//    testcase3();
//    testcase4();
//    testcase5();
//    testcase6();
    testcaseIO();
    return 0;
}