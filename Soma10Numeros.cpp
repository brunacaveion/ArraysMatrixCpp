#include <iostream>
int main()
{
	double Numeros[10];
	double Soma{ 0.0 };

	for (int i = 0; i < 10; i++)
	{
		std::cout << "Write the Number " << (i+1) << ": ";
		std::cin >> Numeros[i];
		Soma += Numeros[i];
		system("Clear||CLS");
	}
	std::cout << "\nThe sum of the numbers is: " << Soma <<"\n";
	system("PAUSE");
	return 0;
}