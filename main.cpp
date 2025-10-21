// #pragma GCC optimize("O3,unroll-loops") 
#include <bits/stdc++.h>
#define LOCAL
using namespace std;

// ==================== I/O & FILE ====================
#define fastio        ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl          '\n'
#define sep           ' '

//FILEIO("input")
#ifdef LOCAL
  #define FILEIO(name) do{ freopen(name ".inp","r",stdin); freopen(name ".out","w",stdout); }while(0)
#else
  #define FILEIO(name) do{}while(0)
#endif

// ==================== TIMER (tự tắt khi nộp) ====================
#ifdef LOCAL
  #define start_timer  auto __t0 = chrono::high_resolution_clock::now()
  #define stop_timer   cerr << "\nTime: " \
    << chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now()-__t0).count() \
    << " ms\n"
#else
  #define start_timer  ((void)0)
  #define stop_timer   ((void)0)
#endif

// ==================== TYPE ALIASES ====================
using ll  = long long;
using ull = unsigned long long;
using ld  = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi  = vector<int>;
using vll = vector<ll>;
using vpii= vector<pii>;

// ==================== LOOP MACROS ====================
#define FOR(i,a,b) for (int i=(a); i<=(b); ++i)
#define ROF(i,a,b) for (int i=(a); i>=(b); --i)
#define REP(i,n)   for (int i=0; i<(n); ++i)

// ==================== STL SHORTCUTS ====================
#define all(x)  begin(x), end(x)
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x)   (int)((x).size())
#define pb      push_back
#define eb      emplace_back
#define fi      first
#define se      second

// ==================== CONSTANTS ====================
constexpr int    INF   = 1'000'000'000;
constexpr ll     LLINF = 1'000'000'000'000'000'000LL;
constexpr int    MOD   = 1'000'007;      // đổi theo đề
constexpr int    MOD1  = 998'244'353;
constexpr double EPS   = 1e-9;
constexpr double PI    = 3.14159265358979323846;

// ==================== PRINT FORMAT ====================
#define fixedp(n) fixed << setprecision(n)

// ==================== MATH (an toàn) ====================
template<class T> inline bool chmin(T& a, const T& b){ if(b < a){ a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, const T& b){ if(a < b){ a = b; return true; } return false; }

inline ll addmod(ll a, ll b, ll mod=MOD){ a%=mod; b%=mod; ll s=a+b; if(s>=mod) s-=mod; return s; }
inline ll submod(ll a, ll b, ll mod=MOD){ a%=mod; b%=mod; ll s=a-b; if(s<0) s+=mod; return s; }
inline ll mulmod(ll a, ll b, ll mod=MOD){ return ( (__int128)(a%mod) * (b%mod) ) % mod; } // tránh tràn
inline ll powmod(ll a, ll e, ll mod=MOD){ ll r=1%mod; a%=mod; while(e){ if(e&1) r=mulmod(r,a,mod); a=mulmod(a,a,mod); e>>=1; } return r; }
inline ll invmod(ll a, ll mod=MOD){ return powmod(a, mod-2, mod); } // mod nguyên tố

// ==================== BIT OPS (inline cho an toàn ưu tiên) ====================
inline bool getBit(ull m, int i){ return (m>>i)&1ULL; }
inline ull  setBit(ull m, int i){ return m | (1ULL<<i); }
inline ull  clrBit(ull m, int i){ return m & ~(1ULL<<i); }
inline ull  tglBit(ull m, int i){ return m ^ (1ULL<<i); }

// ==================== HASH SAFE (unordered_*) ====================
// Tránh hack test: dùng splitmix64 làm hash
struct chash {
  static inline uint64_t splitmix64(uint64_t x){
    x += 0x9e3779b97f4a7c15ULL;
    x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9ULL;
    x = (x ^ (x >> 27)) * 0x94d049bb133111ebULL;
    return x ^ (x >> 31);
  }
  size_t operator()(uint64_t x) const { static const uint64_t FIXED = chrono::steady_clock::now().time_since_epoch().count(); return splitmix64(x + FIXED); }
  size_t operator()(const pair<uint64_t,uint64_t>& p) const {
    return (*this)((p.first<<32) ^ p.second);
  }
};
// dùng: unordered_map<long long,int, chash> mp;

// ==================== DEBUG (ẩn khi nộp) ====================
#ifdef LOCAL
  template<class T> void _dbg(const T& x){ cerr << x; }
  template<class A, class B> void _dbg(const pair<A,B>& p){ cerr << '('; _dbg(p.first); cerr<<','; _dbg(p.second); cerr<<')'; }
  template<class It> void _dbg_range(It L, It R){ cerr << '{'; bool f=0; for(auto it=L; it!=R; ++it){ if(f) cerr<<','; f=1; _dbg(*it);} cerr << '}'; }
  template<class T> void _dbg(const vector<T>& v){ _dbg_range(v.begin(), v.end()); }
  #define debug1(a)        do{ cerr << #a << " = "; _dbg(a); cerr << endl; }while(0)
  #define debug2(a,b)      do{ cerr << #a << " = "; _dbg(a); cerr << " | " #b " = "; _dbg(b); cerr << endl; }while(0)
  #define debug3(a,b,c)    do{ debug2(a,b); debug1(c); }while(0)
#else
  #define debug1(a)        ((void)0)
  #define debug2(a,b)      ((void)0)
  #define debug3(a,b,c)    ((void)0)
#endif

// ==================== UTILS ====================
template<class T> inline void read(T &x){ cin >> x; }
template<class T> inline void print(const T& x){ cout << x << endl; }
template<class T> inline T sumv(const vector<T>& v){ T s=0; for (auto &e: v) s+=e; return s; }

// ==================== SOLVE ====================
// viết hàm solve() để dùng cho đa test
void solve(){
  // ---- YOUR CODE HERE ----
  cout << "Hello World" << endl;
}

int main(){
  fastio;
  // FILEIO("input");         
  start_timer;

  // --- Single test or multi test ---
  // int T=1; if (cin >> T) while (T--) solve(); 
  solve();

  stop_timer;
  return 0;
}
