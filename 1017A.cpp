#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

bool comp(std::array <int, 2> a, std::array <int, 2> b) {
	return (a[1] > b[1]);
}

int main()
{
	int n, a, b, c, d, ans;
	std::cin >> n;
	std::array <array <int, 2>, 1000> mas;
	std::cin >> a >> b >> c >> d;
	int suum = a + b + c + d;
	mas[0] = { 1, a + b + c + d };
	for (int i = 1; i < n; i++) {
		std::cin >> a >> b >> c >> d;
		mas[i] = { i + 1, a + b + c + d };
	}
	std::sort(mas.begin(), mas.end(), comp);
	for (int i = 0; i < n; i++) {
		if (mas[i][0] == 1) {
			ans = i + 1;
			break;
		}
	}
	std::cout << ans;
	return 0;
}
