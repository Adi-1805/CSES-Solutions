/*
 * Problem Name: Sliding_Window_Sum
 * Language: C++
 * Category: Sliding_Window_Problems
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
 
int main(){
    int tc; tc = 1;
    while(tc--){
        ll n, k; cin>>n>>k;
        ll x,a,b,c; cin >>x>>a>>b>>c;
        vector<int> arr(n, 0); arr[0] = x;
        f(i,1,n) arr[i] = ((a*arr[i-1]) + b)%c;
        
        ll Xor = 0;
        int i = 0, j = 0;
        ll cursum = 0;
        while(j-i < k-1){
            cursum += arr[j++];
        }
        while(j < n){
            cursum += arr[j++];
            Xor ^= cursum;
            cursum -= arr[i++];
        }
        cout << Xor << el;
    }
    return 0;
}