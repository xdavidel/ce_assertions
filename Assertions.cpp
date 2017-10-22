#include <iostream>
#include <memory>
#include <utility>
#include <math.h>
#include <cassert>

// Concatenates two strings. str1 and str2 must not be null.
char *concatenate(char *str1, char *str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	size_t size = strlen(str1) + strlen(str2) + 1;
	char *result = new char[size];

	strcpy(result, str1);
	strcat(result, str2);

	return result;
}

typedef std::pair<double, double> Roots;

Roots getQuadraticEquationRoots(double a, double b, double c)
{
	assert(a != 0);
	assert(b * b - 4 * a * c >= 0);
	double discriminant = b * b - 4 * a * c;
	double discriminantRoot = sqrt(discriminant);

	Roots roots;

	roots.first = (-b + discriminantRoot) / (2 * a);
	roots.second = (-b - discriminantRoot) / (2 * a);

	return roots;
}

int numberAt(int array[], size_t arraySize, int index)
{
	assert(index <= arraySize - 1 && index >= 0);
	return array[index];
}

long getLifeTimeInSeconds()
{
	return 60 * 60 * 24 * 365 * 120;
}
