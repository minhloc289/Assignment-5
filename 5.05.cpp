#include <iostream>
using namespace std;
int input(int &n) {
    cin >> n;
    return n;
}
int sum(int n, int &s ) {
    if (n < 10) {
        return n;
    }
    s = sum(n % 10, s) + sum(n / 10, s);
    return s;
    
}

int main() {
    int n, s = 0;
    input(n);
    sum(n, s);
    cout << s;
}
