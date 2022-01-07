#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 
int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        if(n==1)
        {
            if(a[0]<k) return 1;
            else return 0;
        }
        
        long long prePro = 1;
        int i=0,j=0;
        long count = 0;
        while(j<n)
        {
            prePro*=a[j];
            
            while(prePro>=k and i<=j)
            {   
                prePro/=a[i];
                i++;
            }
            
            //Count the length of the window
            count+=(j-i+1);
            
            j++;
        }
        
        return (int)count;
    }
void solve(){
    vector<int> a;
    int n;cin>>n;
    long long k;cin>>k;
    for(int i=0;i<n;i++){
        int p;cin>>p;
        a.push_back(p);
    }
    cout<<countSubArrayProductLessThanK(a,n,k);
}
int main()
{
    fast_cin();
    ll t=1;
    cin >> t;
    for(int it=1;it<=t;it++) {
        solve();
    }
    return 0;
}