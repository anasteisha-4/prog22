#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int n, k, res = 0;
	bool fl;
	std::vector <int> tasks;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> k;
		tasks.push_back(k);
	}
	std::sort(tasks.begin(), tasks.end());
	for (int i = 0; i < tasks.size(); i++) {
		fl = false;
		for (int j = i; j < tasks.size(); j++) {
			if (i + 1 <= tasks[j]) {
				res++;
				fl = true;
				tasks.erase(tasks.begin() + j);
				break;
			}
		}
		if (!fl) break;
	}
	std::cout << res;
	return 0;
}
