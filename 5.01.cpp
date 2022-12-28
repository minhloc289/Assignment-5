#include <iostream>
#include <cmath>
using namespace std;

bool songuyento(int N) {
	if (N < 2) {
		return false;
	}
	for (int i = 2; i <= sqrt(N); i++) {
		if (N % i == 0) {
			return false;
		}
	}
	return true;
}

int tinhtongsonguyento(int N) {
	int tong = 0;
	int dem = 0;
	int i = 1;
	while (dem != N) {
		if (songuyento(i)) {
			cout << "So nguyen to: " << i << endl;
			dem++;
			tong += i;
		}
		i++;
	}
	return tong;
}

int main() {
	int N;
	cin >> N;
	while (N <= 0 || N > 50) {
		cout << "Gia tri vua nhap la " << N << ", khong hop le. Vui long nhap lai." << endl;
		cin >> N;
	}
	int S = tinhtongsonguyento(N);
		cout << "Tong " << N << " so nguyen to dau tien la: " << S;
	return 0;
}