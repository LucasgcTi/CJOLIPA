#include <iostream>

using namespace std;

int main(void)
{
	int32_t a, b, r;
	
	cout << "Entre o primeiro valor...: "; cin >> a;
	cin.ignore(80, '\n');
	
	cout << "Entre o segundo valor....: "; cin >> b;
	cin.ignore(80, '\n');
	
	cout << "\n";
	
	if (r = a + b; r >= 10)
	  cout << "Resultado: " << r + 5 << endl << endl;
	else
	  cout << "Resultado: " << r - 7 << endl << endl; 
	
	cout << endl;
	cout << "Aperte <Enter> para encerrar... ";
	cin.get();

	return 0;
}
