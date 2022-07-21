// Build a code that gets a student name and their grades, and shows the mean's grade

#include <iostream>
#include <string>
int main()
{
	float Notas[5] = { 1.0f,2.0,3.0,4.0,5.0f }; // create the vector of size 5
	float Media, Soma{0.0};
	std::string NomeAluno;

	std::cout << "Write the sudent's name: ";
	std::cin >> NomeAluno;

	for (int i = 0; i <= 4; i++)
	{
		std::cout << "\nWrite the grade " << (i + 1) << ": ";
		std::cin >> Notas[i];
		Soma = Soma + Notas[i];
		system("CLS");
	}

/* Dummy way of doing this for loop:

	std::cout << "Write the first grade: ";
	std::cin >> Notas[0];
	std::cout << "Write the second grade: ";
	std::cin >> Notas[1];
	std::cout << "Write the third grade: ";
	std::cin >> Notas[2];
	std::cout << "Write the fourth grade: ";
	std::cin >> Notas[3];
	std::cout << "Write the fifth grade: ";
	std::cin >> Notas[4];
	Media = (Notas[0] + Notas[1] + Notas[2] + Notas[3] + Notas[4]) / 5;*/

	Media = Soma / 5;
	std::cout << "The student's mean grade is: " << Media << "\n";

	system("PAUSE");
	return 0;
}