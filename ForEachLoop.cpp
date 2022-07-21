//Using "for each" loop

#include <iostream>

int main()
{
	int Anos[]{ 1998,2011,2014,2017,2020 };
	for (auto Ano : Anos)
	{
		std::cout << Ano << "\n";
	}


	system("PAUSE");
	return 0;
}