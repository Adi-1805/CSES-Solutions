/*
 * Problem Name: Increasing_Array
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
const int M = 1e7;
 
int drow[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dcol[8] = {0, 0, 1, -1, 1, -1, 1, -1};
 
int main(){
    int tc; tc = 1;
    while(tc--){
        int n; cin>> n;
        
        int prev = 0;
        if(n >= 1) cin >> prev; // storing the first element
        
        ll steps = 0;
        for(int i = 1; i < n; i++){
            int curr = 0; cin >> curr;
            if(curr < prev){
                steps += (prev - curr);
                curr += (prev - curr);
            }
            prev = curr;
        }
        if(n == 1) cout << 0 << el; 
        else cout << steps << el;
    }
    return 0;
}