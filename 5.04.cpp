#include <iostream>
using namespace std;

bool songuyento(int N) {
	if (N < 2) {
		return false;
	}
	for (int i = 2; i*i <= N; i++) {
		if (N % i == 0) {
			return false;
		}
	}
	return true;
}
int reverse(int n) {
	int S = 0;
	do {
		S = S * 10 + n % 10;
	} while (n /= 10);
	return S;
}

int main() {
	int a, b, s = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		if (songuyento(i) && songuyento(reverse(i))){
				s += 1;
			}
		}
	cout << s;
	return 0;
	}
	
