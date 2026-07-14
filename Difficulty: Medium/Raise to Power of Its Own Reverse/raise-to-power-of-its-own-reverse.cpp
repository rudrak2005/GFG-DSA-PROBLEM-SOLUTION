class Solution {
	public:
	const int MOD = 1000000007;
	
	long long power(long long base, long long exp) {
		long long ans = 1;
		while (exp>0) {
			if (exp%2 == 1)
				ans = (ans*base)%MOD;
			base = (base*base)%MOD;
			exp /= 2;
			
		}
		return ans;
	}
	
	long long reverse(long long n) {
		long long rev = 0;
		while (n>0) {
			rev = rev*10 + n%10;
			n /= 10;
		}
		return rev;
	}
	long long reverseExponentiation(long long N) {
		long long R = reverse(N);
		return power(N, R);
	}
};
