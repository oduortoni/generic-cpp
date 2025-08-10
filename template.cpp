#include <iostream>

using namespace std;

#define Number typename

template <Number N>

N double_n(N n) {
		return 2 * n;
}

int main() {
		int x(9);
		cout << double_n(x) << endl;
		return 0;
}

