#include <bits/stdc++.h>
using namespace std;
using namespace chrono; // dùng chrono để đo thời gian

// ==================== VÒNG LẶP ====================
#define FOR(i,a,b,s) for (int i = (a); ((s) > 0 ? i <= (b) : i >= (b)); i += (s))
#define FORD(i,b,a) for (int i = (b); i >= (a); i--)
#define REP(i,n) for (int i = 0; i < (n); i++)

// ==================== STL SHORTCUTS ====================
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define mp make_pair
#define mt make_tuple

// ==================== KIỂU DỮ LIỆU ====================
#define ll long long
#define ld long double
#define pii pair<int,int>
#define pll pair<ll,ll>

// ==================== I/O & FILE ====================
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define fileio(name) freopen(name".inp","r",stdin); freopen(name".out","w",stdout);

// ==================== TOÁN & BIT ====================
#define bit(x,i) (((x) >> (i)) & 1)
#define MASK(i) (1LL << (i))
#define cntbit(x) __builtin_popcountll(x)
#define lcm(a,b) (1LL*(a)/__gcd((a),(b))*(b))

// ==================== HẰNG SỐ ====================
const int MOD = 1e9 + 7;
const ll INF = 1e18;

// ==================== HÀM TIỆN ÍCH ====================
template<class T> bool minimize(T &a, const T &b){ if(a > b){ a = b; return true; } return false; }
template<class T> bool maximize(T &a, const T &b){ if(a < b){ a = b; return true; } return false; }
template<class T> T gcd_custom(T a, T b){ return b ? gcd_custom(b, a % b) : a; }

// ==================== MODULAR ====================
ll addmod(ll a, ll b){ a%=MOD; b%=MOD; return (a + b) % MOD; }
ll submod(ll a, ll b){ a%=MOD; b%=MOD; return (a - b + MOD) % MOD; }
ll mulmod(ll a, ll b){ a%=MOD; b%=MOD; return (a * b) % MOD; }
ll powmod(ll a, ll b){ ll r=1; a%=MOD; while(b){ if(b&1) r=mulmod(r,a); a=mulmod(a,a); b>>=1; } return r; }
ll invmod(ll a){ return powmod(a, MOD-2); }

// ==================== MACRO ĐO THỜI GIAN ====================
#define start_timer auto __start = chrono::high_resolution_clock::now()
#define stop_timer cerr << "\nTime: " << chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - __start).count() << " ms\n";

// ==================== MAIN ====================
int main() {
    fastio;
    // fileio("test");

    start_timer;

    int t = 1;
    // cin >> t;
    while(t--){
        cout << powmod(2, 40);
    }

    stop_timer;
}
