#include <bits/stdc++.h>

using namespace std;
                                                   
int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);          
  int tt;
  cin >> tt;
  while (tt--) {
  	int n, q;
  	cin >> n >> q;         
  	long long divisor = 1;
  	// create a limit checker to check if the total divisor will be greater than the dividend
  	bool reached_limit = false;
  	for (int i = 0; i < n; i++) {
  		int d;
  		cin >> d;
  		if (divisor * d <= 1000000000) {
  			// check if the current divisor is still less than or equal to 1e9
  			divisor *= d;
  		} else if (d > 1) {
  			// if it surpasses 1e9, then set the reached_limit to true
  			reached_limit = true;
  		}
  	}                                                                
  	vector<int> x(q);
  	for (int i = 0; i < q; i++) {
  		cin >> x[i];
  	}
	for (int i = 0; i < q; i++) {
		if (!reached_limit) {
			// if the total divisor is less than or equal to the max dividend,
			// then divide normally
			cout << x[i] / divisor;
		} else {
			// otherwise, print 0 since a numerator divided by a greater denominator
			// will ways product 0 as its output
        		cout << 0;
		}
		cout << " ";
	}
  	cout << '\n';
  }
  return 0;
}      
