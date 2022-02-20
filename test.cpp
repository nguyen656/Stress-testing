/******************************************************

    @file  : test.cpp"
    @author: nguyentrader"
    @date  : 02/20/2022"

*******************************************************/

#include <bits/stdc++.h>
using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int Rand(long long l, long long r){
    uniform_int_distribution<long long> uid(l, r);
    return uid(rng);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Write your random code here. 
    return 0;
}
