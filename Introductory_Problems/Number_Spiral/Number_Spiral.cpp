/*
 * Problem Name: Number_Spiral
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-06-12
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
        ll x, y; cin>>x>>y;
        ll n = max(x, y); // n -> nth layer
        ll first = 1LL*n*n -2*n +2; 
        vector<ll> cell; // stores the coordinate of first element of the layer and it's value
        if(n&1){
            cell = {n, 1, first};
        }else{
            cell = {1, n, first}; 
        }
        
        ll diff = abs(cell[0]-x) + abs(cell[1]-y);
        cout << cell[2] + diff << el;
    }
    return 0;
}