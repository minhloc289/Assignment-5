#include <iostream>
using namespace std;
int reverse(int n,int S = 0) {
    
    if (n == 0) return S;
    return reverse(n / 10, S * 10 + n % 10);
}
int main() {
    int n;
    cin >> n;
    cout << reverse(n);
}
