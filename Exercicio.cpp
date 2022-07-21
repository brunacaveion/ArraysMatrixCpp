//"For each" loop to print the mean of given velocities
// The loop will sum all the values and store the result

#include <iostream>
#include <iomanip>

int main()
{
	float Velocidades[]{ 70.9,89.5,65.6,102.5,123.6,63.4,74.5,99.5,68.7 };
	float SomaVelocidades{ 0.0 };
	int TamArray{ 0 };

	for (auto Velocidade : Velocidades)
	{
		SomaVelocidades += Velocidade;
		TamArray++;
	}
	std::cout << "Velocity's mean: " << std::defaultfloat << std::setprecision(4) << SomaVelocidades / TamArray << "km/h" << "\n";
/*std::defaultfloat; sets 4 elements of the number in total, counting before and after the dot
std::fixed; sets 4 elements after the dot, it doesn't count before the dot */ 

	system("PAUSE");
	return 0;
}