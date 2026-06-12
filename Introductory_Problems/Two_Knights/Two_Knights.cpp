/*
 * Problem Name: Two_Knights
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
 
vector<ll> answers(10001, 0);
 
int main(){
    int tc; tc = 1;
    answers[1] = 0;
    answers[2] = 6;
    for(int i = 3; i < 10001; i++){
        answers[i] = pow(i,2)*( pow(i,2) -1)/2 - 4*(i-1)*(i-2);
    }
    
    while(tc--){
        int n; cin >> n;
        for(int i = 1; i <= n; i++) cout << answers[i] << el;
    }
    return 0;
}