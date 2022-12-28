#include <iostream>
using namespace std;

int modulo(int m, int n) {
	if (m >= n) {
		m = m - n;
		return modulo(m, n);
	}
	else return m;
}
int main() {
	int m, n; cin >> m >> n;
	cout << modulo(m, n);
}