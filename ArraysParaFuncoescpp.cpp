// Using arrays inside functions and sizeof function

#include <iostream>

void MostrarVetor(int Array[], int TamVetor);

int main()
{
	int Vetor[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int TamanhoVetor = sizeof(Vetor);
	/* sizeof returns size in bytes. If we want to know how long a vector is we divide sizeof(Vector) for sizeof(float) if its elements are float */
	int TamanhoVetor = std::size(Vetor); // Gives the lenght of vector instead bytes
	std::cout << "\nVector's size: " << TamanhoVetor;
	std::cout << "\nA float's size: " << sizeof(float);
	std::cout << "\nA int's size: " << sizeof(int)<<"\n";

	MostrarVetor(Vetor, TamanhoVetor);

	system("PAUSE");
	return 0;
}

void MostrarVetor(int Array[],int TamVetor)
{
	for (int i = 0; i < TamVetor; i++)
	{
		std::cout << "- " << Array[i] << " -";
	}
}