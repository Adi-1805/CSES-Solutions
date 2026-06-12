/*
 * Problem Name: Apple_Division
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
    int tc; tc = 1;
    while(tc--){
        int n; cin >> n;
        ll total = 0;
        vector<ll> v(n,0); 
        f(i,0,n){
            cin>>v[i]; total += v[i];
        } 
        function<ll(int, ll)> getWeight = [&](int ind, ll s1){
            if(ind == n) return llabs(2*s1 - total);
            ll skip = getWeight(ind+1, s1);
            ll pick = getWeight(ind+1, s1 + v[ind]);
            return min(skip, pick);
        };
        cout << getWeight(0, 0LL) << el;
 
    }
    return 0;
}