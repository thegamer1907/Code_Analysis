#ifdef HOME
#include <chrono>
#endif

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <functional>
#include <iostream>
#include <iterator>
#include <iomanip>
#include <map>
#include <limits>
#include <numeric>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <queue>
#include <vector>
#include <utility>
using namespace std;

int main()
{
#ifdef HOME
    chrono::high_resolution_clock::time_point t0 = chrono::high_resolution_clock::now();
    ifstream input( "input.txt" );
    streambuf* cinbuf = cin.rdbuf( input.rdbuf() ); //save and redirect
#endif
    ios::sync_with_stdio( false );
    cin.tie( nullptr );
    long long N, K;
    cin >> N >> K;
    int result = 1;
    while (K)
    {
        if (K % 2)
            break;
        K /= 2;
        ++result;
    }
    cout << result << "\n";
#ifdef HOME
    cin.rdbuf( cinbuf );   //reset to standard input again
    chrono::high_resolution_clock::time_point t1 = chrono::high_resolution_clock::now();
    cout << "That took " << chrono::round<chrono::milliseconds>( t1 - t0 ).count() << " ms\n";
#endif
    return 0;
}