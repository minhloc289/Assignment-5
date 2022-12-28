#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double S, P, lt = 1, gt = 1;
	int dau = -1;
	double saiso = 0.00001;
	double n;
	cin >> n;
	S = P = lt = n;
	for (int i = 3; P > saiso; i += 2, dau = -dau) {
		P = (lt *= n * n) / (gt *= i * (i - 1));
		S += dau * P;
	}
	cout << setprecision(4) << fixed << S;
	return 0;
}