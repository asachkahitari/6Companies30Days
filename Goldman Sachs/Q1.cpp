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
 
vector<vector<string> > Anagrams(vector<string>& list) {
        vector<vector<string>>ans;
        vector<string>temp;
        int n=list.size();
        for(int i=0;i<n;i++){
            string t=list[i];
            sort(t.begin(),t.end());
            temp.push_back(t);
        }
        int a[n]={0};
        for(int i=0;i<n;i++){
            if(a[i]==0){
                vector<string>v;
                v.push_back(list[i]);
                a[i]=1;
                for(int j=i+1;j<n;j++){
                    if(temp[i]==temp[j]){
                        v.push_back(list[j]);
                        a[j]=1;
                    }
                }
                ans.push_back(v);
            }
        }
        return ans;        
    }
void solve(){
    vector<vector<string>> a;
    vector<string> list;
    int n;cin>>n;
    for(int i=0;i<n;i++) {
        string s;cin>>s;
        list.push_back(s);
    }
    a = Anagrams(list);
    for(auto x:a){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    fast_cin();
    ll t=1;
    // cin >> t;
    for(int it=1;it<=t;it++) {
        solve();
    }
    return 0;
}