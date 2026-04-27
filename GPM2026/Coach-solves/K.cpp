#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

template<class T> using Tree = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#ifdef ONLINE_JUDGE
#pragma GCC optimize("Ofast","unroll-loops","omit-frame-pointer","inline","03")
#endif // ONLINE_JUDGE

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define uni(x) (x).erase(unique(all(x)), (x).end())
#define rnk(x, y) upper_bound(all((x)), (y)) - (x).begin()
#define sz(x) (int)((x).size())
typedef long double ld;
typedef long long ll;
typedef __int128 LL;

mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

static int rnd(int lo, int hi) {
    return uniform_int_distribution<int>(lo, hi)(rng);
}

const ll oo = 1e18;

const ll MAX = 500 + 5;
const ll mod = 987654321;
const ld INF = 1e18;

/**
 * Description: Class to handle points in the plane.
 *   T can be e.g. double or long long. (Avoid int.)
 * Status: Works fine, used a lot
 */

template<class T>
int sgn(T x) { return (x > 0) - (x < 0); }
template<class T>
struct Point {
    typedef Point P;
    T x, y;
    explicit Point(T _x = 0, T _y = 0) : x(_x), y(_y) {}
    bool operator<(P p) const { return tie(x, y) < tie(p.x, p.y); }
    bool operator==(P p) const { return tie(x, y) == tie(p.x, p.y); }
    P operator+(P p) const { return P(x + p.x, y + p.y); }
    P operator-(P p) const { return P(x - p.x, y - p.y); }
    P operator*(T d) const { return P(x * d, y * d); }
    P operator/(T d) const { return P(x / d, y / d); }
    T dot(P p) const { return x * p.x + y * p.y; }
    T cross(P p) const { return x * p.y - y * p.x; }
    T cross(P a, P b) const { return (a - *this).cross(b - *this); }
    T dist2() const { return x * x + y * y; }
    ld dist() const { return sqrt((ld) dist2()); }
    // angle to x-axis in interval [-pi, pi]
    ld angle() const { return atan2(y, x); }
    P unit() const { return *this / dist(); } // makes dist()=1
    P perp() const { return P(-y, x); } // rotates +90 degrees
    P normal() const { return perp().unit(); }
    // returns point rotated 'a' radians ccw around the origin
    P rotate(ld a) const {
        return P(x * cos(a) - y * sin(a), x * sin(a) + y * cos(a));
    }
    friend ostream &operator<<(ostream &os, P p) {
        return os << "(" << p.x << "," << p.y << ")";
    }
};

typedef Point<ld> P;
bool circleInter(P a, P b, ld r1, ld r2, pair<P, P> &out) {
    if (a == b) {
        out = {a, b};
        return false;
    }
    P vec = b - a;
    ld d2 = vec.dist2(), sum = r1 + r2, dif = r1 - r2,
            p = (d2 + r1 * r1 - r2 * r2) / (d2 * 2), h2 = r1 * r1 - p * p * d2;
    if (sum * sum < d2 || dif * dif > d2) return false;
    P mid = a + vec * p, per = vec.perp() * sqrt(fmax(0, h2) / d2);
    out = {mid + per, mid - per};
    return true;
}

int n;
ld x[MAX], y[MAX], d[MAX];

ld Get() {
    string s;
    cin >> s;
    return stod(s);
}

const ld EPS = 1e-9;

using l2 = pair<ld, ld>;
vector<l2> oldcent;
bool G[MAX * MAX + 1];

bool OK(ld R) {
    vector<l2> cent;
    for (int i = 0; i <= 0; i++)
        for (int j = i + 1; j <= n; j++) {
            pair<P, P> c;
            if (circleInter(P(x[i], y[i]), P(x[j], y[j]), d[i], d[j], c)) {
                cent.emplace_back(c.first.x, c.first.y);
                cent.emplace_back(c.second.x, c.second.y);
            }
        }
    for (auto [cx, cy]: cent) {
        bool good = true;
        for (int i = 0; i <= n; i++) {
            if ((P(cx, cy) - P(x[i], y[i])).dist() > d[i] + EPS)
                good = false;
        }
        if (good)return true;
    }
     for (int j = 0; j < sz(oldcent); j++) {
        auto [cx, cy] = oldcent[j];
        
        bool good = G[j];
        for (int i = 0; i <= 0; i++) {
            if ((P(cx, cy) - P(x[i], y[i])).dist() > d[i] + EPS)
                good = false;
        }
        if (good)return true;
    }
    return false;
}

void solve() {
    cin >> n;
    x[0] = Get();
    y[0] = Get();
    for (int i = 1; i <= n; i++) {
        x[i] = Get();
        y[i] = Get();
        d[i] = Get();
        int bad = 0;
        for (int j = 0; j < i; j++) {
            if (x[i] == x[j] && y[i] == y[j]) {
                bad = 1;
                d[j] = min(d[j], d[i]);
            }
        }
        if (bad)
            i--, n--;
    }
    
    vector<P> cent;
    cent.push_back(P(x[0], y[0]));
    for (int i = 1; i <= n; i++) {
        P dir = P(x[0], y[0]) - P(x[i], y[i]);
        ld dis = dir.dist();
        if (dis > EPS) {
            cent.push_back(P{x[i], y[i]} + dir * (d[i] / dis));
        } else {
            cent.push_back(P{x[i], y[i]} + P(d[i], 0));
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            pair<P, P> c;
            if (circleInter(P(x[i], y[i]), P(x[j], y[j]), d[i], d[j], c)) {
                cent.emplace_back(c.first.x, c.first.y);
                cent.emplace_back(c.second.x, c.second.y);
            }
        }
    }

    auto check = [&](ld xi, ld yi) {
        for (int i = 1; i <= n; i++) {
            if ((P(xi, yi) - P(x[i], y[i])).dist() > d[i] + EPS)
                return false;
        }
        return true;
    };

    ld res = INF;
    for (auto &[xi, yi]: cent) {
        if (check(xi, yi)) {
            res = min(res, (P(xi, yi) - P(x[0], y[0])).dist());
        }
    }
    
    cout << setprecision(9) << fixed << res << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tc = 1;
//    cin >> tc;

    while (tc--)
        solve();
}