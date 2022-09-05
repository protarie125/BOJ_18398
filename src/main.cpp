#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto t = int{};
	cin >> t;
	while (0 < (t--)) {
		auto n = int{};
		cin >> n;
		while (0 < (n--)) {
			int a, b;
			cin >> a >> b;
			cout << a + b << ' ' << a * b << '\n';
		}
	}

	return 0;
}