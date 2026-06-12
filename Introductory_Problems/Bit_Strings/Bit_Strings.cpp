/*
 * Problem Name: Bit_Strings
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
 
ull binexp(ull n, int x){
    ull ans = 1;
    n %= MOD;
    while(x){
        if(x&1) ans = (ans*n)%MOD;
        n = (n*n)%MOD;
        x >>= 1;
    }
    return ans;
}
 
int main(){
    int tc; tc = 1;
    while(tc--){
        int n; cin>>n;
        cout << binexp(2,n) << el;
    }
    return 0;
}