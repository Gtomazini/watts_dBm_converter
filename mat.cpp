#include <iostream>
#include <cmath>

int main() {
inicio:
    double value_watts;
    std::cout << "Insira a potencia em watts: ";
    std::cin >> value_watts;

    double value_dbm = 10 * log10(value_watts) + 30;
    std::cout << "A potencia em dBm: " << value_dbm << std::endl;
	char alt;

	std::cout << "quer calcular novamente? insira [s/n]" << std::endl;
	std::cin >> alt;
	if (alt == 's' or alt == 'S'){
		goto inicio;
	}
	std::cout << "\nPressione qualquer tecla para sair ... " << std::endl;
	std::cin.ignore();
	std::cin.get();
    return 0;
}
