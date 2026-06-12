/*
 * Problem Name: Repetitions
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
        string s; cin>>s;
        int n = s.size();
        int len = 1, maxlen = INT_MIN;
        for(int i = 1; i < n; i++){
            if(s[i-1] == s[i]){
                len++;
            }else{
                len = 1;
            }
            maxlen = max(maxlen, len);
        }
        if(s.size() == 1) cout << 1 << el;
        else cout << maxlen << el;
    }
    return 0;
}