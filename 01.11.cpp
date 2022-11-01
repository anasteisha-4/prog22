#include <iostream>
#include <queue>

int main()
{
	int n, force, p2, win = 0, kolwin = 0, maax = 0;
	long long int k;
	std::cin >> n >> k;
	std::queue <int> play;
	for (int i = 0; i < n; i++) {
		std::cin >> force;
		play.push(force);
		if (force > maax) {
			maax = force;
		}
	}
	win = play.front();
	play.pop();
	while (kolwin < k) {
		p2 = play.front();
		play.pop();
		if (p2 >= win) {
			play.push(win);
			win = p2;
			kolwin = 1;
		}
		else {
			play.push(p2);
			kolwin++;
		}
		if (win == maax) {
			break;
		}
	}
	std::cout << win;
	return 0;
}
