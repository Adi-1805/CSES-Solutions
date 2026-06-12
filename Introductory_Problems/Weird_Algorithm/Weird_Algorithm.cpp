/*
 * Problem Name: Weird_Algorithm
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-06-12
 */

/* WEIRD ALGORITHM:
The most crucial thing you can learn from this problem is the concept of a Collatz sequence and the fact that its termination is an unproven hypothesis. This problem is a direct implementation of the Collatz conjecture, also known as the 3n+1 problem.
 
The Collatz conjecture states that for any positive integer n, repeatedly applying the given rules (dividing by two if even, or multiplying by three and adding one if odd) will eventually lead to the number 1. While this seems to hold true for all numbers ever tested, it has never been mathematically proven for all positive integers. This makes it one of the most famous unsolved problems in mathematics.
 
Following code correctly simulates this process.
*/
#include <bits/stdc++.h>
#define el '\n'
#define ll long long int
#define ull unsigned long long int
#define f(i, initializer, upper_limit) for(ll i = initializer; i < upper_limit; i++)
#define rf(i, initializer, lower_limit) for(ll i = initializer; i > lower_limit; i--)
#define YES cout<<"YES"<<el
#define NO cout<<"NO"<<el
using namespace std;
const int M = 1e7;
 
int drow[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dcol[8] = {0, 0, 1, -1, 1, -1, 1, -1};
 
int main(){
    int tc; tc = 1;
    while(tc--){
        long long int n; cin>>n;
	if(n == 1){
	    cout << 1 << el; break;
	}
        while(n > 1){
    	    cout << n << " ";
            if(n&1){
                n = 1LL*(n*3 + 1);
            }else{
                n = 1LL*(n/2);
            }
            if(n < 1) break;
        }
        cout << 1 << " ";
    }
    return 0;
}