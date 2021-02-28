#include <iostream>
#include <cstdint>

std::uint64_t HuKuRi(double Yen, double Risoku, std::uint64_t Hi) {
	for (std::uint64_t i = 0; i < Hi; i++) {
		Yen = Yen + (Yen * (Risoku / Hi));
	}

	return Yen;
}

int main() {
	std::uint64_t Yen = 2000000;
	double Risoku = 0.3;
	std::uint64_t Hi = 365;
	std::uint64_t Nen = 3;

	for (std::uint64_t i = 0; i < Nen; i++) {
		Yen = HuKuRi(Yen, Risoku, Hi);
		std::cout << Yen << std::endl;
	}
	return 0;
}