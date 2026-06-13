/*
 * Problem Name: Coin_Piles
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-06-13
 */

#include <bits/stdc++.h>
#define el '\n'
#define ll long long int
#define ull unsigned long long int
#define f(i, initializer, upper_limit) for(ll i = initializer; i < upper_limit; i++)
#define rf(i, initializer, lower_limit) for(ll i = initializer; i > lower_limit; i--)
#define YES cout<<"YES"<<el
#define NO cout<<"NO"<<el
#define deb(x) cout<<#x<<" = "<<x << el
using namespace std;
const int MOD = 1e9+7;
 
int drow[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dcol[8] = {0, 0, 1, -1, 1, -1, 1, -1};
 
int main(){
    int tc; cin>>tc;
    while(tc--){
        ll a,b; cin >> a >> b;
        if ((2 * a - b) % 3 || (2 * a - b) < 0 
        || (2 * b - a) % 3 || (2 * b - a) < 0) NO;
        else YES;
    }
    return 0;
}