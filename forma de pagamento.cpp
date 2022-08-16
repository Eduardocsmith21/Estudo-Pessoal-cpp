#include <iostream>
#include <iomanip> // para definir quantas casas decimais vai usar, precisa incluir iomanip
using namespace std;
int main () {
	float valor, total, parcela;
	cout << "Valor da compra: ";
	cin >> valor;
	int opcao;
	cout << "Forma de pagamento"<< "\n\n";
	cout << "[1] A vista" << "\n\n";
	cout << "[2] 2X no cartão" << "\n\n";
	cout << "[3] 3X no cartão" << "\n\n";
	cout << "[4] 4X no cartão" << "\n\n";
	cout << "[5] Mais de 4X no cartão" << "\n\n";
	cin >> opcao;
	cout << "\n";
	//cout << fixed << setprecision ( 2 );
	if (opcao == 1) {
		total = valor - (valor * 10 / 100);
		cout << "Sua compra ficara " << total << endl;
	}
	if (opcao == 2) {
		total = valor + (valor * 20 / 100);
		parcela = total / 2;
		cout << setprecision (3) << "Sua compra ficara " << total << " com parcelas de 2X de  " << parcela<< endl;
	}
	if (opcao == 3) {
		total = valor + (valor * 30 / 100);
		parcela = total / 3;
		cout << setprecision (3) << "Sua compra ficara " << total << " com parcelas de 3X de " << parcela << endl;
	}
	if (opcao == 4) {
		total = valor + (valor * 40 / 100);
		parcela = total / 4;
		cout << "Sua compra ficara " << total << " com parcelas de 4X de " << parcela << endl;
	}
	if (opcao == 5) {
		int vezes;
		cout << "Quantas vezes: ";
		cin >> vezes;
		cout << "\n";
		total = valor + (valor * 60 / 100);
		parcela = total / vezes;
		cout << "Sua compra ficara " << total << " com parcelas de R$" << parcela <<" em " << vezes << "X" << " no cartão" << endl;
	}
	return 0;
}

