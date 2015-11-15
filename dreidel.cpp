#include <iostream>
#include <random>

static char const *const letters[] = { u8"נ", u8"ג", u8"ה", u8"ש" };

int main(int argc, char *argv[]) {
	std::random_device rng;
	std::uniform_int_distribution<unsigned> dist(0, 3);

	std::cout << letters[dist(rng)] << std::endl;

	return 0;
}
