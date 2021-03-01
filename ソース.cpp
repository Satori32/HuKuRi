#include <iostream>
#include <cstdint>

std::uint64_t HuKuRi(double Yen, double Risoku, std::uint64_t Hi) {
	for (std::uint64_t i = 0; i < Hi; i++) {
		Yen = Yen + (Yen * ((Risoku/100.0) / Hi));
	}

	return Yen;
}

int main() {
	std::uint64_t Yen = 2000000;
	double Risoku = 10;
	std::uint64_t Hi = 365;
	std::uint64_t Nen = 3;
	std::uint64_t N = Yen;

	for (std::uint64_t i = 0; i < Nen; i++) {
		N = HuKuRi(N, Risoku, Hi);
		std::cout << N<<' '<<N/(double)Yen << std::endl;
	}
	return 0;
}