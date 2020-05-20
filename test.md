/***************************************************************************************************************

                                     This is Aeren's algorithm template library                     
                                            for competitive programming

****************************************************************************************************************


Category


1. Number Theory
	1.1. Modular Exponentiation, Modular Inverse
		156485479_1_1
	1.2. Extended Euclidean Algorithm / Linear Diophantine Equation
		156485479_1_2
	1.3. Linear Sieve
		156485479_1_3
	1.4. Combinatorics
		156485479_1_4
	1.5. Euler Totient Function
		156485479_1_5
	1.6. Millar Rabin Primality Test / Pollard Rho Algorithm
		156485479_1_6
	1.7. Tonelli Shanks Algorithm ( Solution to x^2 = a mod p )
		156485479_1_7
	1.8. Chinese Remainder Theorem
		156485479_1_8
	1.9. Lehman Factorization
		156485479_1_9
	1.10. Mobius Function
		156485479_1_10
	1.11. Polynomial Class
		156485479_1_11
	1.12. Discrete Log
		156485479_1_12


2. Numeric
	2.1. Linear Recurrence Relation Solver / Berlekamp Massey Algorithm
		156485479_2_1
	2.2. System of Linear Equations
		2.2.1. Coefficients in R
			156485479_2_2_1
		2.2.2. Coefficients in Z_p
			156485479_2_2_2
		2.2.3. Coefficients in Z_2
			156485479_2_2_3
	2.3. Matrix
		2.3.1. Entries in R
			156485479_2_3_1
		2.3.2. Entries in some semiring
			156485479_2_3_2
	2.4. Polynomial
		2.4.1. Convolution
			2.4.1.1 Addition Convolution
				2.4.1.1.1. Fast Fourier Transform
					156485479_2_4_1_1_1
				2.4.1.1.2. Number Theoric Transform
					156485479_2_4_1_1_2
			2.4.1.2. Bitwise XOR Convolution ( Fast Walsh Hadamard Transform )
				156485479_2_4_1_2
			2.4.1.3. Bitwise AND Convolution
				156485479_2_4_1_3
			2.4.1.4. Bitwise OR Convolution
				156485479_2_4_1_4
		2.4.2. Interpolation
			2.4.2.1. Slow Interpolation
				2.4.2.1.1.
					156485479_2_4_2_1_1
				2.4.2.1.2.
					156485479_2_4_2_1_2
			2.4.2.2. Fast Interpolation
				156485479_2_4_2_2 ( INCOMPLETE )
	2.5. Binary Search
		156485479_2_5
	2.6. DP Optimization
		2.6.1. Convex Hull Trick ( Line Containers / Li Chao Tree )
			2.6.1.1. Sorted Line Container
				156485479_2_6_1_1
			2.6.1.2. Line Container
				156485479_2_6_1_2
			2.6.1.3. Li Chao Tree
				156485479_2_6_1_3
		2.6.2. Divide and Conquer
			156485479_2_6_2
		2.6.3. Knuth
			156485479_2_6_3
		2.6.4. Lagrange ( Aliens Trick, Wqs Binary Search )
			156485479_2_6_4
	2.7. Kadane
		156485479_2_7
	2.8. BigInteger
		156485479_2_8
	2.9. Modular Arithmetics
		156485479_2_9
	2.10. Subinterval Sum
		156485479_2_10
	2.11. Divisor Iterator
		156485479_2_11
	2.12. Matroid
		2.12.1. Matroid Intersection
			156485479_2_12_1
		2.12.2. Matroid Union
			156485479_2_12_2


3. Data Structure
	3.1. Sparse Table / 2D
		156485479_3_1
	3.2. Segment Tree
		3.2.1. Simple Iterative Segment Tree
			156485479_3_2_1
		3.2.2. Iterative Segment Tree with Reversed Operation
			156485479_3_2_2
		3.2.3. 2D Segment Tree
			156485479_3_2_3
		3.2.4. Recursive Segment Tree
			156485479_3_2_4
		3.2.5. Lazy Dynamic Segment Tree
			156485479_3_2_5 
		3.2.6. Persistent Segment Tree
			156485479_3_2_6
	3.3. Fenwick Tree
		3.3.1. Simple Fenwick Tree
			156485479_3_3_1
		3.3.2. Fenwick Tree Supporting Range Queries of The Same Type
			156485479_3_3_2
		3.3.3. 2D Fenwick Tree
			156485479_3_3_3
	3.4. Wavelet Tree
		156485479_3_4
	3.5. Disjoint Set
		156485479_3_5
	3.6. Monotone Stack
		156485479_3_6
	3.7. Less-than-k Query / Distinct Value Query
		156485479_3_7
	3.8. Mo's Algorithm
		156485479_3_8
	3.9. Treap
		156485479_3_9
	3.10. Splay Tree ( INCOMPLETE )
		156485479_3_10
	3.11. Link Cut Tree ( INCOMPLETE )
		156485479_3_11
	3.12. Unital Sorter
		156485479_3_12


4. Graph
	4.1. Strongly Connected Component ( Tarjan's Algorithm )
		156485479_4_1
	4.2. Biconnected Component
		156485479_4_2
	4.3. Articulation Points
		156485479_4_3
	4.4. Flow Network
		4.4.1. Dinic's Maximum Flow Algorithm
			156485479_4_4_1
		4.4.2. Minimum Cost Maximum Flow Algorithm
			156485479_4_4_2
		4.4.3. Simple DFS Matching
			156485479_4_4_3
		4.4.4. Hopcroft Karp Algorithm
			156485479_4_4_4
		4.4.5. Hungarian Algorithm
			156485479_4_4_5
	4.5. Tree Algorithms
		4.5.1. LCA
			156485479_4_5_1
		4.5.2. Binary Lifting
			4.5.2.1. Unweighted Tree
				156485479_4_5_2_1
			4.5.2.2. Weighted Tree
				156485479_4_5_2_2
		4.5.3. Heavy Light Decomposition
			156485479_4_5_3
		4.5.4. Centroid / Centroid Decomposition
			156485479_4_5_4
		4.5.5. AHU Algorithm ( Rooted Tree Isomorphism ) / Tree Isomorphism
			156485479_4_5_5
	4.6. Shortest Path Tree
		4.6.1. On Sparse Graph ( Dijkstra, Bellman Ford, SPFA )
			156485479_4_6_1
		4.6.2. On Dense Graph ( Dijkstra, Floyd Warshall )
			156485479_4_6_2
	4.7. Minimum Spanning Forest
		156485479_4_7
	4.8. Topological Sort
		156485479_4_8
	4.9. Two Satisfiability
		156485479_4_9
	4.10. Euler Walk
		156485479_4_10


5. String
	5.1. Lexicographically Minimal Rotation
		156485479_5_1
	5.2. Palindromic Substrings ( Manacher's Algorithm )
		156485479_5_2
	5.3. Suffix Array and Kasai's Algorithm
		156485479_5_3
	5.4. Z Function
		156485479_5_4
	5.5. Aho Corasic Automaton
		156485479_5_5
	5.6. Prefix Function / Prefix Automaton
		156485479_5_6
	5.7. Polynomial Hash
		156485479_5_7
	5.8. Suffix Automaton
		156485479_5_8
	5.9. Suffix Tree ( INCOMPLETE )
		156485479_5_9
	5.10. Palindrome Tree / Eertree ( INCOMPLETE )
		156485479_5_10
	5.11. Levenshtein Automaton ( INCOMPLETE )
		156485479_5_11


6. Geometry
	6.1. 2D Geometry
		156485479_6_1
	6.2. Convex Hull and Minkowski Addition
		156485479_6_2
	6.3. KD Tree
		156485479_6_3


7. Miscellaneous
	7.1. Custom Hash Function for unordered_set and unordered map
		156485479_7_1
	7.2. Bump Allocator
		156485479_7_2


***************************************************************************************************************/

// 156485479_1_1
// Modular Exponentiation, Modular Inverse and Geometric Sum
// O(log e)
long long modexp(long long b, long long e, const long long &mod){
	long long res = 1;
	for(; e; b = b * b % mod, e >>= 1) if(e & 1) res = res * b % mod;
	return res;
}
long long modinv(long long a, const long long &mod){
	return modexp(a, mod - 2, mod);
}
long long modgeo(long long b, long long e, const long long &mod){
	if(e < 2) return e;
	long long res = 1;
	for(long long bit = 1 << 30 - __builtin_clz(e), p = 1; bit; bit >>= 1){
		res = res * (1 + p * b % mod) % mod, p = p * p % mod * b % mod;
		if(bit & e) res = (res + (p = p * b % mod)) % mod;
	}
	return res;
}
template<typename T>
T binexp(T b, long long e){
	T res = 1;
	for(; e; b *= b, e >>= 1) if(e & 1) res *= b;
	return res;
}
template<typename T>
T bingeo(const T &b, long long e){
	if(e < 2) return e;
	T res = 1, p = 1;
	for(long long bit = 1 << 30 - __builtin_clz(e); bit; bit >>= 1){
		res *= 1 + p * b, p *= p * b;
		if(bit & e) res += (p *= b);
	}
	return res;
}
template<typename T, typename BO>
T binexp(T b, long long e, BO bin_op, const T &id){
	T res = id;
	for(; e; b = bin_op(b, b), e >>= 1) if(e & 1) res = bin_op(res, b);
	return res;
}
template<typename T, typename AO, typename MO>
T bingeo(const T &b, long long e, AO add_op, const T &add_id, MO mul_op, const T &mul_id){
	if(e < 2) return e ? mul_id : add_id;
	T res = mul_id, p = mul_id;
	for(long long bit = 1 << 30 - __builtin_clz(e); bit; bit >>= 1){
		res = mul_op(res, add_op(mul_id, mul_op(p, b))), p = mul_op(mul_op(p, p), b);
		if(bit & e) res = add_op(res, p = mul_op(p, b));
	}
	return res;
}

// 156485479_1_2
// Extended Euclidean Algorithm / Linear Diophantine Equation
// O(max(log x, log y))
typedef long long ll;
ll euclid(ll a, ll b, ll &x, ll &y){
	if(b){
		ll d = euclid(b, a % b, y, x);
		return y -= a / b * x, d;
	}
	return x = 1, y = 0, a;
}
// solutions to ax + by = c where x in [xlow, xhigh] and y in [ylow, yhigh]
// cnt, leftsol, rightsol, gcd of a and b
typedef long long ll;
ll euclid(ll a, ll b, ll &x, ll &y){
	if(b){
		ll d = euclid(b, a % b, y, x);
		return y -= a / b * x, d;
	}
	return x = 1, y = 0, a;
}
array<ll, 6> solve_linear_diophantine(ll a, ll b, ll c, ll xlow, ll xhigh, ll ylow, ll yhigh){
	ll x, y, g = euclid(abs(a), abs(b), x, y);
	array<ll, 6> no_sol{0, 0, 0, 0, 0, g};
	if(c % g) return no_sol;
	x *= c / g, y *= c / g;
	if(a < 0) x = -x;
	if(b < 0) y = -y;
	a /= g, b /= g, c /= g;
	auto shift = [&](ll &x, ll &y, ll a, ll b, ll cnt){ x += cnt * b, y -= cnt * a; };
	int sign_a = a > 0 ? 1 : -1, sign_b = b > 0 ? 1 : -1;

	shift(x, y, a, b, (xlow - x) / b);
	if(x < xlow) shift(x, y, a, b, sign_b);
	if(x > xhigh) return no_sol;
	ll lx1 = x;
	
	shift(x, y, a, b, (xhigh - x) / b);
	if(x > xhigh) shift(x, y, a, b, -sign_b);
	ll rx1 = x;

	shift(x, y, a, b, -(ylow - y) / a);
	if(y < ylow) shift(x, y, a, b, -sign_a);
	if(y > yhigh) return no_sol;
	ll lx2 = x;

	shift(x, y, a, b, -(yhigh - y) / a);
	if(y > yhigh) shift(x, y, a, b, sign_a);
	ll rx2 = x;

	if(lx2 > rx2) swap(lx2, rx2);
	ll lx = max(lx1, lx2), rx = min(rx1, rx2);
	if(lx > rx) return no_sol;
	return {(rx - lx) / abs(b) + 1, lx, (c - lx * a) / b, rx, (c - rx * a) / b, g};
}

// 156485479_1_3
// Run linear sieve up to n
// O(n)
pair<vector<int>, vector<int>> linearsieve(int n){
	vector<int> lpf(n + 1), prime;
	prime.reserve(n + 1);
	for(int i = 2; i <= n; ++ i){
		if(!lpf[i]) lpf[i] = i, prime.push_back(i);
		for(int j = 0; j < int(prime.size()) && prime[j] <= lpf[i] && i * prime[j] <= n; ++ j){
			lpf[i * prime[j]] = prime[j];
		}
	}
	return {lpf, prime};
}

// 156485479_1_4
// Combinatorics
// O(N) preprocessing, O(1) per query
struct combinatorics{
	const long long N, mod;
	vector<long long> inv, fact, invfact;
	combinatorics(long long N, long long mod): N(N), mod(mod), inv(N + 1), fact(N + 1), invfact(N + 1){
		inv[1] = 1, fact[0] = fact[1] = invfact[0] = invfact[1] = 1;
		for(long long i = 2; i <= N; ++ i){
			inv[i] = (mod - mod / i * inv[mod % i] % mod) % mod;
			fact[i] = fact[i - 1] * i % mod;
			invfact[i] = invfact[i - 1] * inv[i] % mod;
		}
	}
	long long C(int n, int r){
		return n < r ? 0 : fact[n] * invfact[r] % mod * invfact[n - r] % mod;
	}
	long long P(int n, int r){
		return n < r ? 0 : fact[n] * invfact[n - r] % mod;
	}
	long long H(int n, int r){
		return C(n + r - 1, r);
	}
	long long Cat(int n, int k, int m){
		if(m <= 0) return 0;
		else if(k >= 0 && k < m) return C(n + k, k);
		else if(k < n + m) return (C(n + k, k) - C(n + k, k - m) + mod) % mod;
		else return 0;
	}
};

/*
Parity of n choose k: (k & (n - k))^1
*/

// 156485479_1_5
// Euler Totient Function
// O(sqrt(x))
long long phi(long long x){
	long long res = x;
	for(long long i = 2; i * i <= x; ++ i) if(x % i == 0){
		while(x % i == 0) x /= i;
		res -= res / i;
	}
	if(x > 1) res -= res / x;
	return res;
}
// Calculate phi(x) for all 1 <= x <= n
// O(n)
pair<vector<int>, vector<int>> linearsieve(int n){
	vector<int> lpf(n + 1), prime;
	prime.reserve(n + 1);
	for(int i = 2; i <= n; ++ i){
		if(!lpf[i]) lpf[i] = i, prime.push_back(i);
		for(int j = 0; j < int(prime.size()) && prime[j] <= lpf[i] && i * prime[j] <= n; ++ j){
			lpf[i * prime[j]] = prime[j];
		}
	}
	return {lpf, prime};
}
tuple<vector<int>, vector<int>, vector<int>> process_phi(int n){
	auto [lpf, prime] = linearsieve(n);
	vector<int> phi(n + 1, 1);
	for(int i = 3; i <= n; ++ i) phi[i] = phi[i / lpf[i]] * (i / lpf[i] % lpf[i] ? lpf[i] - 1 : lpf[i]);
	return {phi, lpf, prime};
}

// 156485479_1_6
// Millar Rabin Primality Test / Pollard Rho Algorithm
// 7 times slower than a^b mod m / O(n^{1/4}) gcd calls
typedef unsigned long long ull;
typedef long double ld;
ull mod_mul(ull a, ull b, ull M) {
	long long res = a * b - M * ull(ld(a) * ld(b) / ld(M));
	return res + M * (res < 0) - M * (res >= (long long)M);
}
ull mod_pow(ull b, ull e, ull mod) {
	ull res = 1;
	for (; e; b = mod_mul(b, b, mod), e /= 2) if (e & 1) res = mod_mul(res, b, mod);
	return res;
}
bool isprime(ull n){
	if(n < 2 || n % 6 % 4 != 1) return n - 2 < 2;
	vector<ull> A{2, 325, 9375, 28178, 450775, 9780504, 1795265022};
	ull s = __builtin_ctzll(n - 1), d = n >> s;
	for(auto &a: A){
		ull p = mod_pow(a, d, n), i = s;
		while(p != 1 && p != n - 1 && a % n && i --) p = mod_mul(p, p, n);
		if(p != n - 1 && i != s) return 0;
	}
	return 1;
}
ull pfactor(ull n){
	auto f = [n](ull x){ return (mod_mul(x, x, n) + 1) % n; };
	if(!(n & 1)) return 2;
	for(ull i = 2; ; ++ i){
		ull x = i, y = f(x), p;
		while((p = gcd(n + y - x, n)) == 1) x = f(x), y = f(f(y));
		if(p != n) return p;
	}
}
vector<ull> factorize(ull n){
	if(n == 1) return {};
	if(isprime(n)) return {n};
	ull x = pfactor(n);
	auto l = factorize(x), r = factorize(n / x);
	l.insert(l.end(), r.begin(), r.end());
	return l;
}

// 156485479_1_7
// Tonelli Shanks Algorithm ( Solution to x^2 = a mod p )
// O(log^2 p)
long long modexp(long long b, long long e, const long long &mod){
	long long res = 1;
	for(; e; b = b * b % mod, e >>= 1) if(e & 1) res = res * b % mod;
	return res;
}
long long sqrt(long long a, long long p){
	a %= p;
	if(a < 0) a += p;
	if(a == 0) return 0;
	assert(modexp(a, (p - 1) / 2, p) == 1);
	if(p % 4 == 3) return modexp(a, (p+1)/4, p);
	// a^(n+3)/8 or 2^(n+3)/8 * 2^(n-1)/4 works if p % 8 == 5
	long long s = p - 1, n = 2;
	int r = 0, m;
	while(s % 2 == 0) ++ r, s /= 2;
	/// find a non-square mod p
	while(modexp(n, (p - 1) / 2, p) != p - 1) ++ n;
	long long x = modexp(a, (s + 1) / 2, p);
	long long b = modexp(a, s, p), g = modexp(n, s, p);
	for(;; r = m){
		long long t = b;
		for(m = 0; m < r && t != 1; ++ m) t = t * t % p;
		if(m == 0) return x;
		long long gs = modexp(g, 1LL << (r - m - 1), p);
		g = gs * gs % p;
		x = x * gs % p;
		b = b * g % p;
	}
}

// 156485479_1_8
// Chinese Remainder Theorem (Return a number x which satisfies x = a mod m & x = b mod n)
// All the values has to be less than 2^30
// O(log(m + n))
long long euclid(long long x, long long y, long long &a, long long &b){
	if(y){
		long long d = euclid(y, x % y, b, a);
		return b -= x / y * a, d;
	}
	return a = 1, b = 0, x;
}
long long crt_coprime(long long a, long long m, long long b, long long n){
	long long x, y; euclid(m, n, x, y);
	long long res = a * (y + m) % m * n + b * (x + n) % n * m;
	if(res >= m * n) res -= m * n;
	return res;
}
long long crt(long long a, long long m, long long b, long long n){
	long long d = gcd(m, n);
	if(((b -= a) %= n) < 0) b += n;
	if(b % d) return -1; // No solution
	return d * crt_coprime(0LL, m/d, b/d, n/d) + a;
}

// 156485479_1_9
// Lehman Factorization / return a prime divisor of x
// x has to be equal or less than 10^14
// O(N^1/3)
long long primefactor(long long x){
	assert(x > 1);
	if(x <= 21){
		for(long long p = 2; p <= sqrt(x); ++ p) if(x % p == 0) return p;
		return x;
	}
	for(long long p = 2; p <= cbrt(x); ++ p) if(x % p == 0) return p;
	for(long long k = 1; k <= cbrt(x); ++ k){
		double t = 2 * sqrt(k * x);
		for(long long a = ceil(t); a <= floor(t + cbrt(sqrt(x)) / 4 / sqrt(k)); ++ a){
			long long b = a * a - 4 * k * x, s = sqrt(b);
			if(b == s * s) return gcd(a + s, x);
		}
	}
	return x;
}

// 156485479_1_10
// Mobius Function
// O(n)
pair<vector<int>, vector<int>> linearsieve(int n){
	vector<int> lpf(n + 1), prime;
	prime.reserve(n + 1);
	for(int i = 2; i <= n; ++ i){
		if(!lpf[i]) lpf[i] = i, prime.push_back(i);
		for(int j = 0; j < int(prime.size()) && prime[j] <= lpf[i] && i * prime[j] <= n; ++ j){
			lpf[i * prime[j]] = prime[j];
		}
	}
	return {lpf, prime};
}
tuple<vector<int>, vector<int>, vector<int>> process_mobius(int n){
	auto [lpf, prime] = linearsieve(n);
	vector<int> mobius(n + 1, 1);
	for(int i = 2; i <= n; ++ i) mobius[i] = (i / lpf[i] % lpf[i] ? -mobius[i / lpf[i]] : 0);
	return {mobius, lpf, prime};
}

// 156485479_1_11
// Polynomial Class
namespace algebra {
	int mod;
	const int inf = 1e9;
	const int magic = 500; // threshold for sizes to run the naive algo
	namespace fft {
		const int maxn = 1 << 18;
		typedef double ftype;
		typedef complex<ftype> point;
		point w[maxn];
		const ftype pi = acos(-1);
		bool initiated = false;
		void init(){
			if(!initiated){
				for(int i = 1; i < maxn; i <<= 1) for(int j = 0; j < i; ++ j) w[i + j] = polar(ftype(1), pi * j / i);
				initiated = true;
			}
		}
		template<typename T>
		void fft(T *in, point *out, int n, int k = 1){
			if(n == 1) *out = *in;
			else{
				n >>= 1;
				fft(in, out, n, 2 * k);
				fft(in + k, out + n, n, 2 * k);
				for(int i = 0; i < n; ++ i){
					auto t = out[i + n] * w[i + n];
					out[i + n] = out[i] - t;
					out[i] += t;
				}
			}
		}
		template<typename T>
		void mul_slow(vector<T> &a, const vector<T> &b){
			vector<T> res(int(a.size() + b.size()) - 1);
			for(size_t i = 0; i < a.size(); ++ i){
				for(size_t j = 0; j < int(b.size()); ++ j){
					res[i + j] += a[i] * b[j];
				}
			}
			a = res;
		}
		template<typename T>
		void mul(vector<T> &a, const vector<T> &b){
			if(int(min(a.size(), b.size())) < magic){
				mul_slow(a, b);
				return;
			}
			init();
			static const int shift = 15, mask = (1 << shift) - 1;
			size_t n = a.size() + b.size() - 1;
			while(__builtin_popcount(n) != 1) ++ n;
			a.resize(n);
			static point A[maxn], B[maxn];
			static point C[maxn], D[maxn];
			for(size_t i = 0; i < n; ++ i){
				A[i] = point(a[i] & mask, a[i] >> shift);
				if(i < b.size()) {
					B[i] = point(b[i] & mask, b[i] >> shift);
				} else {
					B[i] = 0;
				}
			}
			fft(A, C, n); fft(B, D, n);
			for(size_t i = 0; i < n; i++) {
				point c0 = C[i] + conj(C[(n - i) % n]);
				point c1 = C[i] - conj(C[(n - i) % n]);
				point d0 = D[i] + conj(D[(n - i) % n]);
				point d1 = D[i] - conj(D[(n - i) % n]);
				A[i] = c0 * d0 - point(0, 1) * c1 * d1;
				B[i] = c0 * d1 + d0 * c1;
			}
			fft(A, C, n); fft(B, D, n);
			reverse(C + 1, C + n);
			reverse(D + 1, D + n);
			int t = 4 * n;
			for(size_t i = 0; i < n; i++) {
				long long A0 = llround(real(C[i]) / t);
				T A1 = llround(imag(D[i]) / t);
				T A2 = llround(imag(C[i]) / t);
				a[i] = A0 + (A1 << shift) + (A2 << 2 * shift);
			}
			return;
		}
	}
	template<typename T>
	T bpow(T x, size_t n) {
		return n ? n % 2 ? x * bpow(x, n - 1) : bpow(x * x, n / 2) : T(1);
	}
	template<typename T>
	T bpow(T x, size_t n, T m) {
		return n ? n % 2 ? x * bpow(x, n - 1, m) % m : bpow(x * x % m, n / 2, m) : T(1);
	}
	template<typename T>
	T gcd(const T &a, const T &b) {
		return b == T(0) ? a : gcd(b, a % b);
	}
	template<typename T>
	T nCr(T n, int r) { // runs in O(r)
		T res(1);
		for(int i = 0; i < r; i++) {
			res *= (n - T(i));
			res /= (i + 1);
		}
		return res;
	}

	struct modular {
		long long r;
		modular() : r(0) {}
		modular(long long rr) : r(rr) {if(abs(r) >= mod) r %= mod; if(r < 0) r += mod;}
		modular inv() const {return bpow(*this, mod - 2);}
		modular operator * (const modular &t) const {return (r * t.r) % mod;}
		modular operator / (const modular &t) const {return *this * t.inv();}
		modular operator += (const modular &t) {r += t.r; if(r >= mod) r -= mod; return *this;}
		modular operator -= (const modular &t) {r -= t.r; if(r < 0) r += mod; return *this;}
		modular operator + (const modular &t) const {return modular(*this) += t;}
		modular operator - (const modular &t) const {return modular(*this) -= t;}
		modular operator *= (const modular &t) {return *this = *this * t;}
		modular operator /= (const modular &t) {return *this = *this / t;}
		
		bool operator == (const modular &t) const {return r == t.r;}
		bool operator != (const modular &t) const {return r != t.r;}
		
		operator long long() const {return r;}
	};

	istream& operator >> (istream &in, modular &x) {
		return in >> x.r;
	}
	
	
	template<typename T>
	struct poly {
		vector<T> a;
		
		void normalize() { // get rid of leading zeroes
			while(!a.empty() && a.back() == T(0)) {
				a.pop_back();
			}
		}
		
		poly(){}
		poly(T a0) : a{a0}{normalize();}
		poly(vector<T> t) : a(t){normalize();}
		
		poly operator += (const poly &t) {
			a.resize(max(a.size(), t.a.size()));
			for(size_t i = 0; i < t.a.size(); i++) {
				a[i] += t.a[i];
			}
			normalize();
			return *this;
		}
		poly operator -= (const poly &t) {
			a.resize(max(a.size(), t.a.size()));
			for(size_t i = 0; i < t.a.size(); i++) {
				a[i] -= t.a[i];
			}
			normalize();
			return *this;
		}
		poly operator + (const poly &t) const {return poly(*this) += t;}
		poly operator - (const poly &t) const {return poly(*this) -= t;}
		
		poly mod_xk(size_t k) const { // get same polynomial mod x^k
			k = min(k, a.size());
			return vector<T>(begin(a), begin(a) + k);
		}
		poly mul_xk(size_t k) const { // multiply by x^k
			poly res(*this);
			res.a.insert(begin(res.a), k, 0);
			return res;
		}
		poly div_xk(size_t k) const { // divide by x^k, dropping coefficients
			k = min(k, a.size());
			return vector<T>(begin(a) + k, end(a));
		}
		poly substr(size_t l, size_t r) const { // return mod_xk(r).div_xk(l)
			l = min(l, a.size());
			r = min(r, a.size());
			return vector<T>(begin(a) + l, begin(a) + r);
		}
		poly inv(size_t n) const { // get inverse series mod x^n
			assert(!is_zero());
			poly ans = a[0].inv();
			size_t a = 1;
			while(a < n) {
				poly C = (ans * mod_xk(2 * a)).substr(a, 2 * a);
				ans -= (ans * C).mod_xk(a).mul_xk(a);
				a *= 2;
			}
			return ans.mod_xk(n);
		}
		
		poly operator *= (const poly &t) {fft::mul(a, t.a); normalize(); return *this;}
		poly operator * (const poly &t) const {return poly(*this) *= t;}
		
		poly reverse(size_t n, bool rev = 0) const { // reverses and leaves only n terms
			poly res(*this);
			if(rev) { // If rev = 1 then tail goes to head
				res.a.resize(max(n, res.a.size()));
			}
			std::reverse(res.a.begin(), res.a.end());
			return res.mod_xk(n);
		}
		
		pair<poly, poly> divmod_slow(const poly &b) const { // when divisor or quotient is small
			vector<T> A(a);
			vector<T> res;
			while(A.size() >= b.a.size()) {
				res.push_back(A.back() / b.a.back());
				if(res.back() != T(0)) {
					for(size_t i = 0; i < b.a.size(); i++) {
						A[A.size() - i - 1] -= res.back() * b.a[b.a.size() - i - 1];
					}
				}
				A.pop_back();
			}
			std::reverse(begin(res), end(res));
			return {res, A};
		}
		
		pair<poly, poly> divmod(const poly &b) const { // returns quotiend and remainder of a mod b
			if(deg() < b.deg()) {
				return {poly{0}, *this};
			}
			int d = deg() - b.deg();
			if(min(d, b.deg()) < magic) {
				return divmod_slow(b);
			}
			poly D = (reverse(d + 1) * b.reverse(d + 1).inv(d + 1)).mod_xk(d + 1).reverse(d + 1, 1);
			return {D, *this - D * b};
		}
		
		poly operator / (const poly &t) const {return divmod(t).first;}
		poly operator % (const poly &t) const {return divmod(t).second;}
		poly operator /= (const poly &t) {return *this = divmod(t).first;}
		poly operator %= (const poly &t) {return *this = divmod(t).second;}
		poly operator *= (const T &x) {
			for(auto &it: a) {
				it *= x;
			}
			normalize();
			return *this;
		}
		poly operator /= (const T &x) {
			for(auto &it: a) {
				it /= x;
			}
			normalize();
			return *this;
		}
		poly operator * (const T &x) const {return poly(*this) *= x;}
		poly operator / (const T &x) const {return poly(*this) /= x;}
		
		void print() const {
			for(auto it: a) {
				cout << it << ' ';
			}
			cout << endl;
		}
		T eval(T x) const { // evaluates in single point x
			T res(0);
			for(int i = int(a.size()) - 1; i >= 0; i--) {
				res *= x;
				res += a[i];
			}
			return res;
		}
		
		T& lead() { // leading coefficient
			return a.back();
		}
		int deg() const { // degree
			return a.empty() ? -inf : a.size() - 1;
		}
		bool is_zero() const { // is polynomial zero
			return a.empty();
		}
		T operator [](int idx) const {
			return idx >= (int)a.size() || idx < 0 ? T(0) : a[idx];
		}
		
		T& coef(size_t idx) { // mutable reference at coefficient
			return a[idx];
		}
		bool operator == (const poly &t) const {return a == t.a;}
		bool operator != (const poly &t) const {return a != t.a;}
		
		poly deriv() { // calculate derivative
			vector<T> res;
			for(int i = 1; i <= deg(); i++) {
				res.push_back(T(i) * a[i]);
			}
			return res;
		}
		poly integr() { // calculate integral with C = 0
			vector<T> res = {0};
			for(int i = 0; i <= deg(); i++) {
				res.push_back(a[i] / T(i + 1));
			}
			return res;
		}
		size_t leading_xk() const { // Let p(x) = x^k * t(x), return k
			if(is_zero()) {
				return inf;
			}
			int res = 0;
			while(a[res] == T(0)) {
				res++;
			}
			return res;
		}
		poly log(size_t n) { // calculate log p(x) mod x^n
			assert(a[0] == T(1));
			return (deriv().mod_xk(n) * inv(n)).integr().mod_xk(n);
		}
		poly exp(size_t n) { // calculate exp p(x) mod x^n
			if(is_zero()) {
				return T(1);
			}
			assert(a[0] == T(0));
			poly ans = T(1);
			size_t a = 1;
			while(a < n) {
				poly C = ans.log(2 * a).div_xk(a) - substr(a, 2 * a);
				ans -= (ans * C).mod_xk(a).mul_xk(a);
				a *= 2;
			}
			return ans.mod_xk(n);
			
		}
		poly pow_slow(size_t k, size_t n) { // if k is small
			return k ? k % 2 ? (*this * pow_slow(k - 1, n)).mod_xk(n) : (*this * *this).mod_xk(n).pow_slow(k / 2, n) : T(1);
		}
		poly pow(size_t k, size_t n) { // calculate p^k(n) mod x^n
			if(is_zero()) {
				return *this;
			}
			if(k < magic) {
				return pow_slow(k, n);
			}
			int i = leading_xk();
			T j = a[i];
			poly t = div_xk(i) / j;
			return bpow(j, k) * (t.log(n) * T(k)).exp(n).mul_xk(i * k).mod_xk(n);
		}
		poly mulx(T x) { // component-wise multiplication with x^k
			T cur = 1;
			poly res(*this);
			for(int i = 0; i <= deg(); i++) {
				res.coef(i) *= cur;
				cur *= x;
			}
			return res;
		}
		poly mulx_sq(T x) { // component-wise multiplication with x^{k^2}
			T cur = x;
			T total = 1;
			T xx = x * x;
			poly res(*this);
			for(int i = 0; i <= deg(); i++) {
				res.coef(i) *= total;
				total *= cur;
				cur *= xx;
			}
			return res;
		}
		vector<T> chirpz_even(T z, int n) { // P(1), P(z^2), P(z^4), ..., P(z^2(n-1))
			int m = deg();
			if(is_zero()) {
				return vector<T>(n, 0);
			}
			vector<T> vv(m + n);
			T zi = z.inv();
			T zz = zi * zi;
			T cur = zi;
			T total = 1;
			for(int i = 0; i <= max(n - 1, m); i++) {
				if(i <= m) {vv[m - i] = total;}
				if(i < n) {vv[m + i] = total;}
				total *= cur;
				cur *= zz;
			}
			poly w = (mulx_sq(z) * vv).substr(m, m + n).mulx_sq(z);
			vector<T> res(n);
			for(int i = 0; i < n; i++) {
				res[i] = w[i];
			}
			return res;
		}
		vector<T> chirpz(T z, int n) { // P(1), P(z), P(z^2), ..., P(z^(n-1))
			auto even = chirpz_even(z, (n + 1) / 2);
			auto odd = mulx(z).chirpz_even(z, n / 2);
			vector<T> ans(n);
			for(int i = 0; i < n / 2; i++) {
				ans[2 * i] = even[i];
				ans[2 * i + 1] = odd[i];
			}
			if(n % 2 == 1) {
				ans[n - 1] = even.back();
			}
			return ans;
		}
		template<typename iter>
		vector<T> eval(vector<poly> &tree, int v, iter l, iter r) { // auxiliary evaluation function
			if(r - l == 1) {
				return {eval(*l)};
			} else {
				auto m = l + (r - l) / 2;
				auto A = (*this % tree[2 * v]).eval(tree, 2 * v, l, m);
				auto B = (*this % tree[2 * v + 1]).eval(tree, 2 * v + 1, m, r);
				A.insert(end(A), begin(B), end(B));
				return A;
			}
		}
		vector<T> eval(vector<T> x) { // evaluate polynomial in (x1, ..., xn)
			int n = x.size();
			if(is_zero()) {
				return vector<T>(n, T(0));
			}
			vector<poly> tree(4 * n);
			build(tree, 1, begin(x), end(x));
			return eval(tree, 1, begin(x), end(x));
		}
		template<typename iter>
		poly inter(vector<poly> &tree, int v, iter l, iter r, iter ly, iter ry) { // auxiliary interpolation function
			if(r - l == 1) {
				return {*ly / a[0]};
			} else {
				auto m = l + (r - l) / 2;
				auto my = ly + (ry - ly) / 2;
				auto A = (*this % tree[2 * v]).inter(tree, 2 * v, l, m, ly, my);
				auto B = (*this % tree[2 * v + 1]).inter(tree, 2 * v + 1, m, r, my, ry);
				return A * tree[2 * v + 1] + B * tree[2 * v];
			}
		}
	};
	template<typename T>
	poly<T> operator * (const T& a, const poly<T>& b) {
		return b * a;
	}
	
	template<typename T>
	poly<T> xk(int k) { // return x^k
		return poly<T>{1}.mul_xk(k);
	}

	template<typename T>
	T resultant(poly<T> a, poly<T> b) { // computes resultant of a and b
		if(b.is_zero()) {
			return 0;
		} else if(b.deg() == 0) {
			return bpow(b.lead(), a.deg());
		} else {
			int pw = a.deg();
			a %= b;
			pw -= a.deg();
			T mul = bpow(b.lead(), pw) * T((b.deg() & a.deg() & 1) ? -1 : 1);
			T ans = resultant(b, a);
			return ans * mul;
		}
	}
	template<typename iter>
	poly<typename iter::value_type> kmul(iter L, iter R) { // computes (x-a1)(x-a2)...(x-an) without building tree
		if(R - L == 1) {
			return vector<typename iter::value_type>{-*L, 1};
		} else {
			iter M = L + (R - L) / 2;
			return kmul(L, M) * kmul(M, R);
		}
	}
	template<typename T, typename iter>
	poly<T> build(vector<poly<T>> &res, int v, iter L, iter R) { // builds evaluation tree for (x-a1)(x-a2)...(x-an)
		if(R - L == 1) {
			return res[v] = vector<T>{-*L, 1};
		} else {
			iter M = L + (R - L) / 2;
			return res[v] = build(res, 2 * v, L, M) * build(res, 2 * v + 1, M, R);
		}
	}
	template<typename T>
	poly<T> inter(vector<T> x, vector<T> y) { // interpolates minimum polynomial from (xi, yi) pairs
		int n = x.size();
		vector<poly<T>> tree(4 * n);
		return build(tree, 1, begin(x), end(x)).deriv().inter(tree, 1, begin(x), end(x), begin(y), end(y));
	}
};

using namespace algebra;
typedef poly<modular> polym;
mod = 1e9 + 7;

// 156485479_1_12
// Discrete Log
// O(sqrt(mod) log mod)
// a and mod must be relatively prime
long long modexp(long long b, long long e, const long long &mod){
	long long res = 1;
	for(; e; b = b * b % mod, e >>= 1) if(e & 1) res = res * b % mod;
	return res;
}
int discrete_log(int a, int b, int mod){
	int n = (int)sqrt(mod + .0) + 1;
	map<int, int> q;
	for(int p = n; p >= 1; -- p) q[modexp(a, p * n, mod)] = p;
	for(int p = 0; p <= n; ++ p){
		int cur = (modexp(a, p, mod) * b) % mod;
		if(q.count(cur)){
			int ans = q[cur] * n - p;
			return ans;
		}
	}
	return -1;
}

// 156485479_2_1
// Linear Recurrence Relation Solver / Berlekamp - Massey Algorithm
// O(N^2 log n) / O(N^2)
long long modexp(long long b, long long e, const long long &mod){
	long long res = 1;
	for(; e; b = b * b % mod, e >>= 1) if(e & 1) res = res * b % mod;
	return res;
}
long long modinv(long long a, const long long &mod){
	return modexp(a, mod - 2, mod);
}
struct recurrence{
	int N;
	vector<long long> init, coef;
	const long long mod;
	recurrence(const vector<long long> &init, const vector<long long> &coef, long long mod): N(coef.size()), init(init), coef(coef), mod(mod){ }
	// Berlekamp Massey Algorithm
	recurrence(const vector<long long> &s, long long mod): mod(mod){
		int n = int(s.size());
		N = 0;
		vector<long long> B(n), T;
		coef.resize(n);
		coef[0] = B[0] = 1;
		long long b = 1;
		for(int i = 0, m = 0; i < n; ++ i){
			++ m;
			long long d = s[i] % mod;
			for(int j = 1; j <= N; ++ j) d = (d + coef[j] * s[i - j]) % mod;
			if(!d) continue;
			T = coef;
			long long c = d * modinv(b, mod) % mod;
			for(int j = m; j < n; ++ j) coef[j] = (coef[j] - c * B[j - m]) % mod;
			if(2 * N > i) continue;
			N = i + 1 - N, B = T, b = d, m = 0;
		}
		coef.resize(N + 1), coef.erase(coef.begin());
		for(auto &x: coef) x = (mod - x) % mod;
		reverse(coef.begin(), coef.end());
		init.resize(N);
		for(int i = 0; i < N; ++ i) init[i] = s[i] % mod;
	}
	long long operator[](long long n) const{
		auto combine = [&](vector<long long> a, vector<long long> b){
			vector<long long> res(2 * N + 1);
			for(int i = 0; i <= N; ++ i) for(int j = 0; j <= N; ++ j) res[i + j] = (res[i + j] + a[i] * b[j]) % mod;
			for(int i = N << 1; i > N; -- i) for(int j = 0; j < N; ++ j) res[i - 1 - j] = (res[i - 1 - j] + res[i] * coef[N - 1 - j]) % mod;
			res.resize(N + 1);
			return res;
		};
		vector<long long> pol(N + 1), e(pol);
		pol[0] = e[1] = 1;
		for(++ n; n; n >>= 1, e = combine(e, e)) if(n & 1) pol = combine(pol, e);
		long long res = 0;
		for(int i = 0; i < N; ++ i) res = (res + pol[i + 1] * init[i]) % mod;
		return res;
	}
};

// 156485479_2_2_1
// Find a solution of the system of linear equations. Return -1 if no sol, rank otherwise.
// O(n^2 m)
const double eps = 1e-12;
int solve_linear_equations(const vector<vector<double>> &AA, vector<double> &x, const vector<double> &bb){
	auto A = AA;
	auto b = bb;
	int n = int(A.size()), m = int(A[0].size()), rank = 0, br, bc;
	vector<int> col(m);
	iota(col.begin(), col.end(), 0);
	for(int i = 0; i < n; ++ i){
		double v, bv = 0;
		for(int r = i; r < n; ++ r) for(int c = i; c < m; ++ c) if((v = fabs(A[r][c])) > bv) br = r, bc = c, bv = v;
		if(bv <= eps){
			for(int j = i; j < n; ++ j) if(fabs(b[j]) > eps) return -1;
			break;
		}
		swap(A[i], A[br]), swap(b[i], b[br]), swap(col[i], col[bc]);
		for(int j = 0; j < n; ++ j) swap(A[j][i], A[j][bc]);
		bv = 1 / A[i][i];
		for(int j = i + 1; j < n; ++ j){
			double fac = A[j][i] * bv;
			b[j] -= fac * b[i];
			for(int k = i + 1; k < m; ++ k) A[j][k] -= fac * A[i][k];
		}
		++ rank;
	}
	x.resize(m);
	for(int i = rank; i --; ){
		b[i] /= A[i][i];
		x[col[i]] = b[i];
		for(int j = 0; j < i; ++ j) b[j] -= A[j][i] * b[i];
	}
	return rank;
}

// 156485479_2_2_3
// Find a solution of the system of linear equations in Z2. Return -1 if no sol, rank otherwise.
// O(n^2 m)
typedef bitset<1000> bs;
int solve_linear_equations(const vector<bs> &AA, bs &x, const vector<int> &bb, int m){
	vector<bs> A(AA);
	vector<int> b(bb);
	int n = int(A.size()), rank = 0, br;
	vector<int> col(m);
	iota(col.begin(), col.end(), 0);
	for(int i = 0; i < n; ++ i){
		for(br = i; br < n; ++ br) if(A[br].any()) break;
		if(br == n){
			for(int j = i; j < n; ++ j) if(b[j]) return -1;
			break;
		}
		int bc = (int)A[br]._Find_next(i-1);
		swap(A[i], A[br]);
		swap(b[i], b[br]);
		swap(col[i], col[bc]);
		for(int j = 0; j < n; ++ j) if(A[j][i] != A[j][bc]) A[j].flip(i), A[j].flip(bc);
		for(int j = i + 1; j < n; ++ j) if(A[j][i]) b[j] ^= b[i], A[j] ^= A[i];
		++ rank;
	}
	x = bs();
	for(int i = rank; i --; ){
		if (!b[i]) continue;
		x[col[i]] = 1;
		for(int j = 0; j < i; ++ j) b[j] ^= A[j][i];
	}
	return rank;
}
// Dynamic size
int solve_linear_equations(vector<vector<int>> A, vector<int>& x, vector<int> b){
	int n = int(A.size()), m = int(A[0].size()), rank = 0, br;
	vector<int> col(m);
	iota(col.begin(), col.end(), 0);
	for(int i = 0; i < n; ++ i){
		for(br = i; br < n; ++ br) if(any_of(A[br].begin(), A[br].end(), [&](int x){ return x; })) break;
		if(br == n){
			for(int j = i; j < n; ++ j) if(b[j]) return -1;
			break;
		}
		int bc = i;
		for(; !A[br][bc]; ++ bc);
		swap(A[i], A[br]);
		swap(b[i], b[br]);
		swap(col[i], col[bc]);
		for(int j = 0; j < n; ++ j) if(A[j][i] != A[j][bc]){
			A[j][i] = !A[j][i];
			A[j][bc] = !A[j][bc];
		}
		for(int j = i + 1; j < n; ++ j) if(A[j][i]){
			b[j] ^= b[i];
			for(int k = 0; k < m; ++ k){
				A[j][k] ^= A[i][k];
			}
		}
		++ rank;
	}
	x = vector<int>(m);
	for(int i = rank; i --; ){
		if (!b[i]) continue;
		x[col[i]] = 1;
		for(int j = 0; j < i; ++ j) b[j] ^= A[j][i];
	}
	return rank;
}

// 156485479_2_3_1
// Matrix for Z_p
struct matrix: vector<vector<long long>>{
	int N, M;
	const long long mod;
	matrix(int N, int M, long long mod, bool is_id = false): N(N), M(M), mod(mod){
		resize(N, vector<long long>(M));
		if(is_id) for(int i = 0; i < min(N, M); ++ i) (*this)[i][i] = 1;
	}
	matrix(const vector<vector<long long>> &arr, long long mod): N(arr.size()), M(arr[0].size()), mod(mod){
		resize(N);
		for(int i = 0; i < N; ++ i) (*this)[i] = arr[i];
	}
	bool operator==(const matrix &otr) const{
		if(N != otr.N || M != otr.M) return false;
		for(int i = 0; i < N; ++ i) for(int j = 0; j < M; ++ j) if((*this)[i][j] != otr[i][j]) return false;
		return true;
	}
	matrix &operator=(const matrix &otr){
		N = otr.N, M = otr.M;
		resize(N);
		for(int i = 0; i < N; ++ i) (*this)[i] = otr[i];
		return *this;
	}
	matrix operator+(const matrix &otr) const{
		matrix res(N, M, mod);
		for(int i = 0; i < N; ++ i) for(int j = 0; j < M; ++ j) res[i][j] = ((*this)[i][j] + otr[i][j]) % mod;
		return res;
	}
	matrix &operator+=(const matrix &otr){
		return *this = *this + otr;
	}
	matrix operator*(const matrix &otr) const{
		assert(M == otr.N);
		int L = otr.M;
		matrix res(N, M, mod);
		for(int i = 0; i < N; ++ i) for(int j = 0; j < L; ++ j) for(int k = 0; k < M; ++ k) (res[i][j] += (*this)[i][k] * otr[k][j]) %= mod;
		return res;
	}
	matrix &operator*=(const matrix &otr){
		return *this = *this * otr;
	}
	matrix operator^(long long e) const{
		assert(N == M);
		matrix res(N, N, mod, 1), b(*this);
		for(; e; b *= b, e >>= 1) if(e & 1) res *= b;
		return res;
	}
	matrix &operator^=(const long long e){
		return *this = *this ^ e;
	}
	long long det() const{
		assert(N == M);
		vector<vector<long long>> temp = *this;
		long long res = 1;
		for(int i = 0; i < N; ++ i){
			for(int j = i + 1; j < N; ++ j){
				while(temp[j][i]){
					long long t = temp[i][i] / temp[j][i];
					if(t) for(int k = i; i < N; ++ k) temp[i][k] = (temp[i][k] - temp[j][k] * t) % mod;
					std::swap(temp[i], temp[j]);
					res *= -1;
				}
			}
			res = (res + mod) * temp[i][i] % mod;
			if(!res) return 0;
		}
		return res;
	}
};

// 156485479_2_3_2
// Matrix for general semiring
// T must support +, *, !=, <<, >>
template<typename T>
struct matrix: vector<vector<T>>{
	int N, M;
	const T add_id, mul_id;
	matrix(int N, int M, const T &add_id, const T &mul_id, bool is_id = false): N(N), M(M), add_id(add_id), mul_id(mul_id){
		this->resize(N, vector<T>(M, add_id));
		if(is_id) for(int i = 0; i < min(N, M); ++ i) (*this)[i][i] = mul_id;
	}
	matrix(const vector<vector<T>> &arr, const T &add_id, const T &mul_id): N(arr.size()), M(arr[0].size()), add_id(add_id), mul_id(mul_id){
		this->resize(N, vector<T>(M, add_id));
		for(int i = 0; i < N; ++ i) for(int j = 0; j < M; ++ j) (*this)[i][j] = arr[i][j];
	}
	bool operator==(const matrix &otr) const{
		if(N != otr.N || M != otr.M) return false;
		for(int i = 0; i < N; ++ i) for(int j = 0; j < M; ++ j) if((*this)[i][j] != otr[i][j]) return false;
		return true;
	}
	matrix &operator=(const matrix &otr){
		N = otr.N, M = otr.M;
		this->resize(N);
		for(int i = 0; i < N; ++ i) (*this)[i] = otr[i];
		return *this;
	}
	matrix operator+(const matrix &otr) const{
		matrix res(N, M, add_id, mul_id);
		for(int i = 0; i < N; ++ i) for(int j = 0; j < M; ++ j) res[i][j] = (*this)[i][j] + otr[i][j];
		return res;
	}
	matrix &operator+=(const matrix &otr){
		return *this = *this + otr;
	}
	matrix operator*(const matrix &otr) const{
		assert(M == otr.N);
		int L = otr.M;
		matrix res(N, M, add_id, mul_id);
		for(int i = 0; i < N; ++ i) for(int j = 0; j < L; ++ j) for(int k = 0; k < M; ++ k) res[i][j] = res[i][j] + (*this)[i][k] * otr[k][j];
		return res;
	}
	matrix &operator*=(const matrix &otr){
		return *this = *this * otr;
	}
	matrix operator^(long long e) const{
		assert(N == M);
		matrix res(N, N, add_id, mul_id, true), b(*this);
		for(; e; b *= b, e >>= 1) if(e & 1) res *= b;
		return res;
	}
	matrix &operator^=(const long long e){
		return *this = *this ^ e;
	}
};

// 156485479_2_4_1_1_1
// Fast Fourier Transformation.
// Size must be a power of two.
// O(n log n)
typedef complex<double> cd;
const double PI = acos(-1);
void fft(vector<cd> &f, bool invert){
	int n = int(f.size());
	for(int i = 1, j = 0; i < n; ++ i){
		int bit = n >> 1;
		for(; j & bit; bit >>= 1) j ^= bit;
		j ^= bit;
		if(i < j) swap(f[i], f[j]);
	}
	for(int len = 2; len <= n; len <<= 1){
		double theta = 2 * PI / len * (invert ? -1 : 1);
		cd w(cos(theta), sin(theta));
		for(int i = 0; i < n; i += len){
			cd wj(1);
			for(int j = 0; j < len / 2; ++ j, wj *= w){
				cd u = f[i + j], v = wj * f[i + j + len / 2];
				f[i + j] = u + v, f[i + j + len / 2] = u - v;
			}
		}
	}
	if(invert) for(auto &c: f) c /= n;
}
vector<long long> polymul(const vector<long long> &a, const vector<long long> &b){
	vector<cd> f(a.begin(), a.end()), g(b.begin(), b.end());
	int n = 1;
	while(n < int(a.size() + b.size())) n <<= 1;
	f.resize(n), g.resize(n);
	fft(f, false), fft(g, false);
	for(int i = 0; i < n; ++ i) f[i] *= g[i];
	fft(f, true);
	vector<long long> res(n);
	for(int i = 0; i < n; ++ i) res[i] = round(f[i].real());
	while(!res.empty() && !res.back()) res.pop_back();
	return res;
}

// 156485479_2_4_1_1_2
// Number Theoric Transformation. Use (998244353, 15311432, 1 << 23) or (7340033, 5, 1 << 20)
// Size must be a power of two
// O(n log n)
long long modexp(long long b, long long e, const long long &mod){
	long long res = 1;
	for(; e; b = b * b % mod, e >>= 1) if(e & 1) res = res * b % mod;
	return res;
}
long long modinv(long long a, const long long &mod){
	return modexp(a, mod - 2, mod);
}
const long long mod = 998244353, root = 15311432, root_pw = 1 << 23, root_1 = modinv(root, mod);
void ntt(vector<long long> &a, bool invert){
    int n = int(a.size());
    for(int i = 1, j = 0; i < n; ++ i){
        int bit = n >> 1;
        for(; j & bit; bit >>= 1) j ^= bit;
        j ^= bit;
        if(i < j) swap(a[i], a[j]);
    }
    for(int len = 2; len <= n; len <<= 1){
        long long wlen = invert ? root_1 : root;
        for(int i = len; i < root_pw; i <<= 1) wlen = wlen * wlen % mod;
        for(int i = 0; i < n; i += len){
            long long w = 1;
            for(int j = 0; j < len / 2; ++ j){
                long long u = a[i + j], v = a[i + j + len / 2] * w % mod;
                a[i + j] = u + v < mod ? u + v : u + v - mod;
                a[i + j + len / 2] = u - v >= 0 ? u - v : u - v + mod;
                w = w * wlen % mod;
            }
        }
    }
    if(invert){
        long long n_1 = modinv(n, mod);
        for(auto &x: a) x = x * n_1 % mod;
    }
}

// 156485479_2_4_1_2
// Bitwise XOR Transformation ( Fast Walsh Hadamard Transformation, FWHT ).
// Size must be a power of two.
// Transformation   1  1     Inversion   1  1     
//     Matrix       1 -1      Matrix     1 -1   TIMES  1/2
// O(n log n)
template<typename T>
void xort(vector<T> &p, bool inverse){
	int n = int(p.size());
	for(int len = 1; 2 * len <= n; len <<= 1){
		for(int i = 0; i < n; i += 2 * len){
			for(int j = 0; j < len; ++ j){
				T u = p[i + j], v = p[i + j + len];
				p[i + j] = u + v, p[i + j + len] = u - v;
			}
		}
	}
	if(inverse) for(int i = 0; i < n; ++ i) p[i] /= n;
	return p;
}

// 156485479_2_4_1_3
// Bitwise AND Transformation.
// Size must be a power of two.
// Transformation   0  1     Inversion   -1  1
//     Matrix       1  1      Matrix      1  0
// O(n log n)
template<typename T>
void andt(vector<T> &p, bool inverse){
	int n = int(p.size());
	for(int len = 1; 2 * len <= n; len <<= 1){
		for(int i = 0; i < n; i += 2 * len){
			for(int j = 0; j < len; ++ j){
				T u = p[i + j], v = p[i + j + len];
				if(!inverse) p[i + j] = v, p[i + j + len] = u + v;
				else p[i + j] = -u + v, p[i + j + len] = u;
			}
		}
	}
}

// 156485479_2_4_1_4
// Bitwise OR Transformation.
// Size must be a power of two
// Transformation   1  1     Inversion    0  1
//     Matrix       1  0      Matrix      1 -1
// O(n log n)
template<typename T>
void ort(vector<T> &p, bool inverse){
	int n = int(p.size());
	for(int len = 1; 2 * len <= n; len <<= 1){
		for(int i = 0; i < n; i += 2 * len){
			for(int j = 0; j < len; ++ j){
				T u = p[i + j], v = p[i + j + len];
				if(!inverse) p[i + j] = u + v, p[i + j + len] = u;
				else p[i + j] = v, p[i + j + len] = u - v;
			}
		}
	}
}

// 156485479_2_4_2_1_1
// Polynomial Interpolation
// O(n ^ 2)
vector<double> interpolate(vector<double> x, vector<double> y){
	int n = int(x.size());
	vector<double> res(n), temp(n);
	for(int k = 0; k < n; ++ k) for(int i = k + 1; i < n; ++ i){
		y[i] = (y[i] - y[k]) / (x[i] - x[k]);
	}
	double last = 0; temp[0] = 1;
	for(int k = 0; k < n; ++ k) for(int i = 0; i < n; ++ i){
		res[i] += y[k] * temp[i];
		swap(last, temp[i]);
		temp[i] -= last * x[k];
	}
	return res;
}

// 156485479_2_4_2_1_2
// Polynomial Interpolation
// O(n ^ 2)
long long modexp(long long b, long long e, const long long &mod){
	long long res = 1;
	for(; e; b = b * b % mod, e >>= 1) if(e & 1) res = res * b % mod;
	return res;
}
long long modinv(long long a, const long long &mod){
	return modexp(a, mod - 2, mod);
}
vector<long long> interpolate(vector<long long> x, vector<long long> y, long long mod){
	int n = int(x.size());
	vector<long long> res(n), temp(n);
	for(int k = 0; k < n; ++ k){
		for(int i = k + 1; i < n; ++ i){
			y[i] = (y[i] - y[k]) * modinv(x[i] - x[k], mod) % mod;
		}
	}
	long long last = 0; temp[0] = 1;
	for(int k = 0; k < n; ++ k){
		for(int i = 0; i < n; ++ i){
			res[i] = (res[i] + y[k] * temp[i]) % mod;
			swap(last, temp[i]);
			temp[i] = (temp[i] - last * x[k] % mod + mod) % mod;
		}
	}
	return res;
}

// 156485479_2_4_2_2
// Polynomial Interpolation
// O(n log n)
// (INCOMPLETE!)

// 156485479_2_5
// Binary Search
// O(log(high - low)) applications of p
template<typename Pred>
long long custom_binary_search(long long low, long long high, Pred p, bool is_left = true){
	assert(low < high);
	if(is_left){
		while(high - low > 1){
			long long mid = low + (high - low >> 1);
			p(mid) ? low = mid : high = mid;
		}
		return low;
	}
	else{
		while(high - low > 1){
			long long mid = low + (high - low >> 1);
			p(mid) ? high = mid : low = mid;
		}
		return high;
	}
}
// Binary search for numbers with the same remainder mod step
template<typename Pred>
long long custom_binary_search(long long low, long long high, const long long &step, Pred p, bool is_left = true){
	assert(low < high && (high - low) % step == 0);
	const long long rem = (low % step + step) % step;
	if(is_left){
		while(high - low > step){
			long long mid = low + (high - low >> 1);
			mid = mid / step * step + rem;
			p(mid) ? low = mid : high = mid;
		}
		return low;
	}
	else{
		while(high - low > step){
			long long mid = low + (high - low >> 1);
			mid = mid / step * step + rem;
			p(mid) ? high = mid : low = mid;
		}
		return high;
	}
}

// 156485479_2_6_1_1
// Sorted Line Container
// O(log N) per query, amortized O(1) for everything else
struct line{
	long long d, k, p;
	long long eval(long long x){ return d * x + k; }
};
template<bool GET_MAX = true>
struct sorted_line_container: deque<line>{
	static constexpr long long inf = numeric_limits<long long>::max();
	// (for doubles, use inf = 1/.0, div(a,b) = a/b)
	long long div(long long a, long long b){ return a / b - ((a ^ b) < 0 && a % b); }
	bool isect_front(iterator x, iterator y){
		if(y == end()){ x->p = inf; return false; }
		else{ x->p = div(y->k - x->k, x->d - y->d); return x->p >= y->p; }
	}
	bool isect_back(reverse_iterator x, reverse_iterator y){
		if(x == rend()) return false;
		else{ x->p = div(y->k - x->k, x->d - y->d); return x->p >= y->p; }
	}
	void push(line L){
		if(!GET_MAX) L.d = -L.d, L.k = -L.k;
		if(empty() || L.d < front().d){
			L.p = 0, push_front(L), isect_front(begin(), ++ begin());
			while(int(size()) >= 2 && isect_front(begin(), ++ begin())) erase(++ begin());
		}
		else if(L.d > back().d){
			L.p = inf, push_back(L); isect_back(++ rbegin(), rbegin());
			while(int(size()) >= 2 && isect_back(++ ++ rbegin(), ++ rbegin())) erase(-- -- end()), isect_back(++ rbegin(), rbegin());
		}
		else assert(false);
	}
	long long dec_query(long long x){
		while(int(size()) >= 2 && rbegin()->eval(x) <= (++ rbegin())->eval(x)) pop_back(); rbegin()->p = inf;
		return rbegin()->eval(x) * (GET_MAX ? 1 : -1);
	}
	long long inc_query(long long x){
		while(int(size()) >= 2 && begin()->eval(x) <= (++ begin())->eval(x)) pop_front();
		return begin()->eval(x) * (GET_MAX ? 1 : -1);
	}
	long long query(long long x){
		if(int(size()) == 1) return begin()->eval(x) * (GET_MAX ? 1 : -1);
		int low = 0, high = int(size()) - 1;
		if(begin()->eval(x) >= (++ begin())->eval(x)) return begin()->eval(x) * (GET_MAX ? 1 : -1);
		while(high - low > 1){
			int mid = low + high >> 1;
			(*this)[mid].eval(x) < (*this)[mid + 1].eval(x) ? low = mid : high = mid;
		}
		return (*this)[low + 1].eval(x) * (GET_MAX ? 1 : -1);
	}
};

// 156485479_2_6_1_2
// Line Container / Add lines of form d*x + k and query max at pos x
// O(log N) per query
struct line{
	mutable long long d, k, p;
	bool operator<(const line &otr) const{ return d < otr.d; }
	bool operator<(long long x) const{ return p < x;}
};
template<bool GET_MAX = true>
struct line_container: multiset<line, less<>>{
	// (for doubles, use inf = 1/.0, div(a,b) = a/b)
	static constexpr long long inf = numeric_limits<long long>::max();
	long long div(long long a, long long b){ return a / b - ((a ^ b) < 0 && a % b); }
	bool isect(iterator x, iterator y){
		if(y == end()){ x->p = inf; return false; }
		if(x->d == y->d) x->p = x->k > y->k ? inf : -inf;
		else x->p = div(y->k - x->k, x->d - y->d);
		return x->p >= y->p;
	}
	void push(line L){
		if(!GET_MAX) L.d = -L.d, L.k = -L.k;
		L.p = 0;
		auto z = insert(L), y = z ++, x = y;
		while(isect(y, z)) z = erase(z);
		if(x != begin() && isect(-- x, y)) isect(x, y = erase(y));
		while((y = x) != begin() && (-- x)->p >= y->p) isect(x, erase(y));
	}
	long long query(long long x){
		assert(!empty());
		auto l = *lower_bound(x);
		return (l.d * x + l.k) * (GET_MAX ? 1 : -1);
	}
};

// 156485479_2_6_1_3
// Li Chao Tree
// O(log N) per update and query
struct line{
	long long d, k;
	line(long long d = 0, long long k = -(long long)9e18): d(d), k(k){ }
	long long eval(long long x){ return d * x + k; }
	bool majorize(line X, long long L, long long R){ return eval(L) >= X.eval(L) && eval(R) >= X.eval(R); }
};
template<bool GET_MAX = true>
struct lichao{
	lichao *l = NULL, *r = NULL;
	line S;
	lichao(): S(line()){ }
	void rm(){
		if(l) l->rm();
		if(r) r->rm();
		delete this;
	}
	void mc(int i){
		if(i){ if(!r) r = new lichao(); }
		else{ if(!l) l = new lichao(); }
	}
	long long pq(long long X, long long L, long long R){
		long long ans = S.eval(X), M = L + R >> 1;
		if(X < M) return max(ans, l ? l->pq(X, L, M) : -(long long)9e18);
		else return max(ans, r ? r->pq(X, M, R) : -(long long)9e18);
	}
	long long query(long long X, long long L, long long R){
		return pq(X, L, R) * (GET_MAX ? 1 : -1);
	}
	void pp(line X, long long L, long long R){
		if(X.majorize(S, L, R)) swap(X, S);
		if(S.majorize(X, L, R)) return;
		if(S.eval(L) < X.eval(L)) swap(X, S);
		long long M = L + R >> 1;
		if(X.eval(M) > S.eval(M)) swap(X, S), mc(0), l->pp(X, L, M);
		else mc(1), r->pp(X, M, R);
	}
	void push(line X, long long L, long long R){
		if(!GET_MAX) X.d = -X.d, X.k = -X.k;
		pp(X, L, R);
	}
};

// 156485479_2_6_2
// Divide and Conquer DP Optimization
// Recurrence relation of form dp_next[i] = min{j in [0, i)} (dp[j] + C[j][i])
// Must satisfy opt[j] <= opt[j + 1]
// Special case: for all a<=b<=c<=d, C[a][c] + C[b][d] <= C[a][d] + C[b][d] ( C is a Monge array )
// O(N log N)
template<typename T>
void DCDP(vector<T> &dp, vector<T> &dp_next, const vector<vector<T>> &C, int low, int high, int optl, int optr){
	if(low >= high) return;
	int mid = low + high >> 1;
	pair<T, int> res{numeric_limits<T>::max(), -1};
	for(int i = optl; i < min(mid, optr); ++ i) res = min(res, {dp[i] + C[i][mid], i});
	dp_next[mid] = res.first;
	DCDP(dp, dp_next, C, low, mid, optl, res.second + 1);
	DCDP(dp, dp_next, C, mid + 1, high, res.second, optr);
}

// 156485479_2_6_3
// Knuth DP Optimization
// Recurrence relation of form dp[i][j] = min{k in [i, j)} (dp[i][k] + dp[k][j] + C[i][j])
// Must satisfy C[a][c] + C[b][d] <= C[a][d] + C[b][d] (C is a monge array) and C[a][d] >= C[b][c] for all a<=b<=c<=d
// It can be proved that opt[i][j - 1] <= opt[i][j] <= opt[i + 1][j]
// Fill the dp table in increasing order of j - i.
// O(N^2)

// 156485479_2_6_4
// Lagrange DP Optimization ( Aliens Trick, Wqs Binary Search )
// Recurrence relation of form dp[i][j] = min{k in [0, j)} (dp[i - 1][k] + C[k + 1][j])
// dp[x][N] must be convex / concave
// Special case: for all a<=b<=c<=d, C[a][c] + C[b][d] <= C[a][d] + C[b][d] ( C is a Monge array )
// f(const ll &lambda, vi &previous, vi &count) returns the reduced DP value
// WARNING: the cost function for f() should be doubled
// O(log(high - low)) applications of f()
template<typename Pred>
long long custom_binary_search(long long low, long long high, const long long &step, Pred p, bool is_left = true){
	assert(low < high && (high - low) % step == 0);
	const long long rem = (low % step + step) % step;
	if(is_left){
		while(high - low > step){
			long long mid = low + (high - low >> 1);
			mid = mid / step * step + rem;
			p(mid) ? low = mid : high = mid;
		}
		return low;
	}
	else{
		while(high - low > step){
			long long mid = low + (high - low >> 1);
			mid = mid / step * step + rem;
			p(mid) ? high = mid : low = mid;
		}
		return high;
	}
}
template<typename DP, bool GET_MAX = true>
pair<long long, vector<int>> LagrangeDP(int n, DP f, long long k, long long low, long long high){
	long long resp, resq;
	vector<int> prevp(n + 1), cntp(n + 1), prevq(n + 1), cntq(n + 1);
	auto pred = [&](long long lambda){
		swap(resp, resq), swap(prevp, prevq), swap(cntp, cntq);
		resp = f(lambda, prevp, cntp);
		return GET_MAX ? cntp.back() <= k : cntp.back() >= k;
	};
	long long lambda = custom_binary_search(2 * low - 1, 2 * high + 1, 2, pred);
	pred(lambda + 2), pred(lambda);
	if(cntp.back() == k){
		vector<int> path{n};
		for(int u = n; u; ) path.push_back(u = prevp[u]);
		return {resp - lambda * k >> 1, path};
	}
	else{
		resp = resp - lambda * cntp.back() >> 1, resq = resq - (lambda + 2) * cntq.back() >> 1;
		long long res = resp + (resq - resp) / (cntq.back() - cntp.back()) * (k - cntp.back());
		if(!GET_MAX) swap(prevp, prevq), swap(cntp, cntq);
		int i = n, j = n, d = k - cntp.back();
		while(1){
			if(prevp[i] <= prevq[j]){
				while(prevp[i] <= prevq[j] && cntq[j] - cntp[i] > d) j = prevq[j];
				if(prevp[i] <= prevq[j] && cntq[j] - cntp[i] == d) break;
			}
			else i = prevp[i], j = prevq[j];
		}
		vector<int> path{n};
		for(int u = n; u != i; ) path.push_back(u = prevp[u]);
		path.push_back(prevq[j]);
		for(int u = prevq[j]; u; ) path.push_back(u = prevq[u]);
		return {res, path};
	}
}

// 156485479_2_7
// Kadane
// O(N)
template<typename T>
T kadane(const vector<T> &arr){
	int n = int(arr.size());
	T lm = 0, gm = 0;
	for(int i = 0; i < n; ++ i){
		lm = max(arr[i], arr[i] + lm);
		gm = max(gm, lm);
	}
	return gm;
}

// 156485479_2_8
// Big Integer
const int base = 1e9;
const int base_digits = 9; 
struct bigint{
	vector<int> a;
	int sign;
	int size(){
		if(a.empty()) return 0;
		int res = (int(a.size()) - 1) * base_digits, ca = a.back();
		while(ca) ++ res, ca /= 10;
		return res;
	}
	bigint operator^(const bigint &v){
		bigint res = 1, a = *this, b = v;
		for(; !b.isZero(); a *= a, b /= 2) if(b % 2) res *= a;
		return res;
	}
	string to_string(){
		stringstream ss;
		ss << *this;
		string s;
		ss >> s;
		return s;
	}
	int sumof(){
		string s = to_string();
		int res = 0;
		for(auto c: s) res += c - '0';
		return res;
	}
	bigint(): sign(1){ }
	bigint(long long v){ *this = v; }
	bigint(const string &s){ read(s); }
	void operator=(const bigint &v){
		sign = v.sign;
		a = v.a;
	}
	void operator=(long long v){
		sign = 1;
		a.clear();
		if(v < 0) sign = -1, v = -v;
		for (; v > 0; v = v / base) a.push_back(v % base);
	}
	bigint operator+(const bigint &v) const{
		if(sign == v.sign){
			bigint res = v;
			for(int i = 0, carry = 0; i < max(a.size(), v.a.size()) || carry; ++ i){
				if(i == res.a.size()) res.a.push_back(0);
				res.a[i] += carry + (i < a.size() ? a[i] : 0);
				carry = res.a[i] >= base;
				if(carry) res.a[i] -= base;
			}
			return res;
		}
		return *this - (-v);
	}
	bigint operator-(const bigint &v) const{
		if(sign == v.sign){
			if(abs() >= v.abs()){
				bigint res = *this;
				for(int i = 0, carry = 0; i < v.a.size() || carry; ++ i){
					res.a[i] -= carry + (i < v.a.size() ? v.a[i] : 0);
					carry = res.a[i] < 0;
					if(carry) res.a[i] += base;
				}
				res.trim();
				return res;
			}
			return -(v - *this);
		}
		return *this + (-v);
	}
	void operator*=(int v){
		if(v < 0) sign = -sign, v = -v;
		for(int i = 0, carry = 0; i < a.size() || carry; ++ i){
			if(i == a.size()) a.push_back(0);
			long long cur = a[i] * (long long)v + carry;
			carry = (int)(cur / base);
			a[i] = (int)(cur % base);
			//asm("divl %%ecx" : "=a"(carry), "=d"(a[i]) : "A"(cur), "c"(base));
		}
		trim();
	}
	bigint operator*(int v) const{
		bigint res = *this;
		res *= v;
		return res;
	}
	void operator*=(long long v){
		if(v < 0) sign = -sign, v = -v;
		if(v > base){
			*this = *this * (v / base) * base + *this * (v % base);
			return ;
		}
		for(int i = 0, carry = 0; i < a.size() || carry; ++ i){
			if (i == a.size()) a.push_back(0);
			long long cur = a[i] * (long long)v + carry;
			carry = (int)(cur / base);
			a[i] = (int)(cur % base);
			//asm("divl %%ecx" : "=a"(carry), "=d"(a[i]) : "A"(cur), "c"(base));
		}
		trim();
	}
	bigint operator*(long long v) const{
		bigint res = *this;
		res *= v;
		return res;
	}
	friend pair<bigint, bigint> divmod(const bigint &a1, const bigint &b1) {
		int norm = base / (b1.a.back() + 1);
		bigint a = a1.abs() * norm, b = b1.abs() * norm, q, r;
		q.a.resize(a.a.size());
		for(int i = int(a.a.size()) - 1; i >= 0; -- i){
			r *= base;
			r += a.a[i];
			int s1 = r.a.size() <= b.a.size() ? 0 : r.a[b.a.size()];
			int s2 = r.a.size() <= b.a.size() - 1 ? 0 : r.a[int(b.a.size()) - 1];
			int d = ((long long)base * s1 + s2) / b.a.back();
			r -= b * d;
			while(r < 0) r += b, -- d;
			q.a[i] = d;
		}
		q.sign = a1.sign * b1.sign, r.sign = a1.sign;
		q.trim(), r.trim();
		return {q, r / norm};
	}
	bigint operator/(const bigint &v) const{ return divmod(*this, v).first; }
	bigint operator%(const bigint &v) const{ return divmod(*this, v).second; }
	void operator/=(int v){
		if(v < 0) sign = -sign, v = -v;
		for(int i = int(a.size()) - 1, rem = 0; i >= 0; -- i){
			long long cur = a[i] + rem * (long long)base;
			a[i] = (int)(cur / v);
			rem = (int)(cur % v);
		}
		trim();
	}
	bigint operator/(int v) const{
		bigint res = *this;
		res /= v;
		return res;
	}
	int operator%(int v) const{
		if(v < 0) v = -v;
		int m = 0;
		for(int i = int(a.size()) - 1; i >= 0; -- i) m = (a[i] + m * (long long)base) % v;
		return m * sign;
	}
	void operator+=(const bigint &v){ *this = *this + v; }
	void operator-=(const bigint &v){ *this = *this - v; }
	void operator*=(const bigint &v){ *this = *this * v; }
	void operator/=(const bigint &v){ *this = *this / v; }
	bool operator<(const bigint &v) const{
		if(sign != v.sign) return sign < v.sign;
		if(a.size() != v.a.size()) return a.size() * sign < int(v.a.size()) * v.sign;
		for(int i = int(a.size()) - 1; i >= 0; -- i) if(a[i] != v.a[i]) return a[i] * sign < v.a[i] * sign;
		return false;
	}
	bool operator>(const bigint &v) const{ return v < *this; }
	bool operator<=(const bigint &v) const{ return !(v < *this); }
	bool operator>=(const bigint &v) const{ return !(*this < v); }
	bool operator==(const bigint &v) const{ return !(*this < v) && !(v < *this); }
	bool operator!=(const bigint &v) const{ return *this < v || v < *this; }
	void trim(){
		while (!a.empty() && !a.back()) a.pop_back();
		if(a.empty()) sign = 1;
	}
	bool isZero() const{ return a.empty() || (a.size() == 1 && !a[0]); }
	bigint operator-() const{
		bigint res = *this;
		res.sign = -sign;
		return res;
	}
	bigint abs() const{
		bigint res = *this;
		res.sign *= res.sign;
		return res;
	}
	long long longValue() const{
		long long res = 0;
		for(int i = int(a.size()) - 1; i >= 0; -- i) res = res * base + a[i];
		return res * sign;
	}
	friend bigint gcd(const bigint &a, const bigint &b){ return b.isZero() ? a : gcd(b, a % b); }
	friend bigint lcm(const bigint &a, const bigint &b){ return a / gcd(a, b) * b; }
	void read(const string &s){
		sign = 1;
		a.clear();
		int pos = 0;
		while(pos < s.size() && (s[pos] == '-' || s[pos] == '+')){
			if(s[pos] == '-') sign = -sign;
			++ pos;
		}
		for(int i = int(s.size()) - 1; i >= pos; i -= base_digits){
			int x = 0;
			for(int j = max(pos, i - base_digits + 1); j <= i; ++ j) x = x * 10 + s[j] - '0';
			a.push_back(x);
		}
		trim();
	}
	friend istream& operator>>(istream &stream, bigint &v){
		string s;
		stream >> s;
		v.read(s);
		return stream;
	}
	friend ostream& operator<<(ostream &stream, const bigint &v){
		if(v.sign == -1) stream << '-';
		stream << (v.a.empty() ? 0 : v.a.back());
		for(int i = int(v.a.size()) - 2; i >= 0; -- i) stream << setw(base_digits) << setfill('0') << v.a[i];
		return stream;
	}
	static vector<int> convert_base(const vector<int> &a, int old_digits, int new_digits){
		vector<long long> p(max(old_digits, new_digits) + 1);
		p[0] = 1;
		for(int i = 1; i < p.size(); ++ i) p[i] = p[i - 1] * 10;
		vector<int> res;
		long long cur = 0;
		int cur_digits = 0;
		for(int i = 0; i < a.size(); i++){
			cur += a[i] * p[cur_digits];
			cur_digits += old_digits;
			while(cur_digits >= new_digits){
				res.push_back(int(cur % p[new_digits]));
				cur /= p[new_digits];
				cur_digits -= new_digits;
			}
		}
		res.push_back((int)cur);
		while(!res.empty() && !res.back()) res.pop_back();
		return res;
	}
	static vector<long long> karatsubaMultiply(const vector<long long> &a, const vector<long long> &b){
		int n = a.size();
		vector<long long> res(n << 1);
		if(n <= 32){
			for(int i = 0; i < n; ++ i) for(int j = 0; j < n; ++ j) res[i + j] += a[i] * b[j];
			return res;
		}
		int k = n >> 1;
		vector<long long> a1(a.begin(), a.begin() + k), a2(a.begin() + k, a.end());
		vector<long long> b1(b.begin(), b.begin() + k), b2(b.begin() + k, b.end());
		vector<long long> a1b1 = karatsubaMultiply(a1, b1), a2b2 = karatsubaMultiply(a2, b2);
		for(int i = 0; i < k; ++ i) a2[i] += a1[i];
		for(int i = 0; i < k; ++ i) b2[i] += b1[i];
		vector<long long> r = karatsubaMultiply(a2, b2);
		for(int i = 0; i < a1b1.size(); ++ i) r[i] -= a1b1[i];
		for(int i = 0; i < a2b2.size(); ++ i) r[i] -= a2b2[i];
		for(int i = 0; i < r.size(); ++ i) res[i + k] += r[i];
		for(int i = 0; i < a1b1.size(); ++ i) res[i] += a1b1[i];
		for (int i = 0; i < a2b2.size(); ++ i) res[i + n] += a2b2[i];
		return res;
	}
	bigint operator*(const bigint &v) const{
		vector<int> a6 = convert_base(this->a, base_digits, 6), b6 = convert_base(v.a, base_digits, 6);
		vector<long long> a(a6.begin(), a6.end()), b(b6.begin(), b6.end());
		while(a.size() < b.size()) a.push_back(0);
		while(b.size() < a.size()) b.push_back(0);
		while(a.size() & (int(a.size()) - 1)) a.push_back(0), b.push_back(0);
		vector<long long> c = karatsubaMultiply(a, b);
		bigint res;
		res.sign = sign * v.sign;
		for(int i = 0, carry = 0; i < c.size(); ++ i){
			long long cur = c[i] + carry;
			res.a.push_back((int)(cur % 1000000));
			carry = (int)(cur / 1000000);
		}
		res.a = convert_base(res.a, 6, base_digits);
		res.trim();
		return res;
	}
};

// 156485479_2_9
// Modular Arithmetics
template<typename T>
T modexp(T b, long long e){
	T res = 1;
	for(; e; b *= b, e >>= 1) if(e & 1) res *= b;
	return res;
}
template<typename T>
T modinv(T a, T m){
	T u = 0, v = 1;
	while(a){
		T t = m / a;
		m -= t * a; swap(a, m);
		u -= t * v; swap(u, v);
	}
	assert(m == 1);
	return u;
}
template<typename T>
struct Z_p{
	using Type = typename decay<decltype(T::value)>::type;
	constexpr Z_p(): value(){ }
	template<typename U> Z_p(const U &x){ value = normalize(x); }
	template<typename U> static Type normalize(const U &x){
		Type v;
		if(-mod() <= x && x < mod()) v = static_cast<Type>(x);
		else v = static_cast<Type>(x % mod());
		if(v < 0) v += mod();
		return v;
	}
	const Type& operator()() const{ return value; }
	template<typename U> explicit operator U() const{ return static_cast<U>(value); }
	constexpr static Type mod(){ return T::value; }
	Z_p &operator+=(const Z_p &otr){ if((value += otr.value) >= mod()) value -= mod(); return *this; }
	Z_p &operator-=(const Z_p &otr){ if((value -= otr.value) < 0) value += mod(); return *this; }
	template<typename U> Z_p &operator+=(const U &otr){ return *this += Z_p(otr); }
	template<typename U> Z_p &operator-=(const U &otr){ return *this -= Z_p(otr); }
	Z_p &operator++(){ return *this += 1; }
	Z_p &operator--(){ return *this -= 1; }
	Z_p operator++(int){ Z_p result(*this); *this += 1; return result; }
	Z_p operator--(int){ Z_p result(*this); *this -= 1; return result; }
	Z_p operator-() const{ return Z_p(-value); }
	template<typename U = T>
	typename enable_if<is_same<typename Z_p<U>::Type, int>::value, Z_p>::type& operator*=(const Z_p& rhs){
		#ifdef _WIN32
		uint64_t x = static_cast<int64_t>(value) * static_cast<int64_t>(rhs.value);
		uint32_t xh = static_cast<uint32_t>(x >> 32), xl = static_cast<uint32_t>(x), d, m;
		asm(
			"divl %4; \n\t"
			: "=a" (d), "=d" (m)
			: "d" (xh), "a" (xl), "r" (mod())
		);
		value = m;
		#else
		value = normalize(static_cast<int64_t>(value) * static_cast<int64_t>(rhs.value));
		#endif
		return *this;
	}
	template<typename U = T>
	typename enable_if<is_same<typename Z_p<U>::Type, int64_t>::value, Z_p>::type& operator*=(const Z_p &rhs){
		int64_t q = static_cast<int64_t>(static_cast<long double>(value) * rhs.value / mod());
		value = normalize(value * rhs.value - q * mod());
		return *this;
	}
	template<typename U = T>
	typename enable_if<!is_integral<typename Z_p<U>::Type>::value, Z_p>::type& operator*=(const Z_p &rhs){
		value = normalize(value * rhs.value);
		return *this;
	}
	Z_p &operator/=(const Z_p &otr){ return *this *= Z_p(modinv(otr.value, mod())); }
	template<typename U> friend const Z_p<U> &abs(const Z_p<U> &v){ return v; }
	template<typename U> friend bool operator==(const Z_p<U> &lhs, const Z_p<U> &rhs);
	template<typename U> friend bool operator<(const Z_p<U> &lhs, const Z_p<U> &rhs);
	template<typename U> friend istream &operator>>(istream &in, Z_p<U> &number);
	Type value;
};
template<typename T> bool operator==(const Z_p<T> &lhs, const Z_p<T> &rhs){ return lhs.value == rhs.value; }
template<typename T, typename U> bool operator==(const Z_p<T>& lhs, U rhs){ return lhs == Z_p<T>(rhs); }
template<typename T, typename U> bool operator==(U lhs, const Z_p<T> &rhs){ return Z_p<T>(lhs) == rhs; }
template<typename T> bool operator!=(const Z_p<T> &lhs, const Z_p<T> &rhs){ return !(lhs == rhs); }
template<typename T, typename U> bool operator!=(const Z_p<T> &lhs, U rhs){ return !(lhs == rhs); }
template<typename T, typename U> bool operator!=(U lhs, const Z_p<T> &rhs){ return !(lhs == rhs); }
template<typename T> bool operator<(const Z_p<T> &lhs, const Z_p<T> &rhs){ return lhs.value < rhs.value; }
template<typename T> Z_p<T> operator+(const Z_p<T> &lhs, const Z_p<T> &rhs){ return Z_p<T>(lhs) += rhs; }
template<typename T, typename U> Z_p<T> operator+(const Z_p<T> &lhs, U rhs){ return Z_p<T>(lhs) += rhs; }
template<typename T, typename U> Z_p<T> operator+(U lhs, const Z_p<T> &rhs){ return Z_p<T>(lhs) += rhs; }
template<typename T> Z_p<T> operator-(const Z_p<T> &lhs, const Z_p<T> &rhs){ return Z_p<T>(lhs) -= rhs; }
template<typename T, typename U> Z_p<T> operator-(const Z_p<T>& lhs, U rhs){ return Z_p<T>(lhs) -= rhs; }
template<typename T, typename U> Z_p<T> operator-(U lhs, const Z_p<T> &rhs){ return Z_p<T>(lhs) -= rhs; }
template<typename T> Z_p<T> operator*(const Z_p<T> &lhs, const Z_p<T> &rhs){ return Z_p<T>(lhs) *= rhs; }
template<typename T, typename U> Z_p<T> operator*(const Z_p<T>& lhs, U rhs){ return Z_p<T>(lhs) *= rhs; }
template<typename T, typename U> Z_p<T> operator*(U lhs, const Z_p<T> &rhs){ return Z_p<T>(lhs) *= rhs; }
template<typename T> Z_p<T> operator/(const Z_p<T> &lhs, const Z_p<T> &rhs) { return Z_p<T>(lhs) /= rhs; }
template<typename T, typename U> Z_p<T> operator/(const Z_p<T>& lhs, U rhs) { return Z_p<T>(lhs) /= rhs; }
template<typename T, typename U> Z_p<T> operator/(U lhs, const Z_p<T> &rhs) { return Z_p<T>(lhs) /= rhs; }
template<typename T> istream &operator>>(istream &in, Z_p<T> &number){
	typename common_type<typename Z_p<T>::Type, int64_t>::type x;
	in >> x;
	number.value = Z_p<T>::normalize(x);
	return in;
}
template<typename T> ostream &operator<<(ostream &out, const Z_p<T> &number){ return out << number(); }
constexpr int mod = (int)1e9 + 7;
//constexpr int mod = 998244353;
using Zp = Z_p<integral_constant<decay<decltype(mod)>::type, mod>>;

// Variable Mod
template<typename T>
T modexp(T b, long long e){
	T res = 1;
	for(; e; b *= b, e >>= 1) if(e & 1) res *= b;
	return res;
}
template<typename T>
T modinv(T a, T m){
	T u = 0, v = 1;
	while(a){
		T t = m / a;
		m -= t * a; swap(a, m);
		u -= t * v; swap(u, v);
	}
	assert(m == 1);
	return u;
}
int mod;
template<typename T>
struct Z_p{
	using Type = int;
	constexpr Z_p(): value(){ }
	template<typename U> Z_p(const U &x){ value = normalize(x); }
	template<typename U> static Type normalize(const U &x){
		Type v;
		if(-mod <= x && x < mod) v = static_cast<Type>(x);
		else v = static_cast<Type>(x % mod);
		if(v < 0) v += mod;
		return v;
	}
	const Type& operator()() const{ return value; }
	template<typename U> explicit operator U() const{ return static_cast<U>(value); }
	Z_p &operator+=(const Z_p &otr){ if((value += otr.value) >= mod) value -= mod; return *this; }
	Z_p &operator-=(const Z_p &otr){ if((value -= otr.value) < 0) value += mod; return *this; }
	template<typename U> Z_p &operator+=(const U &otr){ return *this += Z_p(otr); }
	template<typename U> Z_p &operator-=(const U &otr){ return *this -= Z_p(otr); }
	Z_p &operator++(){ return *this += 1; }
	Z_p &operator--(){ return *this -= 1; }
	Z_p operator++(int){ Z_p result(*this); *this += 1; return result; }
	Z_p operator--(int){ Z_p result(*this); *this -= 1; return result; }
	Z_p operator-() const{ return Z_p(-value); }
	template<typename U = T>
	typename enable_if<is_same<typename Z_p<U>::Type, int>::value, Z_p>::type& operator*=(const Z_p& rhs){
		#ifdef _WIN32
		uint64_t x = static_cast<int64_t>(value) * static_cast<int64_t>(rhs.value);
		uint32_t xh = static_cast<uint32_t>(x >> 32), xl = static_cast<uint32_t>(x), d, m;
		asm(
			"divl %4; \n\t"
			: "=a" (d), "=d" (m)
			: "d" (xh), "a" (xl), "r" (mod)
		);
		value = m;
		#else
		value = normalize(static_cast<int64_t>(value) * static_cast<int64_t>(rhs.value));
		#endif
		return *this;
	}
	template<typename U = T>
	typename enable_if<is_same<typename Z_p<U>::Type, int64_t>::value, Z_p>::type& operator*=(const Z_p &rhs){
		int64_t q = static_cast<int64_t>(static_cast<long double>(value) * rhs.value / mod);
		value = normalize(value * rhs.value - q * mod);
		return *this;
	}
	template<typename U = T>
	typename enable_if<!is_integral<typename Z_p<U>::Type>::value, Z_p>::type& operator*=(const Z_p &rhs){
		value = normalize(value * rhs.value);
		return *this;
	}
	Z_p &operator/=(const Z_p &otr){ return *this *= Z_p(modinv(otr.value, mod)); }
	template<typename U> friend const Z_p<U> &abs(const Z_p<U> &v){ return v; }
	template<typename U> friend bool operator==(const Z_p<U> &lhs, const Z_p<U> &rhs);
	template<typename U> friend bool operator<(const Z_p<U> &lhs, const Z_p<U> &rhs);
	template<typename U> friend istream &operator>>(istream &in, Z_p<U> &number);
	Type value;
};
template<typename T> bool operator==(const Z_p<T> &lhs, const Z_p<T> &rhs){ return lhs.value == rhs.value; }
template<typename T, typename U> bool operator==(const Z_p<T>& lhs, U rhs){ return lhs == Z_p<T>(rhs); }
template<typename T, typename U> bool operator==(U lhs, const Z_p<T> &rhs){ return Z_p<T>(lhs) == rhs; }
template<typename T> bool operator!=(const Z_p<T> &lhs, const Z_p<T> &rhs){ return !(lhs == rhs); }
template<typename T, typename U> bool operator!=(const Z_p<T> &lhs, U rhs){ return !(lhs == rhs); }
template<typename T, typename U> bool operator!=(U lhs, const Z_p<T> &rhs){ return !(lhs == rhs); }
template<typename T> bool operator<(const Z_p<T> &lhs, const Z_p<T> &rhs){ return lhs.value < rhs.value; }
template<typename T> Z_p<T> operator+(const Z_p<T> &lhs, const Z_p<T> &rhs){ return Z_p<T>(lhs) += rhs; }
template<typename T, typename U> Z_p<T> operator+(const Z_p<T> &lhs, U rhs){ return Z_p<T>(lhs) += rhs; }
template<typename T, typename U> Z_p<T> operator+(U lhs, const Z_p<T> &rhs){ return Z_p<T>(lhs) += rhs; }
template<typename T> Z_p<T> operator-(const Z_p<T> &lhs, const Z_p<T> &rhs){ return Z_p<T>(lhs) -= rhs; }
template<typename T, typename U> Z_p<T> operator-(const Z_p<T>& lhs, U rhs){ return Z_p<T>(lhs) -= rhs; }
template<typename T, typename U> Z_p<T> operator-(U lhs, const Z_p<T> &rhs){ return Z_p<T>(lhs) -= rhs; }
template<typename T> Z_p<T> operator*(const Z_p<T> &lhs, const Z_p<T> &rhs){ return Z_p<T>(lhs) *= rhs; }
template<typename T, typename U> Z_p<T> operator*(const Z_p<T>& lhs, U rhs){ return Z_p<T>(lhs) *= rhs; }
template<typename T, typename U> Z_p<T> operator*(U lhs, const Z_p<T> &rhs){ return Z_p<T>(lhs) *= rhs; }
template<typename T> Z_p<T> operator/(const Z_p<T> &lhs, const Z_p<T> &rhs) { return Z_p<T>(lhs) /= rhs; }
template<typename T, typename U> Z_p<T> operator/(const Z_p<T>& lhs, U rhs) { return Z_p<T>(lhs) /= rhs; }
template<typename T, typename U> Z_p<T> operator/(U lhs, const Z_p<T> &rhs) { return Z_p<T>(lhs) /= rhs; }
template<typename T> istream &operator>>(istream &in, Z_p<T> &number){
	typename common_type<typename Z_p<T>::Type, int64_t>::type x;
	in >> x;
	number.value = Z_p<T>::normalize(x);
	return in;
}
template<typename T> ostream &operator<<(ostream &out, const Z_p<T> &number){ return out << number(); }
using Zp = Z_p<int>;

// 156485479_2_10
// Subinterval Sum
template<int K = 2, typename T = long long, typename BO = plus<>, typename IO = minus<>>
struct subinterval{
	const array<int, K> N;
	BO bin_op;
	IO inv_op;
	const T id;
	vector<T> val, p;
	int pos(const array<int, K> &x){
		int res = 0;
		for(int i = 0; i < K; ++ i) res += p[i] * x[i];
		return res;
	}
	template<typename INIT>
	subinterval(const array<int, K> &N, INIT f, BO bin_op = plus<>{}, IO inv_op = minus<>{}, T id = 0LL): N(N), bin_op(bin_op), inv_op(inv_op), id(id), val(accumulate(N.begin(), N.end(), 1, [&](int x, int y){ return x * (y + 1); }), id), p(K + 1, 1){
		array<int, K> cur, from;
		partial_sum(N.begin(), N.end(), p.begin() + 1, multiplies<>{});
		cur.fill(1);
		while(1){
			T &c = val[pos(cur)];
			for(int i = 0; i < K; ++ i) -- cur[i];
			c = f(cur);
			for(int i = 0; i < K; ++ i) ++ cur[i];
			for(int mask = 1; mask < 1 << K; ++ mask){
				from = cur;
				for(int bit = 0; bit < K; ++ bit) if(mask & 1 << bit) -- from[bit];
				c = __builtin_popcount(mask) & 1 ? bin_op(c, val[pos(from)]) : inv_op(c, val[pos(from)]);
			}
			for(int i = 0; i < K; ++ i){
				if(++ cur[i] <= N[i]) break;
				if(i == K - 1) return;
				cur[i] = 1;
			}
		}
	}
	T query(const array<int, K> &low, const array<int, K> &high){
		T res = id;
		array<int, K> cur;
		for(int mask = 0; mask < 1 << K; ++ mask){
			for(int bit = 0; bit < K; ++ bit) cur[bit] = mask & 1 << bit ? low[bit] : high[bit];
			res = __builtin_popcount(mask) & 1 ? inv_op(res, val[pos(cur)]) : bin_op(res, val[pos(cur)]);
		}
		return res;
	}
	T query(const array<int, K> &high){
		return val[pos(high)];
	}
};

// 156485479_2_11
// Divisor Iterator
// Iterate over all maximal intervals [begin, end] such that n / begin == n / end ( both rounded down )
// O(sqrt(n)) applications of f
template<typename T, typename Process, bool DIVISOR_ONLY = true>
void for_each_q(T n, Process f){
	for(T begin = 1, end = 1; begin <= n; begin = end + 1){
		end = n / (n / begin);
		if(!DIVISOR_ONLY || !(n % end)) f(begin, end);
	}
}

// 156485479_2_12_1
// Matroid Intersection
// Credit: tfg ( https://github.com/tfg50/Competitive-Programming/blob/master/Biblioteca/Math/MatroidIntersection.cpp )
// Prototype of a matroid for the slower version
struct Matroid{
	bool independent_with(/*an element*/){

	}
	void insert(/*an element*/){

	}
	void clear(){

	}
};
// to get answer just call Matroid_Intersection<M1, M2, T>(m1, m2, ground).solve()
// rebuild() = O(r^2) insert() and clear() calls
// test() = O(1) independent_with() calls
// O(r) rebuild() + O(r*n) test() = O(r^3) (insert() + clear()) + O(r*n) independent_with() calls in total
template<class M1, class M2, class T>
struct Matroid_Intersection{
	Matroid_Intersection(M1 m1, M2 m2, const std::vector<T> &ground): n((int) ground.size()), m1(m1), m2(m2), ground(ground), present(ground.size()), except1(n, m1), except2(n, m2){
		// greedy step
		for(int i = 0; i < n; ++ i){
			if(test(m1, i) && test(m2, i)){
				present[i] = true;
				m1.insert(ground[i]), m2.insert(ground[i]);
			}
		}
		rebuild();
		// augment step
		while(augment());
	}
	std::vector<T> solve(){
		std::vector<T> ans;
		for(int i = 0; i < n; ++ i){
			if(present[i]){
				ans.push_back(ground[i]);
			}
		}
		return ans;
	}
	int n;
	std::vector<T> ground;
	std::vector<bool> present;
	M1 m1;
	M2 m2;
	vector<M1> except1;
	vector<M2> except2;
	template<class M>
	bool test(M &m, int add, int rem = -1){
		if(present[add] || rem != -1 && !present[rem]) return false;
		return m.independent_with(ground[add]);
	}
	void rebuild(){
		m1.clear(), m2.clear();
		for(int u = 0; u < n; ++ u){
			if(present[u]){
				m1.insert(ground[u]), m2.insert(ground[u]);
			}
		}
		for(int u = 0; u < n; ++ u){
			if(present[u]){
				except1[u].clear(), except2[u].clear();
				for(int v = 0; v < n; ++ v){
					if(v != u && present[v]){
						except1[u].insert(ground[v]), except2[u].insert(ground[v]);
					}
				}
			}
		}
	}
	bool augment(){
		std::deque<int> q;
		std::vector<int> dist(n, -1);
		std::vector<int> frm(n, -1);
		for(int i = 0; i < n; ++ i){
			if(test(m1, i)){
				q.push_back(i);
				dist[i] = 0;
			}
		}
		if(q.empty()){
			return false;
		}
		while(!q.empty()){
			int on = q.front();
			q.pop_front();
			for(int i = 0; i < n; ++ i){
				if(dist[i] == -1 && (dist[on] % 2 == 0 ? test(except2[i], on, i) : test(except1[on], i, on))){
					q.push_back(i);
					dist[i] = dist[on] + 1;
					frm[i] = on;
					if(test(m2, i)){
						for(int pos = i; pos != -1; pos = frm[pos]){
							present[pos] = !present[pos];
						}
						rebuild();
						return true;
					}
				}
			}
		}
		return false;
	}
};
// Prototype of a matroid for the faster version
struct Matroid{
	bool is_independent(/*a set of ground elements*/){

	}
	int get_rank(/*a set of ground elements*/){

	}
};
// O(n * r^1.5 * log n) oracle calls
// implementation of https://arxiv.org/pdf/1911.10765.pdf
template<class M1, class M2, class T>
struct Matroid_Intersection{
	Matroid_Intersection(M1 m1, M2 m2, const std::vector<T> &ground): n((int) ground.size()), ground(ground), present(ground.size()){
		// greedy step
		for(int i = 0; i < n; ++ i){
			if(test(m1, i) && test(m2, i)){
				present[i] = true;
				++ curAns;
			}
		}
		// augment step
		while(augment(m1, m2));
	}
	std::vector<T> solve(int o = -1){
		std::vector<T> ans;
		for(int i = 0; i < n; ++ i){
			if(present[i] && i != o){
				ans.push_back(ground[i]);
			}
		}
		return ans;
	}
	int curAns = 0, n;
	std::vector<T> ground;
	std::vector<bool> present;
	template<class M>
	bool test(M &m, int add, int rem = -1){
		if(present[add] || (rem != -1 && !present[rem])) return false;
		auto st = solve(rem);
		st.push_back(ground[add]);
		return m.is_independent(st);
	}
	bool augment(M1 &m1, M2 &m2){
		std::deque<int> q;
		std::vector<int> dist(n, -1);
		std::vector<int> frm(n, -1);
		std::vector<std::vector<int>> layers;
		for(int i = 0; i < n; ++ i){
			if(test(m1, i)){
				q.push_back(i);
				dist[i] = 0;
			}
		}
		if(q.empty()){
			return false;
		}
		int limit = 1e9;
		auto outArc = [&](int u, bool phase){
			std::vector<T> st;
			std::vector<int> others;
			if(present[u]){
				for(int i = 0; i < n; ++ i){
					if(present[i] && i != u){
						st.push_back(ground[i]);
					}
					else if(!present[i] && dist[i] == (phase ? dist[u] + 1 : -1)){
						others.push_back(i);
					}
				}
				auto _test = [&](int l, int r){
					auto cur = st;
					for(int i = l; i < r; ++ i){
						cur.push_back(ground[others[i]]);
					}
					return m1.get_rank(cur) >= curAns;
				};
				int l = 0, r = (int)others.size();
				if(l == r || !_test(l, r)) return -1;
				while(l + 1 != r){
					int mid = (l + r) / 2;
					if(_test(l, mid)){
						r = mid;
					}
					else{
						l = mid;
					}
				}
				return others[l];
			}
			else{
				for(int i = 0; i < n; ++ i){
					if(present[i] && dist[i] != (phase ? dist[u] + 1 : -1)){
						st.push_back(ground[i]);
					}
					else if(present[i]){
						others.push_back(i);
					}
				}
				auto _test = [&](int l, int r){
					auto cur = st;
					for(int i = 0; i < l; ++ i){
						cur.push_back(ground[others[i]]);
					}
					for(int i = r; i < (int) others.size(); ++ i){
						cur.push_back(ground[others[i]]);
					}
					cur.push_back(ground[u]);
					return m2.is_independent(cur);
				};
				int l = 0, r = (int)others.size();
				if(l == r || !_test(l, r)) return -1;
				while(l + 1 != r){
					int mid = (l + r) / 2;
					if(_test(l, mid)){
						r = mid;
					}
					else{
						l = mid;
					}
				}
				return others[l];
			}
		};
		while(!q.empty()){
			int on = q.front();
			q.pop_front();
			if((int)layers.size() <= dist[on]) layers.emplace_back(0);
			layers[dist[on]].push_back(on);
			if(dist[on] == limit) continue;
			for(int i = outArc(on, false); i != -1; i = outArc(on, false)){
				assert(dist[i] == -1 && (dist[on] % 2 == 0 ? test(m2, on, i) : test(m1, i, on)));
				q.push_back(i);
				dist[i] = dist[on] + 1;
				frm[i] = on;
				if(limit > n && test(m2, i)){
					limit = dist[i];
					continue;
					for(on = i; on != -1; on = frm[on]){
						present[on] = !present[on];
					}
					++ curAns;
					return true;
				}
			}
		}
		if(limit > n) return false;
		auto rem = [&](int on){
			assert(dist[on] != -1);
			auto it = std::find(layers[dist[on]].begin(), layers[dist[on]].end(), on);
			assert(it != layers[dist[on]].end());
			layers[dist[on]].erase(it);
			dist[on] = -1;
		};
		std::function<bool(int)> dfs = [&](int on){
			if(dist[on] == 0 && !test(m1, on)){
				rem(on);
				return false;
			}
			if(dist[on] == limit){
				rem(on);
				if(test(m2, on)){
					present[on] = !present[on];
					return true;
				}
				else{
					return false;
				}
			}
			for(int to = outArc(on, true); to != -1; to = outArc(on, true)){
				if(dfs(to)){
					rem(on);
					present[on] = !present[on];
					return true;
				}
			}
			rem(on);
			return false;
		};
		bool got = false;
		while(!layers[0].empty()){
			if(dfs(layers[0].back())){
				got = true;
				assert(m1.is_independent(solve()) && m2.is_independent(solve()));
				++ curAns;
			}
		}
		assert(got);
		return true;
	}
};

// 156485479_2_12_2
// Matroid Union


// 156485479_3_1
// Sparse Table
// The binary operator must be idempotent and associative
// O(N log N) preprocessing, O(1) per query
template<typename T, typename BO>
struct sparse_table{
	int N;
	BO bin_op;
	const T id;
	vector<vector<T>> val;
	vector<int> bit;
	template<typename IT>
	sparse_table(IT begin, IT end, BO bin_op, T id): N(distance(begin, end)), bin_op(bin_op), id(id), val(__lg(N) + 1, vector<T>(begin, end)), bit(N + 1){
		for(int i = 1; i <= N; ++ i) bit[i] = __lg(i);
		for(int i = 0; i < __lg(N); ++ i) for(int j = 0; j < N; ++ j){
			val[i + 1][j] = bin_op(val[i][j], val[i][min(N - 1, j + (1 << i))]);
		}
	}
	sparse_table(){ }
	T query(int l, int r){
		if(l >= r) return id;
		int d = bit[r - l];
		return bin_op(val[d][l], val[d][r - (1 << d)]);
	}
};
// 2D Sparse Table
// The binary operator must be idempotent and associative
// O(NM log NM) processing, O(1) per query
template<typename T, typename BO>
struct sparse_table{
	int N, M;
	BO bin_op;
	vector<vector<vector<vector<T>>>> val;
	vector<int> bit;
	sparse_table(const vector<vector<T>> &arr, BO bin_op): N(arr.size()), M(arr[0].size()), bin_op(bin_op), val(__lg(N) + 1, vector<vector<vector<T>>>(__lg(M) + 1, arr)), bit(max(N, M) + 1){
		for(int i = 1; i <= max(N, M); ++ i) bit[i] = 31 - __builtin_clz(i);
		for(int ii = 0; ii < N; ++ ii) for(int jj = 0; jj < M; ++ jj){
			for(int i = 0, j = 0; j < __lg(M); ++ j) val[i][j + 1][ii][jj] = bin_op(val[i][j][ii][jj], val[i][j][ii][min(M - 1, jj + (1 << j))]);
		}
		for(int i = 0; i < __lg(N); ++ i) for(int ii = 0; ii < N; ++ ii){
			for(int j = 0; j <= __lg(M); ++ j) for(int jj = 0; jj < M; ++ jj){
				val[i + 1][j][ii][jj] = bin_op(val[i][j][ii][jj], val[i][j][min(N - 1, ii + (1 << i))][jj]);
			}
		}
	}
	T query(int pl, int ql, int pr, int qr){
		assert(pl < pr && ql < qr);
		int pd = bit[pr - pl], qd = bit[qr - ql];
		return bin_op(bin_op(val[pd][qd][pl][ql], val[pd][qd][pl][qr - (1 << qd)]), bin_op(val[pd][qd][pr - (1 << pd)][ql], val[pd][qd][pr - (1 << pd)][qr - (1 << qd)]));
	}
};

// 156485479_3_2_1
// Iterative Segment Tree
// O(N) processing, O(log N) per query
template<typename T, typename BO>
struct segment{
	int N;
	BO bin_op;
	const T id;
	vector<T> val;
	template<typename IT>
	segment(IT begin, IT end, BO bin_op, T id): N(distance(begin, end)), bin_op(bin_op), id(id), val(N << 1, id){
		for(int i = 0; i < N; ++ i) val[i + N] = *(begin ++);
		for(int i = N - 1; i > 0; -- i) val[i] = bin_op(val[i << 1], val[i << 1 | 1]);
	}
	segment(int N, BO bin_op, T id): N(N), bin_op(bin_op), id(id), val(N << 1, id){ }
	void set(int p, T x){
		for(p += N, val[p] = x; p > 1; p >>= 1) val[p >> 1] = bin_op(val[p], val[p ^ 1]);
	}
	void update(int p, T x){
		for(p += N, val[p] = bin_op(val[p], x); p > 1; p >>= 1) val[p >> 1] = bin_op(val[p], val[p ^ 1]);
	}
	T query(int l, int r){
		if(l >= r) return id;
		T resl = id, resr = id;
		for(l += N, r += N; l < r; l >>= 1, r >>= 1){
			if(l & 1) resl = bin_op(resl, val[l ++]);
			if(r & 1) resr = bin_op(val[-- r], resr);
		}
		return bin_op(resl, resr);
	}
};

// 156485479_3_2_2
// Iterative Segment Tree with Reversed Operation ( Commutative Operation Only )
// O(N) Preprocessing, O(1) per query
template<typename T, typename BO>
struct segment{
	int N;
	BO bin_op;
	T id;
	vector<T> val;
	template<typename IT>
	segment(IT begin, IT end, BO bin_op, T id): N(distance(begin, end)), bin_op(bin_op), id(id), val(N << 1, id){
		for(int i = 0; i < N; ++ i) val[i + N] = *(begin ++);
	}
	segment(int N, BO bin_op, T id): N(N), bin_op(bin_op), id(id), val(N << 1, id){ }
	void update(int l, int r, T x){
		for(l += N, r += N; l < r; l >>= 1, r >>= 1){
			if(l & 1) val[l ++] = bin_op(val[l], x);
			if(r & 1) val[r] = bin_op(val[-- r], x);
		}
	}
	T query(int p){
		T res = id;
		for(p += N; p > 0; p >>= 1) res = bin_op(res, val[p]);
		return res;
	}
	void push(){
		for(int i = 1; i < N; ++ i){
			val[i << 1] = bin_op(val[i << 1], val[i]);
			val[i << 1 | 1] = bin_op(val[i << 1 | 1], val[i]);
			val[i] = id;
		}
	}
};

// 156485479_3_2_3
// Iterative 2D Segment Tree ( Only for commutative group )
// O(NM) processing, O(log NM) per query
template<typename T, typename BO>
struct segment{
	int N, M;
	BO bin_op;
	const T id;
	vector<vector<T>> val;
	segment(const vector<vector<T>> &arr, BO bin_op, T id): N(arr.size()), M(arr[0].size()), bin_op(bin_op), id(id), val(N << 1, vector<T>(M << 1, id)){
		for(int i = 0; i < N; ++ i) for(int j = 0; j < M; ++ j) val[i + N][j + M] = arr[i][j];
		for(int i = N - 1; i > 0; -- i) for(int j = 0; j < M; ++ j) val[i][j + M] = bin_op(val[i << 1][j + M], val[i << 1 | 1][j + M]);
		for(int i = 1; i < N << 1; ++ i) for(int j = M - 1; j > 0; -- j) val[i][j] = bin_op(val[i][j << 1], val[i][j << 1 | 1]);
	}
	void set(int p, int q, T x){
		val[p += N][q += M] = x;
		for(int j = q; j >>= 1; ) val[p][j] = bin_op(val[p][j << 1], val[p][j << 1 | 1]);
		for(int i = p; i >>= 1; ){
			val[i][q] = bin_op(val[i << 1][q], val[i << 1 | 1][q]);
			for(int j = q; j >>= 1; ) val[i][j] = bin_op(val[i][j << 1], val[i][j << 1 | 1]);
		}
	}
	void update(int p, int q, T x){
		p += N, q += N, val[p][q] = bin_op(val[p][q], x);
		for(int j = q; j >>= 1; ) val[p][j] = bin_op(val[p][j << 1], val[p][j << 1 | 1]);
		for(int i = p; i >>= 1; ){
			val[i][q] = bin_op(val[i << 1][q], val[i << 1 | 1][q]);
			for(int j = q; j >>= 1; ) val[i][j] = bin_op(val[i][j << 1], val[i][j << 1 | 1]);
		}
	}
	T query(int pl, int ql, int pr, int qr){
		if(pl >= pr || ql >= qr) return id;
		T res = id;
		for(int il = pl + N, ir = pr + N; il < ir; il >>= 1, ir >>= 1){
			if(il & 1){
				for(int jl = ql + N, jr = qr + N; jl < jr; jl >>= 1, jr >>= 1){
					if(jl & 1) res = bin_op(res, val[il][jl ++]);
					if(jr & 1) res = bin_op(res, val[il][-- jr]);
				}
				++ il;
			}
			if(ir & 1){
				-- ir;
				for(int jl = ql + N, jr = qr + N; jl < jr; jl >>= 1, jr >>= 1){
					if(jl & 1) res = bin_op(res, val[ir][jl ++]);
					if(jr & 1) res = bin_op(res, val[ir][-- jr]);
				}
			}
		}
		return res;
	}
};

// 156485479_3_2_4
// Simple Recursive Segment Tree
// O(N) preprocessing, O(log N) per query
template<typename T, typename BO>
struct segment{
	int N;
	BO bin_op;
	const T id;
	vector<T> val;
	segment(const vector<T> &arr, BO bin_op, T id): N(arr.size()), bin_op(bin_op), id(id), val(N << 2, id){
		build(arr, 1, 0, N);
	}
	void build(const vector<T> &arr, int u, int left, int right){
		if(left + 1 == right) val[u] = arr[left];
		else{
			int mid = left + right >> 1;
			build(arr, u << 1, left, mid);
			build(arr, u << 1 ^ 1, mid, right);
			val[u] = bin_op(val[u << 1], val[u << 1 ^ 1]);
		}
	}
	T pq(int u, int left, int right, int ql, int qr){
		if(qr <= left || right <= ql) return id;
		if(ql == left && qr == right) return val[u];
		int mid = left + right >> 1;
		return bin_op(pq(u << 1, left, mid, ql, qr), pq(u << 1 ^ 1, mid, right, ql, qr));
	}
	T query(int ql, int qr){
		return pq(1, 0, N, ql, qr);
	}
	void pu(int u, int left, int right, int ind, T x){
		if(left + 1 == right) val[u] = x;
		else{
			int mid = left + right >> 1;
			if(ind < mid) pu(u << 1, left, mid, ind, x);
			else pu(u << 1 ^ 1, mid, right, ind, x);
			val[u] = bin_op(val[u << 1], val[u << 1 ^ 1]);
		}
	}
	void update(int ind, T x){
		pu(1, 0, N, ind, x);
	}
};

// 156485479_3_2_5
// Lazy Dynamic Segment Tree
// O(1) or O(N) processing, O(log L) or O(log N) per query
template<typename B, typename T, typename LOP, typename QOP, typename AOP, typename INIT = function<T(B, B)>>
struct segment{
	LOP lop;              // lop(low, high, lazy, ql, qr, x): apply query to the lazy
	QOP qop;              // qop(low, high, lval, rval): merge the value
	AOP aop;              // aop(low, high, val, ql, qr, x): apply query to the val
	INIT init;            // init(low, high): initialize node representing (low, high)
	const array<T, 2> id; // lazy id, query id
	segment *l = 0, *r = 0;
	B low, high;
	T lazy, val;
	segment(LOP lop, QOP qop, AOP aop, const array<T, 2> &id, B low, B high, INIT init): lop(lop), qop(qop), aop(aop), id(id), low(low), high(high), lazy(id[0]), init(init), val(init(low, high)){ }
	template<typename IT>
	segment(IT begin, IT end, LOP lop, QOP qop, AOP aop, const array<T, 2> &id, B low, B high): lop(lop), qop(qop), aop(aop), id(id), low(low), high(high), lazy(id[0]){
		assert(end - begin == high - low);
		if(high - low > 1){
			IT inter = begin + (end - begin >> 1);
			B mid = low + (high - low >> 1);
			l = new segment(begin, inter, lop, qop, aop, id, low, mid);
			r = new segment(inter, end, lop, qop, aop, id, mid, high);
			val = qop(low, mid, high, l->val, r->val);
		}
		else val = *begin;
	}
	void push(){
		if(!l){
			B mid = low + (high - low >> 1);
			l = new segment(lop, qop, aop, id, low, mid, init);
			r = new segment(lop, qop, aop, id, mid, high, init);
		}
		if(lazy != id[0]){
			l->update(low, high, lazy);
			r->update(low, high, lazy);
			lazy = id[0];
		}
	}
	void update(B ql, B qr, T x){
		if(qr <= low || high <= ql) return;
		if(ql <= low && high <= qr){
			lazy = lop(low, high, lazy, ql, qr, x);
			val = aop(low, high, val, ql, qr, x);
		}
		else{
			push();
			l->update(ql, qr, x);
			r->update(ql, qr, x);
			val = qop(low, low + (high - low >> 1), high, l->val, r->val);
		}
	}
	T query(B ql, B qr){
		if(qr <= low || high <= ql) return id[1];
		if(ql <= low && high <= qr) return val;
		push();
		return qop(max(low, ql), clamp(low + (high - low >> 1), ql, qr), min(high, qr), l->query(ql, qr), r->query(ql, qr));
	}
};

// 156485479_3_2_6
// Persistent Segment Tree
// O(N) preprocessing, O(log N) per query
template<typename T>
struct node{
	node *l = 0, *r = 0;
	T val;
	node(T val): val(val){}
	node(node *l, node *r, function<T(T, T)> bin_op, T id): l(l), r(r), val(id){
		if(l) val = bin_op(l->val, val);
		if(r) val = bin_op(val, r->val);
	}
};
template<typename T, typename BO>
struct segment: vector<node<T> *>{
	int N;
	BO bin_op;
	const T id;
	segment(const vector<T> &arr, BO bin_op, T id): N(arr.size()), bin_op(bin_op), id(id){
		this->push_back(build(arr, 0, N));
	}
	node<T> *build(const vector<T> &arr, int left, int right){
		if(left + 1 == right) return new node<T>(arr[left]);
		int mid = left + right >> 1;
		return new node<T>(build(arr, left, mid), build(arr, mid, right), bin_op, id);
	}
	T pq(node<T> *u, int left, int right, int ql, int qr){
		if(qr <= left || right <= ql) return id;
		if(ql <= left && right <= qr) return u->val;
		int mid = left + right >> 1;
		return bin_op(pq(u->l, left, mid, ql, qr), pq(u->r, mid, right, ql, qr));
	}
	T query(node<T> *u, int ql, int qr){
		return pq(u, 0, N, ql, qr);
	}
	node<T> *ps(node<T> *u, int left, int right, int p, int x){
		if(left + 1 == right) return new node<T>(x);
		int mid = left + right >> 1;
		if(mid > p) return new node<T>(ps(u->l, left, mid, p, x), u->r, bin_op, id);
		else return new node<T>(u->l, ps(u->r, mid, right, p, x), bin_op, id);
	}
	void set(node<T> *u, int p, int x){
		this->push_back(ps(u, 0, N, p, x));
	}
};

// 156485479_3_3_1
// Fenwick Tree
// Only works on a commutative group
// O(N log N) preprocessing, O(log N) per query
template<typename T, typename BO, typename IO>
struct fenwick{
	int N;
	BO bin_op;
	IO inv_op;
	const T id;
	vector<T> val;
	template<typename IT>
	fenwick(IT begin, IT end, BO bin_op, IO inv_op, T id): N(distance(begin, end)), bin_op(bin_op), inv_op(inv_op), id(id), val(N + 1, id){
		for(int i = 0; i < N; ++ i) update(i, *(begin ++));
	}
	fenwick(int N, BO bin_op, IO inv_op, T id): N(N), bin_op(bin_op), inv_op(inv_op), id(id), val(N + 1, id){ }
	void set(int p, T x){
		for(x = inv_op(x, query(p, p + 1)), ++ p; p <= N; p += p & -p) val[p] = bin_op(val[p], x);
	}
	void update(int p, T x){
		for(++ p; p <= N; p += p & -p) val[p] = bin_op(val[p], x);
	}
	T sum(int p){
		T res = id;
		for(++ p; p > 0; p -= p & -p) res = bin_op(res, val[p]);
		return res;
	}
	T query(int l, int r){
		return inv_op(sum(r - 1), sum(l - 1));
	}
};

// 156485479_3_3_2
// Fenwick Tree Supporting Range Queries of The Same Type
// O(N log N) preprocessing, O(log N) per query
template<typename T, typename BO, typename IO>
struct fenwick{
	int N;
	BO bin_op;
	IO inv_op;
	const T id;
	vector<T> val;
	template<typename IT>
	fenwick(IT begin, IT end, BO bin_op, IO inv_op, T id): N(distance(begin, end)), bin_op(bin_op), inv_op(inv_op), id(id), val(N + 1, id){
		for(int i = 0; i < N; ++ i) update(i, *(begin ++));
	}
	fenwick(int N, BO bin_op, IO inv_op, T id): N(N), bin_op(bin_op), inv_op(inv_op), id(id), val(N + 1, id){ }
	void set(int p, T x){
		for(x = inv_op(x, query(p, p + 1)), ++ p; p <= N; p += p & -p) val[p] = bin_op(val[p], x);
	}
	void update(int p, T x){
		for(++ p; p <= N; p += p & -p) val[p] = bin_op(val[p], x);
	}
	T sum(int p){
		T res = id;
		for(++ p; p > 0; p -= p & -p) res = bin_op(res, val[p]);
		return res;
	}
	T query(int l, int r){
		return inv_op(sum(r - 1), sum(l - 1));
	}
};
template<typename T, typename BO, typename IO, typename MO>
struct rangefenwick{
	fenwick<T, BO, IO> tr1, tr2;
	BO bin_op;
	IO inv_op;
	MO multi_op;
	const T id;
	rangefenwick(int N, BO bin_op, IO inv_op, MO multi_op, T id):
		tr1(vector<T>(N, id), bin_op, inv_op, id),
		tr2(vector<T>(N, id), bin_op, inv_op, id),
		bin_op(bin_op), inv_op(inv_op), id(id){}
	void update(int l, int r, T x){
		tr1.update(l, x);
		tr1.update(r, inv_op(id, x));
		tr2.update(l, multi_op(x, l - 1));
		tr2.update(r, inv_op(id, multi_op(x, r - 1)));
	}
	T sum(int p){
		return inv_op(multi_op(tr1.sum(p), p), tr2.sum(p));
	}
	T query(int l, int r){
		return inv_op(sum(r - 1), sum(l - 1));
	}
};

// 156485479_3_3_3
// 2D Fenwick Tree ( Only for Commutative Group )
// O(NM log NM) preprocessing, O(log N log M) per query
template<typename T, typename BO, typename IO>
struct fenwick{
	int N, M;
	BO bin_op;
	IO inv_op;
	const T id;
	vector<vector<T>> val;
	fenwick(const vector<vector<T>> &arr, BO bin_op, IO inv_op, T id): N(arr.size()), M(arr[0].size()), bin_op(bin_op), inv_op(inv_op), id(id), val(N + 1, vector<T>(M + 1)){
		for(int i = 0; i < N; ++ i) for(int j = 0; j < M; ++ j) update(i, j, arr[i][j]);
	}
	void set(int p, int q, T x){
		x = inv_op(x, query(p, q, p + 1, q + 1)), ++ p, ++ q;
		for(int i = p; i <= N; i += i & -i) for(int j = q; j <= N; j += j & -j) val[i][j] = bin_op(val[i][j], x);
	}
	void update(int p, int q, T x){
		++ p, ++ q;
		for(int i = p; i <= N; i += i & -i) for(int j = q; j <= N; j += j & -j) val[i][j] = bin_op(val[i][j], x);
	}
	T sum(int p, int q){
		T res = id;
		++ p, ++ q;
		for(int i = p; i > 0; i -= i & -i) for(int j = q; j > 0; j -= j & -j) res = bin_op(res, val[i][j]);
		return res;
	}
	T query(int pl, int ql, int pr, int qr){
		-- pl, -- ql, -- pr, -- qr;
		return inv_op(bin_op(sum(pr, qr), sum(pl, ql)), bin_op(sum(pr, ql), sum(pl, qr)));
	}
};

// 156485479_3_4
// Wavelet Tree
// O(L log N) preprocessing, O(log N) per query
template<typename T>
struct node{
	int N;
	T low, high;
	node *l = 0, *r = 0;
	vector<int> freq;
	template<typename IT, typename Compare>
	node(IT begin, IT end, T low, T high, Compare cmp): N(distance(begin, end)), low(low), high(high){
		if(!N) return;
		if(low + 1 == high) return;
		T mid = low + (high - low >> 1);
		auto pred = [&](T x){ return cmp(x, mid); };
		freq.reserve(N + 1);
		freq.push_back(0);
		for(auto it = begin; it != end; ++ it) freq.push_back(freq.back() + pred(*it));
		auto inter = stable_partition(begin, end, pred);
		l = new node(begin, inter, low, mid, cmp);
		r = new node(inter, end, mid, high, cmp);
	}
};
template<typename T, typename Compare = less<>>
struct wavelet{
	int N;
	node<T> *root;
	Compare cmp;
	template<typename IT>
	wavelet(IT begin, IT end, Compare cmp = less<>()): N(distance(begin, end)), cmp(cmp){
		root = new node<T>(begin, end, *min_element(begin, end, cmp), *max_element(begin, end, cmp) + 1, cmp);
	}
	// Return the # of elements less than x in the range [ql, qr)
	int count(node<T> *u, int ql, int qr, T x){
		if(ql >= qr || !cmp(u->low, x)) return 0;
		if(!cmp(x, u->high)) return qr - ql;
		int lcnt = u->freq[ql], rcnt = u->freq[qr];
		return count(u->l, lcnt, rcnt, x) + count(u->r, ql - lcnt, qr - rcnt, x);
	}
	//Find the k-th element in the range [ql, qr) ( 0-indexed )
	T k_th(node<T> *u, int ql, int qr, int k){
		assert(0 <= k && k < u->N);
		if(u->low + 1 == u->high) return u->low;
		int lcnt = u->freq[ql], rcnt = u->freq[qr];
		if(k < rcnt - lcnt) return k_th(u->l, lcnt, rcnt, k);
		else return k_th(u->r, ql - lcnt, qr - rcnt, k - (rcnt - lcnt));
	}
	void print(){
		deque<node<T> *> q{root};
		while(!q.empty()){
			auto u = q.front();
			q.pop_front();
			cout << "range = [" << u->low << ", " << u->high << "), frequency: ";
			for(auto x: u->freq){
				cout << x << " ";
			}
			cout << "\n";
			if(u->l) q.push_back(u->l);
			if(u->r) q.push_back(u->r);
		}
	}
};

// 156485479_3_5
// Disjoint Set
// O(alpha(n)) per query where alpha(n) is the inverse ackermann function
struct disjoint{
	int N;
	vector<int> parent, size;
	disjoint(int N): N(N), parent(N), size(N, 1){
		iota(parent.begin(), parent.end(), 0);
	}
	void expand(){
		++ N;
		parent.push_back(parent.size());
		size.push_back(1);
	}
	int root(int u){
		return parent[u] == u ? u : parent[u] = root(parent[u]);
	}
	bool merge(int u, int v){
		u = root(u), v = root(v);
		if(u == v) return false;
		if(size[u] < size[v]) swap(u, v);
		parent[v] = u;
		size[u] += size[v];
		return true;
	}
	bool share(int u, int v){
		return root(parent[u]) == root(parent[v]);
	}
};
// Persistent Version
struct disjoint{
	int N;
	vector<int> parent, size;
	vector<pair<int, int>> Log_parent, Log_size;
	disjoint(int N): N(N), parent(N), size(N, 1){
		iota(parent.begin(), parent.end(), 0);
	}
	void expand(){
		++ N;
		parent.push_back(parent.size());
		size.push_back(1);
	}
	int root(int u){
		Log_parent.emplace_back(u, parent[u]);
		return parent[u] == u ? u : parent[u] = root(parent[u]);
	}
	bool merge(int u, int v){
		u = root(u), v = root(v);
		if(u == v) return false;
		if(size[u] < size[v]) swap(u, v);
		Log_parent.emplace_back(v, parent[v]);
		parent[v] = u;
		Log_size.emplace_back(u, size[u]);
		size[u] += size[v];
		return true;
	}
	bool share(int u, int v){
		return root(parent[u]) == root(parent[v]);
	}
	void reverse(int p, int s){
		while(parent.size() != p) reverse_parent();
		while(size.size() != s) reverse_size();
	}
	void reverse_parent(){
		auto [u, p] = Log_parent.back();
		Log_parent.pop_back();
		parent[u] = p;
	}
	void reverse_size(){
		auto [u, s] = Log_size.back();
		Log_size.pop_back();
		size[u] = s;
	}
};

// 156485479_3_6
// Monotone Stack
// O(1) per operation
template<typename T = int, typename Compare = function<bool(T, T)>>
struct monotone_stack: vector<T>{
	T init;
	Compare cmp;
	monotone_stack(T init = 0, Compare cmp = less<T>{}): init(init), cmp(cmp){ }
	T push(T x){
		while(!this->empty() && !cmp(this->back(), x)) this->pop_back();
		this->push_back(x);
		return this->size() == 1 ? init : *-- -- this->end();
	}
};

// 156485479_3_7
// Less-than-k Query, Distinct Value Query (Offline, Online)
// O(N log N) processing
template<typename T, typename BO, typename IO>
struct fenwick{
	int N;
	BO bin_op;
	IO inv_op;
	const T id;
	vector<T> val;
	template<typename IT>
	fenwick(IT begin, IT end, BO bin_op, IO inv_op, T id): N(distance(begin, end)), bin_op(bin_op), inv_op(inv_op), id(id), val(N + 1, id){
		for(int i = 0; i < N; ++ i) update(i, *(begin ++));
	}
	fenwick(int N, BO bin_op, IO inv_op, T id): N(N), bin_op(bin_op), inv_op(inv_op), id(id), val(N + 1, id){ }
	void set(int p, T x){
		for(x = inv_op(x, query(p, p + 1)), ++ p; p <= N; p += p & -p) val[p] = bin_op(val[p], x);
	}
	void update(int p, T x){
		for(++ p; p <= N; p += p & -p) val[p] = bin_op(val[p], x);
	}
	T sum(int p){
		T res = id;
		for(++ p; p > 0; p -= p & -p) res = bin_op(res, val[p]);
		return res;
	}
	T query(int l, int r){
		return inv_op(sum(r - 1), sum(l - 1));
	}
};
template<typename T>
struct offline_less_than_k_query{
	int N;
	vector<pair<T, int>> event;
	vector<tuple<T, int, int, int>> queries;
	template<typename IT>
	offline_less_than_k_query(IT begin, IT end, bool IS_DVQ = true): N(distance(begin, end)), event(N){
		if(IS_DVQ){
			map<T, int> q;
			for(int i = 0; i < N; ++ i){
				event[i] = {(q.count(*begin) ? q[*begin] : -1), i};
				q[*(begin ++)] = i;
			}
		}
		else for(int i = 0; i < N; ++ i) event[i] = {*(begin ++), i};
	}
	void query(int i, int ql, int qr){ // For distinct value query
		queries.emplace_back(ql, ql, qr, i);
	}
	void query(int i, int ql, int qr, T k){ // For less-than-k query
		queries.emplace_back(k, ql, qr, i);
	}
	template<typename Action>
	void solve(Action ans){ // ans(index, answer)
		sort(queries.begin(), queries.end()), sort(event.begin(), event.end(), greater<pair<T, int>>());
		fenwick tr(N, plus<int>(), minus<int>(), 0);
		for(auto &[k, ql, qr, i]: queries){
			while(!event.empty() && event.back().first < k){
				tr.update(event.back().second, 1);
				event.pop_back();
			}
			ans(i, tr.query(ql, qr));
		}
	}
};
// Online
template<typename T>
struct node{
	node *l = 0, *r = 0;
	T val;
	node(T val): val(val){}
	node(node *l, node *r, function<T(T, T)> bin_op, T id): l(l), r(r), val(id){
		if(l) val = bin_op(l->val, val);
		if(r) val = bin_op(val, r->val);
	}
};
template<typename T, typename BO>
struct segment: vector<node<T> *>{
	int N;
	BO bin_op;
	const T id;
	template<typename IT>
	segment(IT begin, IT end, BO bin_op, T id): N(distance(begin, end)), bin_op(bin_op), id(id){
		this->push_back(build(begin, end));
	}
	segment(int N, BO bin_op, T id): N(N), bin_op(bin_op), id(id){
		this->push_back(build(0, N));
	}
	template<typename IT>
	node<T> *build(IT begin, IT end){
		if(begin + 1 == end) return new node<T>(*begin);
		IT inter = begin + (end - begin >> 1);
		return new node<T>(build(begin, inter), build(inter, end), bin_op, id);
	}
	node<T> *build(int left, int right){
		if(left + 1 == right) return new node<T>(0);
		int mid = left + right >> 1;
		return new node<T>(build(left, mid), build(mid, right), bin_op, id);
	}
	T pq(node<T> *u, int left, int right, int ql, int qr){
		if(qr <= left || right <= ql) return id;
		if(ql <= left && right <= qr) return u->val;
		int mid = left + right >> 1;
		return bin_op(pq(u->l, left, mid, ql, qr), pq(u->r, mid, right, ql, qr));
	}
	T query(node<T> *u, int ql, int qr){
		return pq(u, 0, N, ql, qr);
	}
	node<T> *ps(node<T> *u, int left, int right, int p, int x){
		if(left + 1 == right) return new node<T>(x);
		int mid = left + right >> 1;
		if(mid > p) return new node<T>(ps(u->l, left, mid, p, x), u->r, bin_op, id);
		else return new node<T>(u->l, ps(u->r, mid, right, p, x), bin_op, id);
	}
	void set(node<T> *u, int p, int x){
		this->push_back(ps(u, 0, N, p, x));
	}
	// Below assumes T is an ordered field and node stores positive values
	template<typename IO>
	int plb(node<T> *u, int left, int right, T x, IO inv_op){
		if(left + 1 == right) return right;
		int mid = left + right >> 1;
		if(u->l->val < x) return plb(u->r, mid, right, inv_op(x, u->l->val), inv_op);
		else return plb(u->l, left, mid, x, inv_op);
	}
	template<typename IO>
	int lower_bound(node<T> *u, T x, IO inv_op){ // min i such that query[0, i) >= x
		if(u->val < x) return N + 1;
		else return plb(u, 0, N, x, inv_op);
	}
	template<typename IO>
	int lower_bound(node<T> *u, int i, T x, IO inv_op){
		return lower_bound(u, bin_op(x, query(u, 0, min(i, N))), inv_op);
	}
	template<typename IO>
	int pub(node<T> *u, int left, int right, T x, IO inv_op){
		if(left + 1 == right) return right;
		int mid = left + right >> 1;
		if(x < u->l->val) return pub(u->l, left, mid, x, inv_op);
		else return pub(u->r, mid, right, inv_op(x, u->l->val), inv_op);
	}
	template<typename IO>
	int upper_bound(node<T> *u, T x, IO inv_op){ // min i such that query[0, i) > x
		if(x < u->val) return pub(u, 0, N, x, inv_op);
		else return N + 1;
	}
	template<typename IO>
	int upper_bound(node<T> *u, int i, T x, IO inv_op){
		return upper_bound(u, bin_op(x, query(u, 0, min(i, N))), inv_op);
	}
};
// TYPE: {0: distinct value query, 1: less-than-k query with numbers in range [0, N), 2: arbitrary range less-than-k query}
template<typename T, int TYPE = 0>
struct less_than_k_query{
	int N;
	vector<node<T> *> p;
	segment<int, plus<int>> tr;
	vector<T> compress;
	template<typename IT>
	less_than_k_query(IT begin, IT end): N(distance(begin, end)), p(N + 1), tr(N, plus<int>{}, 0){
		vector<pair<T, int>> event(N);
		if(TYPE == 0){
			map<T, int> q;
			for(int i = 0; begin != end; ++ begin, ++ i){
				event[i] = {(q.count(*begin) ? q[*begin] : -1), i};
				q[*begin] = i;
			}
		}
		else if(TYPE == 1) for(int i = 0; begin != end; ++ begin, ++ i) event[i] = {*begin, i};
		else{
			compress = {begin, end};
			sort(compress.begin(), compress.end()), compress.resize(unique(compress.begin(), compress.end()) - compress.begin());
			for(int i = 0; begin != end; ++ begin, ++ i) event[i] = {std::lower_bound(compress.begin(), compress.end(), *begin) - compress.begin(), i};
		}
		sort(event.begin(), event.end(), greater<pair<int, int>>{});
		tr.reserve(N);
		for(int i = 0; i <= N; ++ i){
			while(!event.empty() && event.back().first < i){
				tr.set(tr.back(), event.back().second, 1);
				event.pop_back();
			}
			p[i] = tr.back();
		}
	}
	// For distinct value query
	int query(int ql, int qr){
		return tr.query(p[ql], ql, qr);
	}
	int lower_bound(int ql, int cnt){ // min i such that # of distinct in [l, l + i) >= cnt
		return tr.lower_bound(p[ql], ql, cnt, minus<int>());
	}
	int upper_bound(int ql, int cnt){ // min i such that # of distinct in [l, l + i) > cnt
		return tr.upper_bound(p[ql], ql, cnt, minus<int>());
	}
	// For less-than-k query
	int query(int ql, int qr, int k){
		return tr.query(p[TYPE == 2 ? std::upper_bound(compress.begin(), compress.end(), k) - compress.begin() : k], ql, qr);
	}
	int lower_bound(int ql, int k, int cnt){ // min i such that ( # of elements < k in [l, l + i) ) >= cnt
		return tr.lower_bound(p[TYPE == 2 ? std::upper_bound(compress.begin(), compress.end(), k) - compress.begin() : k], ql, cnt, minus<int>());
	}
	int upper_bound(int ql, int k, int cnt){ // min i such that ( # of elements < k in [l, l + i) ) > cnt
		return tr.upper_bound(p[TYPE == 2 ? std::upper_bound(compress.begin(), compress.end(), k) - compress.begin() : k], ql, cnt, minus<int>());
	}
};

// 156485479_3_8
// Mo's Algorithm
// O((N + Q) sqrt(N) F) where F is the processing time of ins and del.
template<int B>
struct query{
	int l, r, ind;
	bool operator<(const query &otr) const{
		if(l / B != otr.l / B) return pair<int, int>(l, r) < pair<int, int>(otr.l, otr.r);
		return (l / B & 1) ? (r < otr.r) : (r > otr.r);
	}
};
template<typename T, typename Q, typename I, typename D, typename A>
vector<T> answer_query_offline(vector<Q> query, I ins, D del, A ans){
	sort(query.begin(), query.end());
	vector<T> res(query.size());
	int l = 0, r = 0;
	for(auto q: query){
		while(l > q.l) ins(-- l);
		while(r < q.r) ins(r ++);
		while(l < q.l) del(l ++);
		while(r > q.r) del(-- r);
		res[q.ind] = ans(q);
	}
	return res;
}
/*
	auto ins = [&](int i){
		
	};
	auto del = [&](int i){
		
	};
	auto ans = [&](const auto &q){
		return 0;
	};
*/

// 156485479_3_9
// Treap
// O(log N) per operation
template<typename T, typename P, typename R>
struct treap{
	struct node{
		node *l = 0, *r = 0;
		T val, subtr_val, lazy;
		int priority, sz = 1;
		int ind;
		node(T val, T lazy): val(val), subtr_val(val), lazy(lazy), priority(rng()){ }
		node(T val, T lazy, int ind): val(val), subtr_val(val), lazy(lazy), ind(ind), priority(rng()){ }
	};
	node *root = 0;
	P push; // update Lazy to child val and subtr_val
	R refresh; // Recalculate sz and subtr_val
	treap(P push, R refresh): push(push), refresh(refresh){ }
	template<typename IT>
	treap(IT begin, IT end, P push, R refresh, T lazy): push(push), refresh(refresh){
		root = build(begin, end, lazy);
	}
	treap(int N, T val, P push, R refresh, T lazy): push(push), refresh(refresh){
		root = build(N, val, lazy);
	}
	void heapify(node *u){
		if(u){
			node *v = u;
			if(u->l && u->l->priority > v->priority) v = u->l;
			if(u->r && u->r->priority > v->priority) v = u->r;
			if(u != v){
				swap(u->priority, v->priority);
				heapify(v);
			}
		}
	}
	template<typename IT>
	node *build(IT begin, IT end, T lazy){
		if(begin == end) return 0;
		IT mid = begin + (end - begin >> 1);
		node *c = new node(*mid, lazy);
		c->l = build(begin, mid, lazy), c->r = build(mid + 1, end, lazy);
		heapify(c);
		refresh(c);
		return c;
	}
	node *build(int N, T val, T lazy){
		if(!N) return 0;
		int M = N >> 1;
		node *c = new node(val, lazy);
		c->l = build(M, val, lazy), c->r = build(N - M - 1, val, lazy);
		heapify(c);
		refresh(c);
		return c;
	}
	template<class F>
	void each(node *u, F f){
		if(u){
			push(u);
			each(u->l, f);
			f(u);
			each(u->r, f);
		}
	}
	template<class F>
	void each(F f){
		each(root, f);
	}
	void print(){
		cout << "Cur treap: ";
		each(root, [&](node *u){ cout << u->val << " "; });
		cout << endl;
	}
	int get_cnt(node *u){
		return u ? u->sz : 0;
	}
	pair<node *, node *> split(node* u, int k){
		if(!u) return { };
		push(u);
		if(get_cnt(u->l) >= k){
			auto [sl, sr] = split(u->l, k);
			u->l = sr;
			refresh(u);
			return {sl, u};
		}
		else{
			auto [sl, sr] = split(u->r, k - get_cnt(u->l) - 1);
			u->r = sl;
			refresh(u);
			return {u, sr};
		}
	}
	template<typename Compare = less<T>>
	pair<node *, node *> split_by_val(node* u, T k, Compare cmp = less<T>()){
		if(!u) return { };
		push(u);
		if(!cmp(u->val, k)){
			auto [sl, sr] = split_by_val(u->l, k, cmp);
			u->l = sr;
			refresh(u);
			return {sl, u};
		}
		else{
			auto [sl, sr] = split_by_val(u->r, k, cmp);
			u->r = sl;
			refresh(u);
			return {u, sr};
		}
	}
	node *merge(node *l, node *r){
		if(!l) return r;
		if(!r) return l;
		push(l), push(r);
		if(l->priority > r->priority){
			l->r = merge(l->r, r);
			refresh(l);
			return l;
		}
		else{
			r->l = merge(l, r->l);
			refresh(r);
			return r;
		}
	}
	node *insert(node *u, node *t, int pos){
		auto [sl, sr] = split(u, pos);
		return merge(merge(sl, t), sr);
	}
	node *insert(node *t, int pos){
		return root = root ? insert(root, t, pos) : t;
	}
	node *erase(node *&u, int pos){
		node *a, *b, *c;
		tie(a, b) = split(u, pos);
		tie(b, c) = split(b, 1);
		return u = merge(a, c);
	}
	node *erase(int pos){
		return erase(root, pos);
	}
	// move the range [l, r) to index k
	void move(node *&u, int l, int r, int k){
		node *a, *b, *c;
		tie(a, b) = split(u, l);
		tie(b, c) = split(b, r - l);
		if(k <= l) u = merge(insert(a, b, k), c);
		else u = merge(a, insert(c, b, k - r));
	}
	void move(int l, int r, int k){
		move(root, l, r, k);
	}
};
/*
	auto push = [&](auto *u){
		if(u && u->lazy){
			if(u->l){
				u->l->lazy += u->lazy;
				u->l->val += u->lazy;
				u->l->subtr_val += u->lazy * u->l->sz;
			}
			if(u->r){
				u->r->lazy += u->lazy;
				u->r->val += u->lazy;
				u->r->subtr_val += u->lazy * u->r->sz;
			}
			u->lazy = 0;
		}
	};
	auto refresh = [&](auto *u){
		u->sz = (u->l ? u->l->sz : 0) + (u->r ? u->r->sz : 0) + 1;
		u->subtr_val = (u->l ? u->l->subtr_val : 0) + (u->r ? u->r->subtr_val : 0) + u->val;
	};
*/

// 156485479_3_10
// Splay Tree

// 156485479_3_11
// Link Cut Tree

// 156485479_3_12
// Unital Sorter
// O(1) per operation
struct unital_sorter{
	int N, M; // # of items, maximum possible cnt
	vector<int> list, pos, cnt;
	vector<pair<int, int>> bound;
	unital_sorter(int N, int M): N(N), M(M), list(N), pos(N), cnt(N), bound(M + 1, {N, N}){
		bound[0] = {0, N};
		iota(list.begin(), list.end(), 0);
		iota(pos.begin(), pos.end(), 0);
	}
	void insert(int x){
		-- bound[cnt[x]].second;
		-- bound[cnt[x] + 1].first;
		int y = list[bound[cnt[x] ++].second];
		swap(pos[x], pos[y]);
		swap(list[pos[x]], list[pos[y]]);
	}
	void erase(int x){
		int y = list[bound[cnt[x] - 1].second];
		swap(pos[x], pos[y]);
		swap(list[pos[x]], list[pos[y]]);
		++ bound[cnt[x]].first;
		++ bound[-- cnt[x]].second;
	}
	void print(int X, int Y){
		cout << "List = ", copy(list.end() - X, list.end(), ostream_iterator<int>(cout, " ")), cout << "\n";
		cout << "Pos = ", copy(pos.begin(), pos.begin() + X, ostream_iterator<int>(cout, " ")), cout << "\n";
		cout << "Count = ", copy(cnt.begin(), cnt.begin() + X, ostream_iterator<int>(cout, " ")), cout << "\n";
		cout << "Bound = ";
		for(int i = 0; i < Y; ++ i) cout << "(" << bound[i].first << ", " << bound[i].second << ")";
		cout << endl;
	}
};

// 156485479_4_1
// Strongly Connected Component ( Tarjan's Algorithm ) / Processes SCCs in reverse topological order
// O(N + M)
template<typename Graph, typename Process_SCC>
int scc(const Graph &adj, Process_SCC f){
	int n = int(adj.size());
	vector<int> val(n), comp(n, -1), z, cur;
	int timer = 0, ncomps = 0;
	function<void(int)> dfs = [&](int u){
		int low = val[u] = ++ timer, v;
		z.push_back(u);
		for(auto v: adj[u]) if(comp[v] < 0) low = min(low, val[v] ?: dfs(v));
		if(low == val[u]){
			do{
				v = z.back(); z.pop_back();
				comp[v] = ncomps;
				cur.push_back(v);
			}while(v != u);
			f(cur);
			cur.clear();
			++ ncomps;
		}
		return val[u] = low;
	};
	for(int u = 0; u < n; ++ u) if(comp[u] < 0) dfs(u);
	return ncomps;
}

// 156485479_4_2
// Biconnected Components / adj[u]: list of [vertex, edgenum]
// O(N + M)
template<typename Graph, typename Process_BCC, typename Process_Bridge = function<void(int, int, int)>>
int bcc(const Graph &adj, Process_BCC f, Process_Bridge g = [](int u, int v, int e){ }){
	int n = int(adj.size());
	vector<int> num(n), st;
	int timer = 0, ncomps = 0;
	function<int(int, int)> dfs = [&](int u, int pe){
		int me = num[u] = ++ timer, top = me;
		for(auto [v, e]: adj[u]) if(e != pe){
			if(num[v]){
				top = min(top, num[v]);
				if(num[v] < me) st.push_back(e);
			}
			else{
				int si = int(st.size());
				int up = dfs(v, e);
				top = min(top, up);
				if(up == me){
					st.push_back(e);
					f(vector<int>(st.begin() + si, st.end())); // Processes edgelist
					st.resize(si);
					++ ncomps;
				}
				else if(up < me) st.push_back(e);
				else g(u, v, e);
			}
		}
		return top;
	};
	for(int u = 0; u < n; ++ u) if(!num[u]) dfs(u, -1);
	return ncomps;
}

// 156485479_4_3
// Articulation Points / WARNING: f(u) may be called multiple times for the same u.
// O(N + M)
template<typename Graph, typename Process_Articulation_Point>
void articulation_points(const Graph &adj, Process_Articulation_Point f){
	int n = adj.size();
	vector<bool> visited(n);
	vector<int> tin(n, -1), low(n, -1);
	int timer = 0;
	function<void(int, int)> dfs = [&](int u, int p){
		visited[u] = true;
		tin[u] = low[u] = timer ++;
		int child = 0;
		for(auto v: adj[u]){
			if(v == p) continue;
			if(visited[v]) low[u] = min(low[u], tin[v]);
			else{
				dfs(v, u);
				low[u] = min(low[u], low[v]);
				if(low[v] >= tin[u] && p != -1) f(u);
				++ child;
			}
		}
		if(p == -1 && child > 1) f(u);
	};
	for(int u = 0; u < n; ++ u) if(!visited[u]) dfs(u, -1);
}

// 156485479_4_4_1
// Dinic's Maximum Flow Algorithm
// O(V^2E) ( O(sqrt(V) * E ) for unit network )
template<typename T>
struct flow_network{
	static constexpr T eps = (T)1e-9;
	int N;
	vector<vector<int>> adj;
	struct Edge{
		int from, to;
		T capacity, flow;
	};
	vector<Edge> edge;
	int source, sink;
	T flow = 0;
	flow_network(int N, int source, int sink): N(N), source(source), sink(sink), adj(N){ }
	void clear(){
		for(auto &e: edge) e.flow = 0;
		flow = 0;
	}
	int insert(int from, int to, T forward_cap, T backward_cap){
		int ind = (int)edge.size();
		adj[from].push_back(ind);
		edge.push_back({from, to, forward_cap, 0});
		adj[to].push_back(ind + 1);
		edge.push_back({to, from, backward_cap, 0});
		return ind;
	}
	void add_flow(int i, T f){
		edge[i].flow += f;
		edge[i ^ 1].flow -= f;
	}
};
template<typename T>
struct dinic{
	static constexpr T inf = numeric_limits<T>::max();
	flow_network<T> &g;
	vector<int> ptr, level, q;
	dinic(flow_network<T> &g): g(g), ptr(g.N), level(g.N), q(g.N){ }
	bool bfs(){
		fill(level.begin(), level.end(), -1);
		q[0] = g.sink;
		level[g.sink] = 0;
		int beg = 0, end = 1;
		while(beg < end){
			int i = q[beg ++];
			for(auto ind: g.adj[i]){
				auto &e = g.edge[ind];
				auto &re = g.edge[ind ^ 1];
				if(re.capacity - re.flow > g.eps && level[e.to] == -1){
					level[e.to] = level[i] + 1;
					if(e.to == g.source) return true;
					q[end ++] = e.to;
				}
			}
		}
		return false;
	}
	T dfs(int u, T w){
		if(u == g.sink) return w;
		int &j = ptr[u];
		while(j >= 0){
			int ind = g.adj[u][j];
			auto &e = g.edge[ind];
			if(e.capacity - e.flow > g.eps && level[e.to] == level[u] - 1){
				T F = dfs(e.to, min(e.capacity - e.flow, w));
				if(F > g.eps){
					g.add_flow(ind, F);
					return F;
				}
			}
			-- j;
		}
		return 0;
	}
	T max_flow(){
		while(bfs()){
			for(int i = 0; i < g.N; ++ i) ptr[i] = int(g.adj[i].size()) - 1;
			T sum = 0;
			while(1){
				T add = dfs(g.source, inf);
				if(add <= g.eps) break;
				sum += add;
			}
			if(sum <= g.eps) break;
			g.flow += sum;
		}
		return g.flow;
	}
	pair<T, vector<bool>> min_cut(){
		T cut = max_flow();
		vector<bool> res(g.N);
		for(int i = 0; i < g.N; ++ i) res[i] = (level[i] != -1);
		return {cut, res};
	}
};

// 156485479_4_4_2
// Minimum Cost Maximum Flow Algorithm
// O(Augmenting Paths) * O(SPFA)
template<typename T, typename C>
struct mcmf{
	static constexpr T eps = (T) 1e-9;
	struct Edge{
		int from, to;
		T capacity, flow;
		C cost;
	};
	vector<vector<int>> adj;
	vector<Edge> edge;
	vector<C> d;
	vector<bool> in_queue;
	vector<int> q, pe;
	int N, source, sink;
	T flow = 0;
	C cost = 0;
	mcmf(int N, int source, int sink): N(N), source(source), sink(sink), adj(N), d(N), in_queue(N), pe(N){ }
	void clear(){
		for(auto &e: edge) e.flow = 0;
		flow = 0;
	}
	int insert(int from, int to, T forward_cap, T backward_cap, C cost){
		assert(0 <= from && from < N && 0 <= to && to < N);
		int ind = int(edge.size());
		adj[from].push_back((int)edge.size());
		edge.push_back({from, to, forward_cap, 0, cost});
		adj[to].push_back((int)edge.size());
		edge.push_back({to, from, backward_cap, 0, -cost});
		return ind;
	}
	bool expath(){
		fill(d.begin(), d.end(), numeric_limits<C>::max());
		q.clear();
		q.push_back(source);
		d[source] = 0;
		in_queue[source] = true;
		int beg = 0;
		bool found = false;
		while(beg < (int)q.size()){
			int i = q[beg ++];
			if(i == sink) found = true;
			in_queue[i] = false;
			for(int id : adj[i]){
				const auto &e = edge[id];
				if(e.capacity - e.flow > eps && d[i] + e.cost < d[e.to]){
					d[e.to] = d[i] + e.cost;
					pe[e.to] = id;
					if(!in_queue[e.to]){
						q.push_back(e.to);
						in_queue[e.to] = true;
					}
				}
			}
		}
		if(found){
			T push = numeric_limits<T>::max();
			int v = sink;
			while(v != source){
				const auto &e = edge[pe[v]];
				push = min(push, e.capacity - e.flow);
				v = e.from;
			}
			v = sink;
			while(v != source){
				auto &e = edge[pe[v]];
				e.flow += push;
				auto &back = edge[pe[v] ^ 1];
				back.flow -= push;
				v = e.from;
			}
			flow += push;
			cost += push * d[sink];
		}
		return found;
	}
	pair<T, C> get_mcmf(){
		while(expath()){ }
		return {flow, cost};
	}
};

// 156485479_4_4_3
// Simple DFS Matching
// O(VE)
struct matching{
	vector<vector<int>> adj;
	vector<int> pa, pb, cur;
	int n, m, flow = 0, id = 0;
	matching(int n, int m): n(n), m(m), pa(n, -1), pb(m, -1), cur(n), adj(n){ }
	int insert(int from, int to){
		adj[from].push_back(to);
		return int(adj[from].size()) - 1;
	}
	bool dfs(int v){
		cur[v] = id;
		for(auto u: adj[v]){
			if(pb[u] == -1){
				pa[v] = u;
				pb[u] = v;
				return true;
			}
		}
		for(auto u: adj[v]){
			if(cur[pb[u]] != id && dfs(pb[u])){
				pa[v] = u;
				pb[u] = v;
				return true;
			}
		}
		return false;
	}
	int solve(){
		while(true){
			++ id;
			int augment = 0;
			for(int u = 0; u < n; ++ u) if(pa[u] == -1 && dfs(u)) ++ augment;
			if(!augment) break;
			flow += augment;
		}
		return flow;
	}
	int run_once(int v){
		if(pa[v] != -1) return 0;
		++ id;
		return dfs(v);
	}
};

// 156485479_4_4_4
// Hopcroft Karp Algorithm

// 156485479_4_5_1
// LCA
// O(N log N) processing, O(1) per query
template<typename T, typename BO>
struct sparse_table{
	int N;
	BO bin_op;
	const T id;
	vector<vector<T>> val;
	vector<int> bit;
	template<typename IT>
	sparse_table(IT begin, IT end, BO bin_op, T id): N(distance(begin, end)), bin_op(bin_op), id(id), val(__lg(N) + 1, vector<T>(begin, end)), bit(N + 1){
		for(int i = 1; i <= N; ++ i) bit[i] = __lg(i);
		for(int i = 0; i < __lg(N); ++ i) for(int j = 0; j < N; ++ j){
			val[i + 1][j] = bin_op(val[i][j], val[i][min(N - 1, j + (1 << i))]);
		}
	}
	sparse_table(){ }
	T query(int l, int r){
		if(l >= r) return id;
		int d = bit[r - l];
		return bin_op(val[d][l], val[d][r - (1 << d)]);
	}
};
struct LCA{
	vector<int> time;
	vector<long long> depth;
	int root;
	sparse_table<pair<int, int>, function<pair<int, int>(pair<int, int>, pair<int, int>)>> rmq;
	LCA(vector<vector<pair<int, int>>> &adj, int root): root(root), time(adj.size(), -99), depth(adj.size()), rmq(dfs(adj), [](pair<int, int> x, pair<int, int> y){ return min(x, y); }, numeric_limits<int>::max() / 2){}
	vector<pair<int, int>> dfs(vector<vector<pair<int, int>>> &adj){
		vector<tuple<int, int, int, long long>> q(1);
		vector<pair<int, int>> res;
		int T = root;
		while(!q.empty()){
			auto [u, p, d, di] = q.back();
			q.pop_back();
			if(d) res.emplace_back(d, p);
			time[u] = T ++;
			depth[u] = di;
			for(auto &e: adj[u]) if(e.first != p){
				q.emplace_back(e.first, u, d + 1, di + e.second);
			}
		}
		return res;
	}
	int query(int l, int r){
		if(l == r) return l;
		l = time[l], r = time[r];
		return rmq.query(min(l, r), max(l, r)).second;
	}
	long long dist(int l, int r){
		int lca = query(l, r);
		return depth[l] + depth[r] - 2 * depth[lca];
	}
};

// 156485479_4_5_2_1
// Binary Lifting for Unweighted Tree
// O(N log N) preprocessing, O(log N) per lca query
struct binary_lift: vector<vector<int>>{
	int N, root, lg;
	vector<vector<int>> up;
	vector<int> depth;
	binary_lift(int N, int root): N(N), root(root), lg(ceil(log2(N))), depth(N), up(N, vector<int>(lg + 1)){
		this->resize(N);
	}
	void insert(int u, int v){ (*this)[u].push_back(v), (*this)[v].push_back(u); }
	void init(){ dfs(root, root); }
	void dfs(int u, int p){
		up[u][0] = p;
		for(int i = 1; i <= lg; ++ i) up[u][i] = up[up[u][i - 1]][i - 1];
		for(auto &v: (*this)[u]) if(v != p){
			depth[v] = depth[u] + 1;
			dfs(v, u);
		}
	}
	int lca(int u, int v){
		if(depth[u] < depth[v]) std::swap(u, v);
		u = trace_up(u, depth[u] - depth[v]);
		for(int d = lg; d >= 0; -- d) if(up[u][d] != up[v][d]) u = up[u][d], v = up[v][d];
		return u == v ? u : up[u][0];
	}
	int dist(int u, int v){
		return depth[u] + depth[v] - 2 * depth[lca(u, v)];
	}
	int trace_up(int u, int dist){
		if(dist >= depth[u] - depth[root]) return root;
		for(int d = lg; d >= 0; -- d) if(dist & (1 << d)) u = up[u][d];
		return u;
	}
};

// 156485479_4_5_2_2
// Binary Lifting for Weighted Tree Supporting Commutative Monoid Operations
// O(N log N) processing, O(log N) per query
template<typename T, typename BO>
struct binary_lift{
	int N, root, lg;
	BO bin_op;
	const T id;
	vector<T> val;
	vector<vector<pair<int, T>>> adj, up;
	vector<int> depth;
	binary_lift(int N, int root, const vector<T> &val, BO bin_op, T id): N(N), root(root), bin_op(bin_op), id(id), lg(32 - __builtin_clz(N)), depth(N), val(val), adj(N), up(N, vector<pair<int, T>>(lg + 1)){ }
	void insert(int u, int v, T w){
		adj[u].emplace_back(v, w);
		adj[v].emplace_back(u, w);
	}
	void init(){ dfs(root, root, id); }
	void dfs(int u, int p, T w){
		up[u][0] = {p, bin_op(val[u], w)};
		for(int i = 1; i <= lg; ++ i) up[u][i] = {
			up[up[u][i - 1].first][i - 1].first
			, bin_op(up[u][i - 1].second, up[up[u][i - 1].first][i - 1].second)
		};
		for(auto &[v, x]: adj[u]) if(v != p){
			depth[v] = depth[u] + 1;
			dfs(v, u, x);
		}
	}
	pair<int, T> trace_up(int u, int dist){ // Node, Distance (Does not include weight of the node)
		T res = id;
		dist = min(dist, depth[u] - depth[root]);
		for(int d = lg; d >= 0; -- d) if(dist & (1 << d)){
			res = bin_op(res, up[u][d].second), u = up[u][d].first;
		}
		return {u, res};
	}
	pair<int, T> query(int u, int v){ // LCA, Query Value
		if(depth[u] < depth[v]) swap(u, v);
		T res;
		tie(u, res) = trace_up(u, depth[u] - depth[v]);
		for(int d = lg; d >= 0; -- d) if(up[u][d].first != up[v][d].first){
			res = bin_op(res, up[u][d].second), u = up[u][d].first;
			res = bin_op(res, up[v][d].second), v = up[v][d].first;
		}
		if(u != v) res = bin_op(bin_op(res, up[u][0].second), up[v][0].second), u = up[u][0].first;
		return {u, bin_op(res, val[u])};
	}
	int dist(int u, int v){
		return depth[u] + depth[v] - 2 * depth[query(u, v).first];
	}
};

// 156485479_4_5_3
// Heavy Light Decomposition
// O(N + M) processing, O(log^2 N) per query
template<typename B, typename T, typename LOP, typename QOP, typename AOP, typename INIT = function<T(B, B)>>
struct segment{
	LOP lop;              // lop(low, high, lazy, ql, qr, x): apply query to the lazy
	QOP qop;              // qop(low, high, lval, rval): merge the value
	AOP aop;              // aop(low, high, val, ql, qr, x): apply query to the val
	INIT init;            // init(low, high): initialize node representing (low, high)
	const array<T, 2> id; // lazy id, query id
	segment *l = 0, *r = 0;
	B low, high;
	T lazy, val;
	segment(LOP lop, QOP qop, AOP aop, const array<T, 2> &id, B low, B high, INIT init): lop(lop), qop(qop), aop(aop), id(id), low(low), high(high), lazy(id[0]), init(init), val(init(low, high)){ }
	template<typename IT>
	segment(IT begin, IT end, LOP lop, QOP qop, AOP aop, const array<T, 2> &id, B low, B high): lop(lop), qop(qop), aop(aop), id(id), low(low), high(high), lazy(id[0]){
		assert(end - begin == high - low);
		if(high - low > 1){
			IT inter = begin + (end - begin >> 1);
			B mid = low + (high - low >> 1);
			l = new segment(begin, inter, lop, qop, aop, id, low, mid);
			r = new segment(inter, end, lop, qop, aop, id, mid, high);
			val = qop(low, mid, high, l->val, r->val);
		}
		else val = *begin;
	}
	void push(){
		if(!l){
			B mid = low + (high - low >> 1);
			l = new segment(lop, qop, aop, id, low, mid, init);
			r = new segment(lop, qop, aop, id, mid, high, init);
		}
		if(lazy != id[0]){
			l->update(low, high, lazy);
			r->update(low, high, lazy);
			lazy = id[0];
		}
	}
	void update(B ql, B qr, T x){
		if(qr <= low || high <= ql) return;
		if(ql <= low && high <= qr){
			lazy = lop(low, high, lazy, ql, qr, x);
			val = aop(low, high, val, ql, qr, x);
		}
		else{
			push();
			l->update(ql, qr, x);
			r->update(ql, qr, x);
			val = qop(low, low + (high - low >> 1), high, l->val, r->val);
		}
	}
	T query(B ql, B qr){
		if(qr <= low || high <= ql) return id[1];
		if(ql <= low && high <= qr) return val;
		push();
		return qop(max(low, ql), clamp(low + (high - low >> 1), ql, qr), min(high, qr), l->query(ql, qr), r->query(ql, qr));
	}
};
template<typename DS, typename BO, typename T, int VALS_IN_EDGES = 1>
struct heavy_light_decomposition{
	int N, root;
	vector<vector<int>> adj;
	vector<int> par, sz, depth, next, pos, rpos;
	DS &tr;
	BO bin_op;
	const T id;
	heavy_light_decomposition(int N, int root, DS &tr, BO bin_op, T id): N(N), root(root), adj(N), par(N, -1), sz(N, 1), depth(N), next(N), pos(N), tr(tr), bin_op(bin_op), id(id){
		this->root = next[root] = root;
	}
	void insert(int u, int v){
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	void dfs_sz(int u){
		if(par[u] != -1) adj[u].erase(find(adj[u].begin(), adj[u].end(), par[u]));
		for(auto &v: adj[u]){
			par[v] = u, depth[v] = depth[u] + 1;
			dfs_sz(v);
			sz[u] += sz[v];
			if(sz[v] > sz[adj[u][0]]) swap(v, adj[u][0]);
		}
	}
	void dfs_hld(int u){
		static int t = 0;
		pos[u] = t ++;
		rpos.push_back(u);
		for(auto &v: adj[u]){
			next[v] = (v == adj[u][0] ? next[u] : v);
			dfs_hld(v);
		}
	}
	void init(){
		dfs_sz(root), dfs_hld(root);
	}
	template<typename Process>
	void processpath(int u, int v, Process act){
		for(; next[u] != next[v]; v = par[next[v]]){
			if(depth[next[u]] > depth[next[v]]) swap(u, v);
			act(pos[next[v]], pos[v] + 1);
		}
		if(depth[u] > depth[v]) swap(u, v);
		act(pos[u] + VALS_IN_EDGES, pos[v] + 1);
	}
	void updatepath(int u, int v, T val){
		processpath(u, v, [this, &val](int l, int r){ tr.update(l, r, val); });
	}
	void updatesubtree(int u, T val){
		tr.update(pos[u] + VALS_IN_EDGES, pos[u] + sz[u], val);
	}
	T querypath(int u, int v){
		T res = id;
		processpath(u, v, [this, &res](int l, int r){res = bin_op(res, tr.query(l, r));});
		return res;
	}
	T querysubtree(int u){
		return tr.query(pos[u] + VALS_IN_EDGES, pos[u] + sz[u]);
	}
};

// 156485479_4_5_4
// Find all the centroids
// O(N)
vector<int> centroid(const vector<vector<int>> &adj){
	int n = int(adj.size());
	vector<int> sz(n, 1);
	function<void(int, int)> dfs_sz = [&](int u, int p){
		for(auto v: adj[u]) if(v != p){
			dfs_sz(v, u);
			sz[u] += sz[v];
		}
	};
	dfs_sz(0, -1);
	function<vector<int>(int, int)> dfs_cent = [&](int u, int p){
		for(auto v: adj[u]) if(v != p && sz[v] > n / 2) return dfs_cent(v, u);
		for(auto v: adj[u]) if(v != p && n - sz[v] <= n / 2) return vector<int>{u, v};
		return vector<int>{u};
	};
	return dfs_cent(0, -1);
}
// Centroid Decomposition
// O(N log N) processing
struct centroid_decomposition{
	int N, root;
	vector<int> dead, sz, par, cpar;
	vector<vector<int>> adj, cchild, dist;
	centroid_decomposition(int N): N(N), adj(N), dead(N), sz(N), par(N), cchild(N), cpar(N), dist(N){ }
	void insert(int u, int v){
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	void dfs_sz(int u){
		sz[u] = 1;
		for(auto v: adj[u]) if(!dead[v] && v != par[u]){
			par[v] = u;
			dfs_sz(v);
			sz[u] += sz[v];
		}
	}
	int centroid(int u){
		par[u] = -1;
		dfs_sz(u);
		int s = sz[u];
		while(1){
			int w = 0, msz = 0;
			for(auto v: adj[u]) if(!dead[v] && v != par[u] && msz < sz[v]){
				w = v, msz = sz[v];
			}
			if(msz * 2 <= s) return u;
			u = w;
		}
	}
	void dfs_dist(int u, int p){
		dist[u].push_back(dist[p].back() + 1);
		for(auto v: adj[u]) if(!dead[v] && v != p) dfs_dist(v, u);
	}
	void dfs_centroid(int u, int p){
		dead[u = centroid(u)] = true;
		cpar[u] = p;
		if(p != -1) cchild[p].push_back(u);
		else root = u;
		dist[u].push_back(0);
		int d = 0;
		for(auto v: adj[u]) if(!dead[v]) dfs_dist(v, u);
		for(auto v: adj[u]) if(!dead[v]) dfs_centroid(v, u);
	}
	void init(){
		dfs_centroid(0, -1);
	}
};

// 156485479_4_5_5
// AHU Algorithm ( Rooted Tree Isomorphism ) / Tree Isomorphism
// O(n)
void radix_sort(vector<pair<int, vector<int>>> &arr){
	int n = int(arr.size()), mxval = 0, mxsz = 1 + accumulate(arr.begin(), arr.end(), 0, [](int x, const pair<int, vector<int>> &y){return max(x, y.second.size());});
	vector<vector<int>> occur(mxsz);
	for(int i = 0; i < n; ++ i){
		occur[arr[i].second.size()].push_back(i);
		for(auto x: arr[i].second) mxval = max(mxval, x);
	}
	++ mxval;
	for(int size = 1; size < mxsz; ++ size) for(int d = size - 1; d >= 0; -- d){
		vector<vector<int>> bucket(mxval);
		for(auto i: occur[size]) bucket[arr[i].second[d]].push_back(i);
		occur[size].clear();
		for(auto &b: bucket) for(auto i: b) occur[size].push_back(i);
	}
	vector<pair<int, vector<int>>> res;
	res.reserve(n);
	for(auto &b: occur) for(auto i: b) res.push_back(arr[i]);
	swap(res, arr);
}
bool isomorphic(const vector<vector<vector<int>>> &adj, const vector<int> &root){
	int n = int(adj[0].size());
	if(int(adj[1].size()) != n) return false;
	vector<vector<vector<int>>> occur(2);
	vector<vector<int>> depth(2, vector<int>(n)), par(2, vector<int>(n, -1));
	for(int k = 0; k < 2; ++ k){
		function<void(int, int)> dfs = [&](int u, int p){
			par[k][u] = p;
			for(auto v: adj[k][u]) if(v != p){
				depth[k][v] = depth[k][u] + 1;
				dfs(v, u);
			}
		};
		dfs(root[k], -1);
		int mxdepth = 1 + accumulate(depth[k].begin(), depth[k].end(), 0, [](int x, int y){return max(x, y);});
		occur[k].resize(mxdepth);
		for(int u = 0; u < n; ++ u) occur[k][depth[k][u]].push_back(u);
	}
	int mxdepth = int(occur[0].size());
	if(mxdepth != int(occur[1].size())) return false;
	for(int d = 0; d < mxdepth; ++ d) if(occur[0][d].size() != occur[1][d].size()) return false;
	vector<vector<int>> label(2, vector<int>(n)), pos(2, vector<int>(n));
	vector<vector<vector<int>>> sorted_list(mxdepth, vector<vector<int>>(2));
	for(int k = 0; k < 2; ++ k){
		sorted_list[mxdepth - 1][k].reserve(occur[k][mxdepth - 1].size());
		for(auto u: occur[k][mxdepth - 1]) sorted_list[mxdepth - 1][k].push_back(u);
	}
	for(int d = mxdepth - 2; d >= 0; -- d){
		vector<vector<pair<int, vector<int>>>> tuples(2);
		for(int k = 0; k < 2; ++ k){
			tuples[k].reserve(occur[k][d].size());
			for(auto u: occur[k][d]){
				pos[k][u] = int(tuples[k].size());
				tuples[k].emplace_back(u, vector<int>());
			}
			for(auto v: sorted_list[d + 1][k]){
				int u = par[k][v];
				tuples[k][pos[k][u]].second.push_back(label[k][v]);
			}
			radix_sort(tuples[k]);
		}
		for(int i = 0; i < int(tuples[0].size()); ++ i) if(tuples[0][i].second != tuples[1][i].second) return false;
		for(int k = 0; k < 2; ++ k){
			int cnt = 0;
			sorted_list[d][k].reserve(occur[k][d].size());
			sorted_list[d][k].push_back(tuples[k][0].first);
			for(int i = 1; i < int(tuples[k].size()); ++ i){
				int u = tuples[k][i].first;
				label[k][u] = (tuples[k][i - 1].second == tuples[k][i].second ? cnt : ++ cnt);
				sorted_list[d][k].push_back(u);
			}
		}
	}
	return true;
}
vector<int> centroid(const vector<vector<int>> &adj){
	int n = int(adj.size());
	vector<int> size(n, 1);
	function<void(int, int)> dfs_sz = [&](int u, int p){
		for(auto v: adj[u]) if(v != p){
			dfs_sz(v, u);
			size[u] += size[v];
		}
	};
	dfs_sz(0, -1);
	function<vector<int>(int, int)> dfs_cent = [&](int u, int p){
		for(auto v: adj[u]) if(v != p && size[v] > n / 2) return dfs_cent(v, u);
		for(auto v: adj[u]) if(v != p && n - size[v] <= n / 2) return vector<int>{u, v};
		return vector<int>{u};
	};
	return dfs_cent(0, -1);
}
bool isomorphic(const vector<vector<vector<int>>> &adj){
	vector<vector<int>> cent{centroid(adj[0]), centroid(adj[1])};
	if(cent[0].size() != cent[1].size()) return false;
	for(auto u: cent[0]) for(auto v: cent[1]) if(isomorphic(adj, vector<int>{u, v})) return true;
	return false;
}

// 156485479_4_6_1
// Shortest Path Tree On Sparse Graph ( Dijkstra, Bellman Ford, SPFA )
template<typename T = long long, typename BO = plus<T>, typename Compare = less<T>>
struct shortest_path_tree{
	struct edge{
		int from, to;
		T cost;
	};
	int N;
	BO bin_op;
	Compare cmp;
	const T inf, id;
	vector<vector<int>> adj;
	vector<edge> edge;
	vector<T> dist;
	vector<int> parent;
	shortest_path_tree(int N, const T inf = numeric_limits<T>::max() / 8, BO bin_op = plus<T>(), T id = 0, Compare cmp = less<T>()): N(N), inf(inf), bin_op(bin_op), id(id), cmp(cmp), adj(N){ }
	void insert(int u, int v, T w){
		adj[u].push_back(int(edge.size()));
		edge.push_back({u, v, w});
	}
	void init(){
		dist.resize(N), parent.resize(N);
		fill(dist.begin(), dist.end(), inf), fill(parent.begin(), parent.end(), -1);
	}
	void init_bfs(const vector<int> S = {0}){
		init();
		deque<int> q;
		for(auto s: S){
			dist[s] = id;
			q.push_back(s);
		}
		while(!q.empty()){
			int u = q.front();
			q.pop_front();
			for(auto i: adj[u]){
				auto [_, v, w] = edge[i];
				if(dist[v] == inf){
					dist[v] = bin_op(dist[u], w);
					q.push_back(v);
				}
			}
		}
	}
	void init_dijkstra(const vector<int> S = {0}){
		init();
		auto qcmp = [&](const pair<T, int> &lhs, const pair<T, int> &rhs){
			return lhs.first == rhs.first ? lhs.second < rhs.second : cmp(rhs.first, lhs.first);
		};
		priority_queue<pair<T, int>, vector<pair<T, int>>, decltype(qcmp)> q(qcmp);
		for(auto s: S){
			dist[s] = id;
			q.push({id, s});
		}
		while(!q.empty()){
			auto [d, u] = q.top();
			q.pop();
			if(d != dist[u]) continue;
			for(int i: adj[u]){
				auto [u, v, w] = edge[i];
				if(cmp(bin_op(dist[u], w), dist[v])){
					dist[v] = bin_op(dist[u], w);
					parent[v] = i;
					q.push({dist[v], v});
				}
			}
		}
	}
	pair<vector<int>, vector<int>> init_bellman_ford(const vector<int> S = {0}, bool find_any_cycle = false){ // cycle {vertices, edges}
		if(find_any_cycle){
			fill(dist.begin(), dist.end(), id);
			fill(parent.begin(), parent.end(), -1);
		}
		else{
			init();
			for(auto s: S){
				dist[s] = id;
			}
		}
		int x;
		for(int i = 0; i < N; ++ i){
			x = -1;
			for(int j = 0; j < edge.size(); ++ j){
				auto [u, v, w] = edge[j];
				if(cmp(dist[u], inf) && cmp(bin_op(dist[u], w), dist[v])){
					dist[v] = cmp(-inf, bin_op(dist[u], w)) ? bin_op(dist[u], w) : -inf;
					parent[v] = j;
					x = v;
				}
			}
		}
		if(x == -1) return {};
		else{
			int y = x;
			for(int i = 0; i < N; ++ i) y = parent[y];
			vector<int> vertices, edges;
			for(int c = y; ; c = edge[parent[c]].from){
				vertices.push_back(c), edges.push_back(parent[c]);
				if(c == y && vertices.size() > 1) break;
			}
			reverse(vertices.begin(), vertices.end()), reverse(edges.begin(), edges.end());
			return {vertices, edges};
		}
	}
	bool init_spfa(const vector<int> S = {0}){ // returns false if cycle
		init();
		vector<int> cnt(N);
		vector<bool> inq(N);
		deque<int> q;
		for(auto s: S){
			dist[s] = id;
			q.push_back(s);
			inq[s] = true;
		}
		while(!q.empty()){
			int u = q.front();
			q.pop_front();
			inq[u] = false;
			for(int i: adj[u]){
				auto [u, v, w] = edge[i];
				if(cmp(bin_op(dist[u], w), dist[v])){
					dist[v] = bin_op(dist[u], w);
					parent[v] = i;
					if(!inq[v]){
						q.push_back(v);
						inq[v] = true;
						++ cnt[v];
						if(cnt[v] > N) return false;
					}
				}
			}
		}
		return true;
	}
	pair<vector<int>, vector<int>> path_from_root(int u){
		vector<int> vertices, edges;
		for(; parent[u] != -1; u = edge[parent[u]].from){
			vertices.push_back(u);
			edges.push_back(parent[u]);
		}
		vertices.push_back(u);
		reverse(vertices.begin(), vertices.end()), reverse(edges.begin(), edges.end());
		return {vertices, edges};
	}
};

// 156485479_4_6_2
// Shortest Path Tree On Dense Graph ( Dijkstra, Floyd Warshall )
template<typename T = long long, typename BO = plus<T>, typename Compare = less<T>>
struct shortest_path_tree_dense{
	int N;
	BO bin_op;
	Compare cmp;
	const T inf, id;
	vector<vector<T>> adj, dist;
	vector<vector<int>> parent, pass;
	shortest_path_tree_dense(int N, const T inf = numeric_limits<T>::max() / 8, BO bin_op = plus<T>(), T id = 0, Compare cmp = less<T>()): N(N), inf(inf), bin_op(bin_op), id(id), cmp(cmp), adj(N, vector<T>(N, inf)){ }
	void insert(int u, int v, T w){
		assert(u != v);
		if(cmp(w, adj[u][v])) adj[u][v] = w;
	}
	void clear(){
		for(int u = 0; u < N; ++ u) fill(adj[u].begin(), adj[u].end(), inf);
	}
	void init(int s){
		dist.resize(N), parent.resize(N), dist[s].resize(N), parent[s].resize(N);
		fill(dist[s].begin(), dist[s].end(), inf), fill(parent[s].begin(), parent[s].end(), -1);
	}
	void init_dijkstra(int s){
		init(s);
		vector<bool> visited(N);
		dist[s][s] = id;
		for(int i = 0; i < N; ++ i){
			int u = -1;
			for(int v = 0; v < N; ++ v) if(!visited[v] && (u == -1 || cmp(dist[s][v], dist[s][u]))) u = v;
			if(dist[s][u] == inf) break;
			visited[u] = true;
			for(int v = 0; v < N; ++ v) if(cmp(bin_op(dist[s][u], adj[u][v]), dist[s][v])){
				dist[s][v] = bin_op(dist[s][u], adj[u][v]);
				parent[s][v] = u;
			}
		}
	}
	vector<int> path_from_root(int s, int u){
		if(dist[s][u] >= inf) return { };
		vector<int> vertices;
		for(; u != s; u = parent[s][u]) vertices.push_back(u);
		vertices.push_back(s);
		reverse(vertices.begin(), vertices.end());
		return vertices;
	}
	void init_all_pair(){
		pass.resize(N, vector<int>(N)), dist = adj;
		for(int u = 0; u < N; ++ u) fill(pass[u].begin(), pass[u].end(), -1), dist[u][u] = id;
	}
	bool init_floyd_warshall(){
		init_all_pair();
		for(int k = 0; k < N; ++ k) for(int i = 0; i < N; ++ i) for(int j = 0; j < N; ++ j){
			if(cmp(dist[i][k], inf) && cmp(dist[k][j], inf) && cmp(bin_op(dist[i][k], dist[k][j]), dist[i][j])){
				dist[i][j] = bin_op(dist[i][k], dist[k][j]);
				pass[i][j] = k;
			}
		}
		for(int u = 0; u < N; ++ u) if(dist[u][u] != id) return false;
		return true;
	}
	vector<int> path_between(int u, int v){
		if(dist[u][v] == inf) return { };
		vector<int> path;
		function<void(int, int)> solve = [&](int u, int v){
			if(pass[u][v] == -1){
				path.push_back(u);
				return;
			}
			solve(u, pass[u][v]), solve(pass[u][v], v);
		};
		solve(u, v);
		path.push_back(v);
		return path;
	}
};

// 156485479_4_7
// Minimum Spanning Forest
// O(M log N)
struct disjoint{
	int N;
	vector<int> parent, size;
	// vector<pair<int, int>> Log_parent, Log_size; // For persistency
	disjoint(int N): N(N), parent(N), size(N, 1){ iota(parent.begin(), parent.end(), 0); }
	void expand(){
		++ N;
		parent.push_back(parent.size());
		size.push_back(1);
	}
	int root(int u){
		// Log_parent.emplace_back(u, parent[u]);
		return parent[u] == u ? u : parent[u] = root(parent[u]);
	}
	bool merge(int u, int v){
		u = root(u), v = root(v);
		if(u == v) return false;
		if(size[u] < size[v]) swap(u, v);
		// Log_parent.emplace_back(v, parent[v]);
		parent[v] = u;
		// Log_size.emplace_back(u, size[u]);
		size[u] += size[v];
		return true;
	}
	bool share(int u, int v){
		return root(parent[u]) == root(parent[v]);
	}
	/*void reverse(int p, int s){
		while(parent.size() != p) reverse_parent();
		while(size.size() != s) reverse_size();
	}
	void reverse_parent(){
		auto [u, p] = Log_parent.back();
		Log_parent.pop_back();
		parent[u] = p;
	}
	void reverse_size(){
		auto [u, s] = Log_size.back();
		Log_size.pop_back();
		size[u] = s;
	}*/
};
template<typename T = long long>
struct minimum_spanning_forest{
	int N;
	vector<vector<pair<int, int>>> adj;
	vector<vector<int>> mstadj;
	vector<int> mstedge;
	vector<tuple<int, int, T>> edge;
	T cost = 0;
	minimum_spanning_forest(int N): N(N), adj(N), mstadj(N){ }
	void insert(int u, int v, T w){
		adj[u].emplace_back(v, edge.size()), adj[v].emplace_back(u, edge.size());
		edge.emplace_back(u, v, w);
	}
	void init_kruskal(){
		int M = int(edge.size());
		vector<int> t(M);
		iota(t.begin(), t.end(), 0);
		sort(t.begin(), t.end(), [&](int i, int j){ return get<2>(edge[i]) < get<2>(edge[j]); });
		disjoint dsu(N);
		for(auto i: t){
			auto [u, v, w] = edge[i];
			if(dsu.merge(u, v)){
				cost += w;
				mstedge.push_back(i);
				mstadj[u].push_back(v), mstadj[v].push_back(u);
			}
		}
	}
	void init_prim(){
		vector<bool> used(N);
		priority_queue<tuple<T, int, int, int>, vector<tuple<T, int, int, int>>, greater<tuple<T, int, int, int>>> q;
		for(int u = 0; u < N; ++ u) if(!used[u]){
			q.emplace(0, u, -1, -1);
			while(!q.empty()){
				auto [w, u, p, i] = q.top();
				q.pop();
				if(used[u]) continue;
				used[u] = true;
				if(p != -1){
					mstedge.push_back(i);
					mstadj[u].push_back(p), mstadj[p].push_back(u);
				}
				cost += w;
				for(auto [v, i]: adj[u]) if(!used[v]) q.emplace(get<2>(edge[i]), v, u, i);
			}
		}
	}
};
// For dense graph
// O(N^2)
template<typename T = long long>
struct minimum_spanning_forest_dense{
	static constexpr T inf = numeric_limits<T>::max();
	int N, edgecnt = 0;
	vector<vector<T>> adj;
	vector<vector<int>> adjL;
	vector<vector<bool>> mstadj;
	T cost = 0;
	minimum_spanning_forest_dense(int N): N(N), adj(N, vector<T>(N, inf)), adjL(N), mstadj(N, vector<bool>(N)){ }
	void insert(int u, int v, T w){
		adj[u][v] = adj[v][u] = w;
		adjL[u].push_back(v), adjL[v].push_back(u);
	}
	void init_prim(){
		vector<bool> used(N), reached(N);
		vector<int> reach;
		vector<tuple<T, int, int>> t(N, {inf, -1, 0});
		for(int u = 0; u < N; ++ u) if(!used[u]){
			function<void(int)> dfs = [&](int u){
				reached[u] = true;
				reach.push_back(u);
				for(auto v: adjL[u]) if(!reached[v]) dfs(v);
			};
			dfs(u);
			get<0>(t[reach[0]]) = 0;
			for(int tt = 0; tt < reach.size(); ++ tt){
				int u = -1;
				for(auto v: reach) if(!used[v] && (u == -1 || get<0>(t[v]) < get<0>(t[u]))) u = v;
				auto [w, p, _] = t[u];
				used[u] = true;
				cost += w;
				if(p != -1){
					mstadj[u][p] = mstadj[p][u] = true;
					++ edgecnt;
				}
				for(auto v: reach) if(adj[u][v] < get<0>(t[v])) t[v] = {adj[u][v], u, v};
			}
			reach.clear();
		}
	}
};

// 156485479_4_8
// Topological Sort / Returns false if there's a cycle
// O(V + E)
template<class Graph>
pair<bool, vector<int>> toposort(const Graph &adj){
	int n = int(adj.size());
	vector<int> indeg(n), res(n);
	for(int u = 0; u < n; ++ u) for(auto v: adj[u]) ++ indeg[v];
	deque<int> q;
	for(int u = 0; u < n; ++ u) if (!indeg[u]) q.push_back(u);
	int cnt = 0;
	while(q.size() > 0){
		int u = q.front();
		q.pop_front();
		res[u] = cnt ++;
		for(auto v: adj[u]) if (!(-- indeg[v])) q.push_back(v);
	}
	return {cnt == n, res};
}
// Lexicographically Smallest Topological Sort / Return false if there's a cycle
// O(V log V + E)
template<class Graph>
pair<bool, vector<int>> toposort(const Graph &adj){
	int n = adj.size();
	vector<int> indeg(n), res(n);
	for(int u = 0; u < n; ++ u) for(auto v: adj[u]) ++ indeg[v];
	priority_queue<int, vector<int>, greater<int>> q;
	for(int u = 0; u < n; ++ u) if (!indeg[u]) q.push(u);
	int cnt = 0;
	while(q.size() > 0){
		int u = q.top();
		q.pop();
		res[u] = cnt ++;
		for(auto v: adj[u]) if (!(-- indeg[v])) q.push(v);
	}
	return {cnt == n, res};
}

// 156485479_4_9
// Two Satisfiability / values hold the result
// O(V + E)
struct two_sat{
	int N;
	vector<vector<int>> adj;
	vector<int> value, val, comp, z;
	two_sat(int N = 0): N(N), adj(N << 1){ }
	int time = 0;
	int add_var(){
		adj.emplace_back();
		adj.emplace_back();
		return ++ N;
	}
	void either(int u, int v){
		u = max(2 * u, -1 - 2 * u);
		v = max(2 * v, -1 - 2 * v);
		adj[u].push_back(v ^ 1);
		adj[v].push_back(u ^ 1);
	}
	void set_value(int u){
		either(u, u);
	}
	void at_most_one(const vector<int> &arr){
		if(int(arr.size()) <= 1) return;
		int cur = ~arr[0];
		for(int u = 2; u < int(arr.size()); ++ u){
			int next = add_var();
			either(cur, ~arr[u]);
			either(cur, next);
			either(~arr[u], next);
			cur = ~next;
		}
		either(cur, ~arr[1]);
	}
	int dfs(int u){
		int low = val[u] = ++ time, v;
		z.push_back(u);
		for(auto v: adj[u]) if(!comp[v]) low = min(low, val[v] ?: dfs(v));
		++ time;
		if(low == val[u]) do{
			v = z.back();
			z.pop_back();
			comp[v] = time;
			if(value[v >> 1] == -1) value[v >> 1] = v & 1;
		}while(v != u);
		return val[u] = low;
	}
	bool solve(){
		value.assign(N, -1);
		val.assign(2 * N, 0);
		comp = val;
		for(int u = 0; u < N << 1; ++ u) if(!comp[u]) dfs(u);
		for(int u = 0; u < N; ++ u) if(comp[u << 1] == comp[u << 1 ^ 1]) return false;
		return true;
	}
};

// 156485479_4_10
// Euler Walk / adj list must be of form  [vertex, edge_index]
// O(N + M)
pair<vector<int>, vector<int>> euler_walk(const vector<vector<pair<int, int>>> &adj, int m, int source = 0){
	int n = int(adj.size());
	vector<int> deg(n), its(n), used(m), res_v, res_e;
	vector<pair<int, int>> q = {{source, -1}};
	++ deg[source]; // to allow Euler paths, not just cycles
	while(!q.empty()){
		auto [u, e] = q.back();
		int &it = its[u], end = int(adj[u].size());
		if(it == end){ res_v.push_back(u); res_e.push_back(e); q.pop_back(); continue; }
		auto [v, f] = adj[u][it ++];
		if(!used[f]){
			-- deg[u], ++ deg[v];
			used[f] = 1; q.emplace_back(v, f);
		}
	}
	for(auto d: deg) if(d < 0 || int(res_v.size()) != m + 1) return {};
	return {{res_v.rbegin(), res_v.rend()}, {res_e.rbegin() + 1, res_e.rend()}};
}

// 156485479_5_1
// Returns the starting position of the lexicographically minimal rotation
// O(n)
template<typename Str>
int min_rotation(Str s){
	int n = int(s.size());
	s += s;
	int a = 0;
	for(int b = 0; b < n; ++ b) for(int i = 0; i < n; ++ i){
		if(a + i == b || s[a + i] < s[b + i]){
			b += max(0, i - 1);
			break;
		}
		if(s[a + i] > s[b + i]){
			a = b;
			break;
		}
	}
	return a;
}

// 156485479_5_2
// All Palindromic Substrings ( Manacher's Algorithm )
// O(N)
template<typename Str>
array<vector<int>, 2> manacher(const Str &s){
	int n = int(s.size());
	array<vector<int>, 2> p = {vector<int>(n + 1), vector<int>(n)};
	for(int z = 0; z < 2; ++ z){
		for(int i = 0 ,l = 0 , r = 0; i < n; ++ i){
			int t = r - i + !z;
			if(i < r) p[z][i] = min(t, p[z][l + t]);
			int L = i - p[z][i], R = i + p[z][i] - !z;
			while(L >= 1 && R + 1 < n && s[L - 1] == s[R + 1]) ++ p[z][i], -- L, ++ R;
			if(R > r) l = L, r = R;
		}
	}
	return p;
}

// 156485479_5_3
// Suffix Array and Kasai's Algorithm
// O(N log N)
template<typename T, typename BO>
struct sparse_table{
	int N;
	BO bin_op;
	T id;
	vector<vector<T>> val;
	vector<int> bit;
	template<typename IT>
	sparse_table(IT begin, IT end, BO bin_op, T id): N(distance(begin, end)), bin_op(bin_op), id(id), val(__lg(N) + 1, vector<T>(begin, end)), bit(N + 1){
		for(int i = 1; i <= N; ++ i) bit[i] = __lg(i);
		for(int i = 0; i < __lg(N); ++ i) for(int j = 0; j < N; ++ j){
			val[i + 1][j] = bin_op(val[i][j], val[i][min(N - 1, j + (1 << i))]);
		}
	}
	sparse_table(){ }
	T query(int l, int r){
		if(l >= r) return id;
		int d = bit[r - l];
		return bin_op(val[d][l], val[d][r - (1 << d)]);
	}
};
template<typename Str, int lim = 256>
struct suffix_array{
	int N;
	vector<int> p, c, l; // p[i]: starting index of i-th suffix in SA, c[i]: position of suffix of index i in SA
	sparse_table<int, function<int(int, int)>> rmq;
	suffix_array(const Str &s, typename Str::value_type delim = '$'): N(s.size()), c(N){
		p = sort_cyclic_shifts(s + delim);
		p.erase(p.begin());
		for(int i = 0; i < N; ++ i) c[p[i]] = i;
		l = get_lcp(s, p);
		rmq = sparse_table<int, function<int(int, int)>>(l.begin(), l.end(), [](int x, int y){ return min(x, y); }, numeric_limits<int>::max() / 2);
	}
	vector<int> sort_cyclic_shifts(const Str &s){
		int n = int(s.size());
		vector<int> p(n), c(n), cnt(max(lim, n));
		for(auto x: s) ++ cnt[x];
		for(int i = 1; i < lim; ++ i) cnt[i] += cnt[i - 1];
		for(int i = 0; i < n; ++ i) p[-- cnt[s[i]]] = i;
		int classes = 1;
		for(int i = 1; i < n; ++ i){
			if(s[p[i]] != s[p[i - 1]]) classes ++;
			c[p[i]] = classes - 1;
		}
		vector<int> pn(n), cn(n);
		for(int h = 0; (1 << h) < n; ++ h){
			for(int i = 0; i < n; ++ i){
				pn[i] = p[i] - (1 << h);
				if(pn[i] < 0) pn[i] += n;
			}
			fill(cnt.begin(), cnt.begin() + classes, 0);
			for(auto x: pn) ++ cnt[c[x]];
			for(int i = 1; i < classes; ++ i) cnt[i] += cnt[i - 1];
			for(int i = n - 1; i >= 0; -- i) p[-- cnt[c[pn[i]]]] = pn[i];
			cn[p[0]] = 0, classes = 1;
			for(int i = 1; i < n; ++ i){
				if(c[p[i]] != c[p[i - 1]] || c[(p[i] + (1 << h)) % n] != c[(p[i - 1] + (1 << h)) % n]){
					++ classes;
				}
				cn[p[i]] = classes - 1;
			}
			c.swap(cn);
		}
		return p;
	}
	vector<int> get_lcp(const Str &s, const vector<int> &p){
		int n = int(s.size());
		vector<int> rank(n);
		for(int i = 0; i < n; ++ i) rank[p[i]] = i;
		int k = 0;
		vector<int> l(n - 1);
		for(int i = 0; i < n; ++ i){
			if(rank[i] == n - 1){
				k = 0;
				continue;
			}
			int j = p[rank[i] + 1];
			while(i + k < n && j + k < n && s[i + k] == s[j + k]) ++ k;
			l[rank[i]] = k;
			if(k) -- k;
		}
		return l;
	}
	int lcp(int i, int j){
		return rmq.query(min(c[i], c[j]), max(c[i], c[j]));
	}
};

// 156485479_5_4
// Z Function / for each position i > 0, returns the length of the longest prefix which is also a prefix starting at i
// O(n)
template<typename Str>
vector<int> z_function(const Str &s){
	int n = int(s.size());
	vector<int> z(n);
	for(int i = 1, l = 0, r = 1; i < n; ++ i){
		if(i < r) z[i] = min(r - i, z[i - l]);
		while(i + z[i] < n && s[z[i]] == s[i + z[i]]) ++ z[i];
		if(i + z[i] > r) l = i, r = i + z[i];
	}
	return z;
}

// 156485479_5_5
// Aho Corasic Automaton
// O(W) preprocessing, O(L) per query
template<typename Str, int lim = 128>
struct aho_corasic{
	typedef typename Str::value_type Char;
	struct node{
		int par, link = -1, elink = -1;
		Char cpar;
		vector<int> next, go;
		bool isleaf = false;
		node(int par = -1, Char pch = '$'): par(par), cpar(pch), next(128, -1), go(128, -1){ }
		long long val = 0;
		bool mark = false;
	};
	vector<node> state = vector<node>(1);
	int insert(const Str &s){
		int u = 0;
		for(auto &c: s){
			if(state[u].next[c] == -1){
				state[u].next[c] = int(state.size());
				state.emplace_back(u, c);
			}
			u = state[u].next[c];
		}
		state[u].isleaf = true;
		return u;
	}
	int get_link(int u){
		if(state[u].link == -1){
			if(!u || !state[u].par) state[u].link = 0;
			else state[u].link = go(get_link(state[u].par), state[u].cpar);
		}
		return state[u].link;
	}
	int get_elink(int u){
		if(state[u].elink == -1){
			if(!u || !get_link(u)) state[u].elink = 0;
			else if(state[get_link(u)].isleaf) state[u].elink = get_link(u);
			else state[u].elink = get_elink(get_link(u));
		}
		return state[u].elink;
	}
	int go(int u, Char c){
		if(state[u].go[c] == -1){
			if(state[u].next[c] != -1) state[u].go[c] = state[u].next[c];
			else state[u].go[c] = u ? go(get_link(u), c) : u;
		}
		return state[u].go[c];
	}
	void print(int u, Str s = ""){
		cout << "Node " << u << ": par = " << state[u].par << ", cpar = " << state[u].cpar << ", string: " << s << "\n";
		for(int c = 0; c < lim; ++ c){
			if(state[u].next[c] != -1){
				cout << u << " => ";
				print(state[u].next[c], s + Str{c});
			}
		}
	}
};

// 156485479_5_6
// Prefix Function / Prefix Automaton
// O(N) each
template<typename Str>
vector<int> prefix_function(const Str &s){
	int n = int(s.size());
	vector<int> p(n);
	for(int i = 1; i < n; ++ i){
		int j = p[i - 1];
		while(j > 0 && s[i] != s[j]) j = p[j - 1];
		if(s[i] == s[j]) ++ j;
		p[i] = j;
	}
	return p;
}
template<typename Str, int lim = 128>
pair<vector<int>, vector<vector<int>>> prefix_automaton(const Str &s){
	vector<int> p = prefix_function(s);
	int n = int(s.size());
	vector<vector<int>> aut(n, vector<int>(lim + 1));
	for(int i = 0; i < n; ++ i) for(int c = 0; c <= lim; ++ c){
		if(i > 0 && c != s[i]) aut[i][c] = aut[p[i - 1]][c];
		else aut[i][c] = i + (c == s[i]);
	}
	return {p, aut};
}

// 156485479_5_7
// Polynomial Hash
// O(n) processing, O(log n) for lcp, O(n) for search, O(1) for query
template<typename Str>
struct polyhash: vector<vector<long long>>{
	const int lim;
	const long long base, mod;
	vector<long long> p;
	polyhash(int lim, long long mod): lim(lim), p(lim, 1), mod(mod), base(rngll() % (long long)(0.4 * mod) + 0.3 * mod){
		for(int i = 1; i < lim; ++ i) p[i] = p[i - 1] * base % mod;
	}
	void insert(const Str &s){
		this->emplace_back(s.size() + 1);
		for(int i = 0; i < int(s.size()); ++ i) this->back()[i + 1] = (this->back()[i] * base + s[i]) % mod;
	}
	void extend(typename Str::value_type c, int i = 0){
		(*this)[i].push_back(((*this)[i].back() * base + c) % mod);
	}
	long long query(int ql, int qr, int i = 0){
		return ((*this)[i][qr] - (*this)[i][ql] * p[qr - ql] % mod + mod) % mod;
	}
	int lcp(int i, int j, int posi = 0, int posj = 0){ // returns the length
		int low = 0, high = min(int((*this)[i].size()) - posi, int((*this)[j].size()) - posj);
		while(high - low > 1){
			int mid = low + high >> 1;
			query(posi, posi + mid, i) == query(posj, posj + mid, j) ? low = mid : high = mid;
		}
		return low;
	}
	int lcs(int i, int j, int posi, int posj){
		int low = 0, high = min(posi, posj) + 1;
		while(high - low > 1){
			int mid = low + high >> 1;
			query(posi - mid, posi, i) == query(posj - mid, posj, j) ? low = mid : high = mid;
		}
		return low;
	}
	vector<int> search(const Str &s, bool FIND_ALL = true, int i = 0){
		int len = s.size();
		long long v = 0;
		for(auto c: s) v = (v * base + c) % mod;
		vector<int> res;
		for(int j = 0; j + len < (*this)[i].size(); ++ j) if(v == query(j, j + len, i)){
			res.push_back(j);
			if(!FIND_ALL) break;
		}
		return res;
	}
};
template<typename Str>
struct double_polyhash{
	pair<polyhash<Str>, polyhash<Str>> h;
	double_polyhash(int N, long long mod): h{polyhash<Str>(N, mod), polyhash<Str>(N, mod)}{ }
	void insert(const Str &s){
		h.first.insert(s), h.second.insert(s);
	}
	void extend(typename Str::value_type c, int i = 0){
		h.first.extend(c, i), h.second.extend(c, i);
	}
	pair<long long, long long> query(int ql, int qr, int i = 0){
		return {h.first.query(ql, qr, i), h.second.query(ql, qr, i)};
	}
	int lcp(int i, int j, int posi = 0, int posj = 0){ // returns the length
		int low = 0, high = min(int(h.first[i].size()) - posi, int(h.first[j].size()) - posj);
		while(high - low > 1){
			int mid = low + high >> 1;
			query(posi, posi + mid, i) == query(posj, posj + mid, j) ? low = mid : high = mid;
		}
		return low;
	}
	vector<int> search(const Str &s, bool FIND_ALL = true, int i = 0){
		int len = s.size();
		pair<long long, long long> v;
		for(auto c: s) v = {(v.first * h.first.base + c) % h.first.mod, (v.second * h.second.base + c) % h.second.mod};
		vector<int> res;
		for(int j = 0; j + len < h.first[i].size(); ++ j) if(v == query(j, j + len, i)){
			res.push_back(j);
			if(!FIND_ALL) break;
		}
		return res;
	}
};

// 156485479_5_8
// Suffix Automaton
// O(log ALP_SIZE) per extend call
template<typename Str>
struct suffix_automaton{
	typedef typename Str::value_type Char;
	struct node{
		int len = 0, link = -1, firstpos = -1;
		bool isclone = false;
		map<Char, int> next;
		vector<int> invlink;
		int cnt = -1;
	};
	vector<node> state = vector<node>(1);
	int last = 0;
	suffix_automaton(const Str &s){
		state.reserve(s.size());
		for(auto c: s) insert(c);
	}
	void insert(Char c){
		int cur = state.size();
		state.push_back({state[last].len + 1, -1, state[last].len});
		int p = last;
		while(p != -1 && !state[p].next.count(c)){
			state[p].next[c] = cur;
			p = state[p].link;
		}
		if(p == -1) state[cur].link = 0;
		else{
			int q = state[p].next[c];
			if(state[p].len + 1 == state[q].len) state[cur].link = q;
			else{
				int clone = state.size();
				state.push_back({state[p].len + 1, state[q].link, state[q].firstpos, true, state[q].next});
				while(p != -1 && state[p].next[c] == q){
					state[p].next[c] = clone;
					p = state[p].link;
				}
				state[q].link = state[cur].link = clone;
			}
		}
		last = cur;
	}
	void print(){
		for(int u = 0; u < state.size(); ++ u){
			cout << "--------------------------------\n";
			cout << "Node " << u << ": len = " << state[u].len << ", link = " << state[u].link;
			cout << ", firstpos = " << state[u].firstpos << ", cnt = " << state[u].cnt;
			cout << ", isclone = " << state[u].isclone;
			cout << "\ninvlink = " << state[u].invlink << "next = " << state[u].next;
			cout << "--------------------------------" << endl;
		}
	}
	pair<int, int> match(const Str &s){ // (Length of the longest prefix of s, state)
		int u = 0;
		for(int i = 0; i < s.size(); ++ i){
			if(!state[u].next.count(s[i])) return {i, u};
			u = state[u].next[s[i]];
		}
		return {s.size(), u};
	}
	vector<long long> distinct_substr_cnt(){
		vector<long long> dp(state.size());
		function<long long(int)> solve = [&](int u){
			if(dp[u]) return dp[u];
			dp[u] = 1;
			for(auto [c, v]: state[u].next) dp[u] += solve(v);
			return dp[u];
		};
		solve(0);
		return dp;
	}
	vector<long long> distinct_substr_len(){
		vector<long long> res(state.size()), dp(state.size());
		function<long long(int)> solve = [&](int u){
			if(dp[u]) return res[u];
			dp[u] = 1;
			for(auto [c, v]: state[u].next){
				res[u] += solve(v) + dp[v];
				dp[u] += dp[v];
			}
			return res[u];
		};
		solve(0);
		return res;
	}
	pair<Str, int> k_th_substr(long long k){
		vector<long long> dp(distinct_substr_cnt());
		assert(dp[0] >= k && k);
		Str res;
		int u = 0;
		for(; -- k; ) for(auto [c, v]: state[u].next){
			if(k > dp[v]) k -= dp[v];
			else{
				res.push_back(c);
				u = v;
				break;
			}
		}
		return {res, u};
	}
	pair<Str, int> smallest_substr(int length){
		Str res;
		int u = 0;
		for(; length --; ){
			assert(!state[u].next.empty());
			auto it = state[u].next.begin();
			res.push_back(it->first);
			u = it->second;
		}
		return {res, u};
	}
	pair<int, int> find_first(const Str &s){ // length, pos
		auto [l, u] = match(s);
		return {l, state[u].firstpos - int(s.size()) + 1};
	}
	void process_invlink(){
		for(int u = 1; u < int(state.size()); ++ u) state[state[u].link].invlink.push_back(u);
	}
	vector<int> find_all(const Str &s, bool invlink_init = false){
		auto [l, u] = match(s);
		if(l < int(s.size())) return{};
		vector<int> res;
		if(!invlink_init) process_invlink();
		function<void(int)> solve = [&](int u){
			if(!state[u].isclone) res.push_back(state[u].firstpos);
			for(auto v: state[u].invlink) solve(v);
		};
		solve(u);
		for(auto &x: res) x += 1 - int(s.size());
		sort(res.begin(), res.end());
		return res;
	}
	Str lcs(const Str &s){
		int u = 0, l = 0, best = 0, bestpos = 0;
		for(int i = 0; i < int(s.size()); ++ i){
			while(u && !state[u].next.count(s[i])){
				u = state[u].link;
				l = state[u].len;
			}
			if(state[u].next.count(s[i])){
				u = state[u].next[s[i]];
				++ l;
			}
			if(l > best){
				best = l;
				bestpos = i;
			}
		}
		return {s.begin() + bestpos - best + 1, s.begin() + bestpos + 1};
	}
	vector<int> process_lcs(const Str &s){ // list of length ending at the pos
		int u = 0, l = 0;
		vector<int> res(s.size());
		for(int i = 0; i < int(s.size()); ++ i){
			while(u && !state[u].next.count(s[i])){
				u = state[u].link;
				l = state[u].len;
			}
			if(state[u].next.count(s[i])){
				u = state[u].next[s[i]];
				++ l;
			}
			res[i] = l;
		}
		return res;
	}
	void process_cnt(bool invlink_init = false){
		for(int u = 0; u < int(state.size()); ++ u) state[u].cnt = (!state[u].isclone && u);
		if(!invlink_init) process_invlink();
		function<void(int)> solve = [&](int u){
			for(auto v: state[u].invlink){
				solve(v);
				state[u].cnt += state[v].cnt;
			}
		};
		solve(0);
	}
	int count(const string &s){
		assert(state[0].cnt != -1);
		return state[match(s).second].cnt;
	}
};
template<typename Str>
Str lcs(vector<Str> a){
	swap(a[0], *min_element(a.begin(), a.end(), [](const Str &s, const Str &t){ return s.size() < t.size(); }));
	vector<int> res(a[0].size());
	iota(res.begin(), res.end(), 1);
	for(int i = 1; i < a.size(); ++ i){
		auto t = suffix_automaton(a[i]).process_lcs(a[0]);
		for(int j = 0; j < int(a[0].size()); ++ j) ctmin(res[j], t[j]);
	}
	int i = max_element(res.begin(), res.end()) - res.begin();
	return {a[0].begin() + i + 1 - res[i], a[0].begin() + i + 1};
}

// 156485479_5_9
// Suffix Tree
	
// 156485479_5_10
// Palindrome Tree

// 156485479_5_11
// Levenshtein Automaton

// 156485479_6_1
// 2D Geometry Classes
template<typename T = long long> struct point{
	T x, y;
	int ind;
	template<typename U> point(const point<U> &otr): x(otr.x), y(otr.y), ind(otr.ind){ }
	template<typename U, typename V> point(const pair<U, V> &p): x(p.first), y(p.second){ }
	template<typename U = T, typename V = T> point(U x = 0, V y = 0): x(x), y(y){ }
	template<typename U> explicit operator point<U>() const{ return point<U>(static_cast<U>(x), static_cast<U>(y)); }
	T operator*(const point &otr) const{ return x * otr.x + y * otr.y; }
	T operator^(const point &otr) const{ return x * otr.y - y * otr.x; }
	point operator+(const point &otr) const{ return point(x + otr.x, y + otr.y); }
	point &operator+=(const point &otr){ return *this = *this + otr; }
	point operator-(const point &otr) const{ return point(x - otr.x, y - otr.y); }
	point &operator-=(const point &otr){ return *this = *this - otr; }
	point operator*(const T &c) const{ return point(x * c, y * c); }
	point &operator*=(const T &c) { return *this = *this * c; }
	point operator/(const T &c) const{ return point(x / c, y / c); }
	point &operator/=(const T &c) { return *this = *this / c; }
	point operator-() const{ return point(-x, -y); }
	bool operator<(const point &otr) const{ return tie(x, y) < tie(otr.x, otr.y); }
	bool operator>(const point &otr) const{ return tie(x, y) > tie(otr.x, otr.y); }
	bool operator<=(const point &otr) const{ return tie(x, y) <= tie(otr.x, otr.y); }
	bool operator>=(const point &otr) const{ return tie(x, y) >= tie(otr.x, otr.y); }
	bool operator==(const point &otr) const{ return tie(x, y) == tie(otr.x, otr.y); }
	bool operator!=(const point &otr) const{ return tie(x, y) != tie(otr.x, otr.y); }
	double norm() const{ return sqrt(x * x + y * y); }
	T squared_norm() const{ return x * x + y * y; }
	double arg() const{ return atan2(y, x); } // [-pi, pi]
	point<double> unit() const{ return point<double>(x, y) / norm(); }
	point perp() const{ return point(-y, x); }
	point<double> normal() const{ return perp().unit(); }
	point<double> rotate(const double &theta) const{ return point<double>(x * cos(theta) - y * sin(theta), x * sin(theta) + y * cos(theta)); }
	point reflect_x() const{ return point(x, -y); }
	point reflect_y() const{ return point(-x, y); }
	bool operator||(const point &otr) const{ return !(*this ^ otr); }
};
template<typename T> point<T> operator*(const T &c, const point<T> &p){ return point<T>(c * p.x, c * p.y); }
template<typename T> istream &operator>>(istream &in, point<T> &p){ return in >> p.x >> p.y; }
template<typename T> ostream &operator<<(ostream &out, const point<T> &p){ return out << "(" << p.x << ", " << p.y << ")"; }
template<typename T> double distance(const point<T> &p, const point<T> &q){ return (p - q).norm(); }
template<typename T> T squared_distance(const point<T> &p, const point<T> &q){ return (p - q).squared_norm(); }
template<typename T, typename U, typename V> T ori(const point<T> &p, const point<U> &q, const point<V> &r){ return (q - p) ^ (r - p); }
template<typename T> T doubled_signed_area(const vector<point<T>> &arr){
	T s = arr.back() ^ arr.front();
	for(int i = 1; i < arr.size(); ++ i) s += arr[i - 1] ^ arr[i];
	return s;
}
template<typename T = long long> struct line{
	point<T> p, d; // p + d*t
	template<typename U = T, typename V = T> line(point<U> p = {0, 0}, point<V> q = {0, 0}, bool Two_Points = true): p(p), d(Two_Points ? q - p : q){ }
	template<typename U> line(point<U> d): p(), d(static_cast<point<T>>(d)){ }
	line(T a, T b, T c): p(a ? -c / a : 0, !a && b ? -c / b : 0), d(-b, a){ }
	template<typename U> explicit operator line<U>() const{ return line<U>(point<U>(p), point<U>(d), false); }
	point<T> q() const{ return p + d; }
	bool degen() const{ return d == point<T>(); }
	tuple<T, T, T> coef(){ return {d.y, -d.x, d.perp() * p}; } // d.y (X - p.x) - d.x (Y - p.y) = 0
	bool operator||(const line<T> &L){ return d || L.d; }
};
template<typename T> bool on_line(const point<T> &p, const line<T> &L){
	if(L.degen()) return p == L.p;
	return (p - L.p) || L.d;
}
template<typename T> bool on_ray(const point<T> &p, const line<T> &L){
	if(L.degen()) return p == L.p;
	auto a = L.p - p, b = L.q() - p;
	return (a || b) && a * L.d <= 0;
}
template<typename T> bool on_segment(const point<T> &p, const line<T> &L){
	if(L.degen()) return p == L.p;
	auto a = L.p - p, b = L.q() - p;
	return (a || b) && a * b <= 0;
}
template<typename T> double distance_to_line(const point<T> &p, const line<T> &L){
	if(L.degen()) return distance(p, L.p);
	return abs((p - L.p) ^ L.d) / L.d.norm();
}
template<typename T> double distance_to_ray(const point<T> &p, const line<T> &L){
	if((p - L.p) * L.d <= 0) return distance(p, L.p);
	return distance_to_line(p, L);
}
template<typename T> double distance_to_segment(const point<T> &p, const line<T> &L){
	if((p - L.p) * L.d <= 0) return distance(p, L.p);
	if((p - L.q()) * L.d >= 0) return distance(p, L.q());
	return distance_to_line(p, L);
}
template<typename T> point<double> projection(const point<T> &p, const line<T> &L){ return static_cast<point<double>>(L.p) + (L.degen() ? point<double>() : (p - L.p) * L.d / L.d.norm() * static_cast<point<double>>(L.d)); }
template<typename T> point<double> reflection(const point<T> &p, const line<T> &L){ return 2.0 * projection(p, L) - static_cast<point<double>>(p); }
template<typename T> point<double> closest_point_on_segment(const point<T> &p, const line<T> &L){ return (p - L.p) * L.d <= 0 ? static_cast<point<double>>(L.p) : ((p - L.q()) * L.d >= 0 ? static_cast<point<double>>(L.q()) : projection(p, L)); }
template<int TYPE> struct EndpointChecker{ };
// For rays
template<> struct EndpointChecker<0>{ template<typename T> bool operator()(const T& a, const T& b) const{ return true; } }; // For ray
// For closed end
template<> struct EndpointChecker<1>{ template<typename T> bool operator()(const T& a, const T& b) const{ return a <= b; } }; // For closed end
// For open end
template<> struct EndpointChecker<2>{ template<typename T> bool operator()(const T& a, const T& b) const{ return a < b; } }; // For open end
// Assumes parallel lines do not intersect
template<int LA, int LB, int RA, int RB, typename T> pair<bool, point<double>> intersect_no_parallel_overlap(const line<T> &L, const line<T> &M){
	auto s = L.d ^ M.d;
	if(!s) return {false, point<double>()};
	auto ls = (M.p - L.p) ^ M.d, rs = (M.p - L.p) ^ L.d;
	if(s < 0) s = -s, ls = -ls, rs = -rs;
	bool intersect = EndpointChecker<LA>()(decltype(ls)(0), ls) && EndpointChecker<LB>()(ls, s) && EndpointChecker<RA>()(decltype(rs)(0), rs) && EndpointChecker<RB>()(rs, s);
	return {intersect, static_cast<point<double>>(L.p) + 1.0 * ls / s * static_cast<point<double>>(L.d)};
}
// Assumes parallel lines do not intersect
template<typename T> pair<bool, point<double>> intersect_closed_segments_no_parallel_overlap(const line<T> &L, const line<T> &M){
	return intersect_no_parallel_overlap<1, 1, 1, 1>(L, M);
}
// Assumes nothing
template<typename T> pair<bool, line<double>> intersect_closed_segments(const line<T> &L, const line<T> &M){
	auto s = L.d ^ M.d, ls = (M.p - L.p) ^ M.d;
	if(!s){
		if(ls) return {false, line<double>()};
		auto Lp = L.p, Lq = L.q(), Mp = M.p, Mq = M.q();
		if(Lp > Lq) swap(Lp, Lq);
		if(Mp > Mq) swap(Mp, Mq);
		line<double> res(max(Lp, Mp), min(Lq, Mq));
		return {res.d >= point<double>(), res};
	}
	auto rs = (M.p - L.p) ^ L.d;
	if(s < 0) s = -s, ls = -ls, rs = -rs;
	bool intersect = 0 <= ls && ls <= s && 0 <= rs && rs <= s;
	return {intersect, line<double>(static_cast<point<double>>(L.p) + 1.0 * ls / s * static_cast<point<double>>(L.d), point<double>())};
}
template<typename T> double distance_between_rays(const line<T> &L, const line<T> &M){
	if(L || M){
		if(L.d * M.d >= 0 || (M.p - L.p) * M.d <= 0) return distance_to_line(L.p, M);
		else return distance(L.p, M.p);
	}
	else{
		if(intersect_no_parallel_overlap<1, 0, 1, 0, long long>(L, M).first) return 0;
		else return min(distance_to_ray(L.p, M), distance_to_ray(M.p, L));
	}
}
template<typename T> double distance_between_segments(const line<T> &L, const line<T> &M){
	if(intersect_closed_segments(L, M).first) return 0;
	return min({distance_to_segment(L.p, M), distance_to_segment(L.q(), M), distance_to_segment(M.p, L), distance_to_segment(M.q(), L)});
}
template<typename P> struct compare_by_angle{
	const P origin;
	compare_by_angle(const P &origin = P()): origin(origin){ }
	bool operator()(const P &p, const P &q) const{ return ori(origin, p, q) > 0; }
};
template<typename It, typename P> void sort_by_angle(It first, It last, const P &origin){
	first = partition(first, last, [&origin](const decltype(*first) &point){ return origin == point; });
	auto pivot = partition(first, last, [&origin](const decltype(*first) &point) { return origin < point; });
	compare_by_angle<P> cmp(origin);
	sort(first, pivot, cmp), sort(pivot, last, cmp);
}
// 3D Geometry Classes
template<typename T = long long> struct point{
	T x, y, z;
	int ind;
	template<typename U> point(const point<U> &otr): x(otr.x), y(otr.y), z(otr.z), ind(otr.ind){ }
	template<typename U, typename V, typename W> point(const tuple<U, V, W> &p): x(get<0>(p)), y(get<1>(p)), z(get<2>(p)){ }
	template<typename U = T, typename V = T, typename W = T> point(U x = 0, V y = 0, W z = 0): x(x), y(y), z(z){ }
	template<typename U> explicit operator point<U>() const{ return point<U>(static_cast<U>(x), static_cast<U>(y), static_cast<U>(z)); }
	T operator*(const point &otr) const{ return x * otr.x + y * otr.y + z * otr.z; }
	point operator^(const point &otr) const{ return point(y * otr.z - z * otr.y, z * otr.x - x * otr.z, x * otr.y - y * otr.x); }
	point operator+(const point &otr) const{ return point(x + otr.x, y + otr.y, z + otr.z); }
	point &operator+=(const point &otr){ return *this = *this + otr; }
	point operator-(const point &otr) const{ return point(x - otr.x, y - otr.y, z - otr.z); }
	point &operator-=(const point &otr){ return *this = *this - otr; }
	point operator*(const T &c) const{ return point(x * c, y * c, z * c); }
	point &operator*=(const T &c) { return *this = *this * c; }
	point operator/(const T &c) const{ return point(x / c, y / c, z / c); }
	point &operator/=(const T &c) { return *this = *this / c; }
	point operator-() const{ return point(-x, -y, -z); }
	bool operator<(const point &otr) const{ return tie(x, y, z) < tie(otr.x, otr.y, otr.z); }
	bool operator>(const point &otr) const{ return tie(x, y, z) > tie(otr.x, otr.y, otr.z); }
	bool operator<=(const point &otr) const{ return tie(x, y, z) <= tie(otr.x, otr.y, otr.z); }
	bool operator>=(const point &otr) const{ return tie(x, y, z) >= tie(otr.x, otr.y, otr.z); }
	bool operator==(const point &otr) const{ return tie(x, y, z) == tie(otr.x, otr.y, otr.z); }
	bool operator!=(const point &otr) const{ return tie(x, y, z) != tie(otr.x, otr.y, otr.z); }
	double norm() const{ return sqrt(x * x + y * y + z * z); }
	T squared_norm() const{ return x * x + y * y + z * z; }
	point<double> unit() const{ return point<double>(x, y, z) / norm(); }
	point reflect_x() const{ return point(x, -y, -z); }
	point reflect_y() const{ return point(-x, y, -z); }
	point reflect_z() const{ return point(-x, -y, z); }
	point reflect_xy() const{ return point(x, y, -z); }
	point reflect_yz() const{ return point(-x, y, z); }
	point reflect_zx() const{ return point(x, -y, z); }
	bool operator||(const point &otr) const{ return *this ^ otr == point(); }
};
template<typename T> point<T> operator*(const T &c, const point<T> &p){ return point<T>(c * p.x, c * p.y, c * p.z); }
template<typename T> istream &operator>>(istream &in, point<T> &p){ return in >> p.x >> p.y >> p.z; }
template<typename T> ostream &operator<<(ostream &out, const point<T> &p){ return out << "(" << p.x << ", " << p.y << ", " << p.z << ")"; }
template<typename T> double distance(const point<T> &p, const point<T> &q){ return (p - q).norm(); }
template<typename T> T squared_distance(const point<T> &p, const point<T> &q){ return (p - q).squared_norm(); }
template<typename T, typename U, typename V, typename W> T ori(const point<T> &p, const point<U> &q, const point<V> &r, const point<W> &s){ return ((q - p) ^ (r - p)) * (s - p); }
template<typename T> T sextupled_signed_volume(const vector<vector<point<T>>> &arr){
	T s = 0;
	for(const auto &face: arr){
		assert(int(face.size()) >= 3);
		s += (face[int(face.size()) - 2] ^ face[int(face.size()) - 1]) * face[0] + (face[int(face.size()) - 1] ^ face[0]) * face[1];
		for(int i = 0; i + 3 <= int(face.size()); ++ i) s += (face[i] ^ face[i + 1]) * face[i + 2];
	}
	return s;
}
template<typename T = long long> struct line{
	point<T> p, d; // p + d*t
	template<typename U = T, typename V = T> line(point<U> p = {0, 0}, point<V> q = {0, 0}, bool Two_Points = true): p(p), d(Two_Points ? q - p : q){ }
	template<typename U> line(point<U> d): p(), d(static_cast<point<T>>(d)){ }
	template<typename U> explicit operator line<U>() const{ return line<U>(point<U>(p), point<U>(d), false); }
	point<T> q() const{ return p + d; }
	bool degen() const{ return d == point<T>(); }
	bool operator||(const line<T> &L){ return d || L.d; }
};
template<typename T> bool parallel(const line<T> &L, const line<T> &M){ return L.d ^ M.d == point<T>(); }
template<typename T> bool on_line(const point<T> &p, const line<T> &L){
	if(L.degen()) return p == L.p;
	return (p - L.p) || L.d;
}
template<typename T> bool on_ray(const point<T> &p, const line<T> &L){
	if(L.degen()) return p == L.p;
	auto a = L.p - p, b = L.q() - p;
	return (a || b) && a * L.d <= 0;
}
template<typename T> bool on_segment(const point<T> &p, const line<T> &L){
	if(L.degen()) return p == L.p;
	auto a = L.p - p, b = L.q() - p;
	return (a || b) && a * b <= 0;
}
template<typename T> double distance_to_line(const point<T> &p, const line<T> &L){
	if(L.degen()) return distance(p, L.p);
	return ((p - L.p) ^ L.d).norm() / L.d.norm();
}
template<typename T> double distance_to_ray(const point<T> &p, const line<T> &L){
	if((p - L.p) * L.d <= 0) return distance(p, L.p);
	return distance_to_line(p, L);
}
template<typename T> double distance_to_segment(const point<T> &p, const line<T> &L){
	if((p - L.p) * L.d <= 0) return distance(p, L.p);
	if((p - L.q()) * L.d >= 0) return distance(p, L.q());
	return distance_to_line(p, L);
}
template<typename T> point<double> projection(const point<T> &p, const line<T> &L){ return static_cast<point<double>>(L.p) + (L.degen() ? point<double>() : (p - L.p) * L.d / L.d.norm() * static_cast<point<double>>(L.d)); }
template<typename T> point<double> reflection(const point<T> &p, const line<T> &L){ return 2.0 * projection(p, L) - static_cast<point<double>>(p); }
template<typename T> point<double> closest_point_on_segment(const point<T> &p, const line<T> &L){ return (p - L.p) * L.d <= 0 ? static_cast<point<double>>(L.p) : ((p - L.q()) * L.d >= 0 ? static_cast<point<double>>(L.q()) : projection(p, L)); }

// 156485479_6_2
// Convex Hull and Minkowski Sum
// O(n log n) construction, O(n) if sorted.
template<typename Polygon, int type = 0> // type {0: both, 1: lower, 2: upper}
struct convex_hull: pair<Polygon, Polygon>{ // (Lower, Upper)
	convex_hull(Polygon arr = Polygon(), int type = 0, bool is_sorted = false): type(type){
		if(!is_sorted) sort(arr.begin(), arr.end()), arr.resize(unique(arr.begin(), arr.end()) - arr.begin());
#define ADDP(C, cmp) while(int(C.size()) > 1 && ori(C[int(C.size()) - 2], p, C.back()) cmp 0) C.pop_back(); C.push_back(p);
		for(auto &p: arr){
			if(type < 2){ ADDP(this->first, >=) }
			if(!(type & 1)){ ADDP(this->second, <=) }
		}
		reverse(this->second.begin(), this->second.end());
	}
	Polygon get_hull() const{
		if(type) return type == 1 ? this->first : this->second;
		if(this->first.size() <= 1) return this->first;
		Polygon res(this->first);
		res.insert(res.end(), ++ this->second.begin(), -- this->second.end());
		return res;
	}
	int min_element(const typename Polygon::value_type &p) const{
		assert(p.y >= 0 && !this->first.empty());
		int low = 0, high = this->first.size();
		while(high - low > 2){
			int mid1 = (2 * low + high) / 3, mid2 = (low + 2 * high) / 3;
			p * this->first[mid1] >= p * this->first[mid2] ? low = mid1 : high = mid2;
		}
		int res = low;
		for(int i = low + 1; i < high; i ++) if(p * this->first[res] > p * this->first[i]) res = i;
		return res;
	}
	int max_element(const typename Polygon::value_type &p) const{
		assert(p.y >= 0 && !this->second.empty());
		int low = 0, high = this->second.size();
		while(high - low > 2){
			int mid1 = (2 * low + high) / 3, mid2 = (low + 2 * high) / 3;
			p * this->second[mid1] <= p * this->second[mid2] ? low = mid1 : high = mid2;
		}
		int res = low;
		for(int i = low + 1; i < high; ++ i) if(p * this->second[res] < p * this->second[i]) res = i;
		return res;
	}
	Polygon linearize() const{
		if(type == 1) return this->first;
		if(type == 2){ Polygon res(this->second); reverse(res.begin(), res.end()); return res; }
		if(this->first.size() <= 1) return this->first;
		Polygon res;
		res.reserve(this->first.size() + this->second.size());
		merge(this->first.begin(), this->first.end(), ++ this->second.rbegin(), -- this->second.rend(), back_inserter(res));
		return res;
	}
	convex_hull operator^(const convex_hull &otr) const{ // Convex Hull Merge
		Polygon temp, A = linearize(), B = otr.linearize();
		temp.reserve(A.size() + B.size());
		merge(A.begin(), A.end(), B.begin(), B.end(), back_inserter(temp));
		temp.resize(unique(temp.begin(), temp.end()) - temp.begin());
		return {temp, type, true};
	}
	pair<Polygon, Polygon> get_boundary() const{
		Polygon L(this->first), R(this->second);
		for(int i = int(L.size()) - 1; i > 0; -- i) L[i] -= L[i - 1];
		for(int i = int(R.size()) - 1; i > 0; -- i) R[i] -= R[i - 1];
		return {L, R};
	}
	convex_hull operator+(const convex_hull &otr) const{ // Minkowski Sum
		assert(type == otr.type);
		convex_hull res(Polygon(), type);
		pair<Polygon, Polygon> A(this->get_boundary()), B(otr.get_boundary());
		compare_by_angle<typename Polygon::value_type> cmp;
#define PROCESS(COND, X) \
if(COND && !A.X.empty() && !B.X.empty()){ \
	res.X.reserve(A.X.size() + B.X.size()); \
	res.X.push_back(A.X.front() + B.X.front()); \
	merge(A.X.begin() + 1, A.X.end(), B.X.begin() + 1, B.X.end(), back_inserter(res.X), cmp); \
	for(int i = 1; i < int(res.X.size()); ++ i) res.X[i] += res.X[i - 1]; \
}
		PROCESS(type < 2, first)
		PROCESS(!(type & 1), second)
		return res;
	}
};

// 156485479_6_3
// KD Tree
// O(log N) for randomly distributed points
// Point Class must support x, y, less-compare, equal
template<typename T, typename point>
struct Node{
	static constexpr T inf = 1e9;
	point p; // if this is a leaf, the single point in it
	T xlow = inf, xhigh = -inf, ylow = inf, yhigh = -inf; // bounds
	Node *l = 0, *r = 0;
	Node(vector<point> &&arr): p(arr[0]){
		for(auto p: arr){
			xlow = min(xlow, p.x), xhigh = max(xhigh, p.x);
			ylow = min(ylow, p.y), yhigh = max(yhigh, p.y);
		}
		if(int(arr.size()) > 1){ // split on x if the box is wider than high (not best heuristic...)
			if(xhigh - xlow >= yhigh - ylow) sort(arr.begin(), arr.end());
			else sort(arr.begin(), arr.end(), [](point p, point q){ return p.y < q.y; });
			int mid = int(arr.size()) / 2;// divide by taking half the array for each child (not best performance with many duplicates in the middle)
			l = new Node({begin(arr), begin(arr) + mid});
			r = new Node({arr.begin() + mid, arr.end()});
		}
	}
	T distance(const point &p){ // min squared dist to point p
		T x = min(max(p.x, xlow), xhigh), y = min(max(p.y, ylow), yhigh); 
		return (x - p.x) * (x - p.x) + (y - p.y) * (y - p.y);
	}
};
template<typename T, typename point, bool IGNORE_ITSELF = true>
struct KDTree{
	static constexpr T inf = 1e9;
	Node<T, point> *root;
	template<typename Arr> KDTree(const Arr& arr): root(new Node<T, point>({arr.begin(), arr.end()})){ }
	pair<T, point> search(Node<T, point> *node, const point &p){
		if(!node->l){
			if(IGNORE_ITSELF && p == node->p) return {inf, point()};
			return {(p.x - node->p.x) * (p.x - node->p.x) + (p.y - node->p.y) * (p.y - node->p.y), node->p};
		}
		Node<T, point> *l = node->l, *r = node->r;
		T bl = l->distance(p), br = r->distance(p);
		if(bl > br) swap(br, bl), swap(l, r);
		auto best = search(l, p); // search closest side, other side if needed
		if(br < best.first) best = min(best, search(r, p));
		return best;
	}
	pair<T, point> query(const point &p){
		return search(root, p);
	}
};
struct P{
	long long x, y;
	bool operator<(const P &p) const{
		return x == p.x ? y < p.y : x < p.x;
	}
	bool operator==(const P &p) const{
		return x == p.x && y == p.y;
	}
};
istream &operator>>(istream &in, P &p){
	return in >> p.x >> p.y;
}
ostream &operator<<(ostream &out, const P &p){
	return out << "(" << p.x << ", " << p.y << ")";
}

// 156485479_7_1
// Custom Hash Function for unordered_set and unordered map
struct custom_hash{
	static uint64_t splitmix64(uint64_t x){
		// http://xorshift.di.unimi.it/splitmix64.c
		x += 0x9e3779b97f4a7c15;
		x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
		x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
		return x ^ (x >> 31);
	}
	size_t operator()(uint64_t x) const {
		static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
		return splitmix64(x + FIXED_RANDOM);
	}
};
// KACTL Hash Function
# define M_PI 3.141592653589793238462643383279502884L
const int RANDOM = rng();
struct custom_hash{ // To use most bits rather than just the lowest ones:
	static const uint64_t C = long long(2e18 * M_PI) + 71; // large odd number
	long long operator()(long long x) const { return __builtin_bswap64((x^RANDOM)*C); }
};

/*
Speed test results
set                                    1e6: 670ms | 1e7: 10155ms
unordered_set                          1e6: 296ms | 1e7: 4320ms
unordered_set with custom hash         1e6: 358ms | 1e7: 4851ms
unordered_set with custom hash(narut)  1e6: 389ms | 1e7: 4850ms
unordered_set with custom hash(pajen)  1e6: 436ms | 1e7: 5022ms

map                                    1e6: 592ms | 1e7: 10420ms
unordered_map                          1e6: 373ms | 1e7: 4742ms
unordered_map with custom hash         1e6: 389ms | 1e7: 4913ms
unordered_map with custom hash(narut)  1e6: 327ms | 1e7: 4960ms
unordered_map with custom hash(pajen)  1e6: 389ms | 1e7: 4789ms

map           | 1e6: 576ms 31560KB | 5e6: 4757ms 156552KB | 1e7: 10498ms 313280KB
unodered_map  | 1e6: 327ms 32220KB | 5e6: 2121ms 147132KB | 1e7: 4835ms  295068KB
cc_hash_table | 1e6: 249ms 31916KB | 5e6: 2011ms 197140KB | 1e7: 4383ms  394588KB
gp_hash_table | 1e6: 109ms 36720KB | 5e6: 686ms  295516KB | 1e7: ????    MLE

constants
set / map                     : around 4
unordered_set / unordered_map : around 40
cc_hash_table                 : around 35
gp_hash_table                 : around 20
*/

// 156485479_7_2
// Bump Allocator
static char BUFF[220 << 20];
void *operator new(size_t s){
	static size_t i = sizeof BUFF;
	assert(s < i);
	return (void *)&BUFF[i -= s];
}
void operator delete(void *){ }
