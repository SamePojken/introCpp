#include <iostream>
using namespace std;

//oppg 1 her er bare multipliserer du 2 av tallene
int multiply(int number1, int number2)
{
	return number1 * number2;
}

//oppg 2 retunerer et desimaltall
double convert(double fahren)
{
	return (fahren - 32) * 5 / 9;

}

//oppg 3 Den ganger number1 og number2 sammen, så endrer den seg før den ganger seg sammen på nytt
void use2(int number1, int number2)
{
	int first_time = multiply (number1, number2);
	cout << number1 << "*" << number2 << "=" << first_time << "\n";
	int plus5 = number1 + 5;
	int second_time = multiply(plus5, number2);
	cout << plus5 << "*" << number2 << "=" << second_time << "\n";
 
}

//oppg 4 
int main()
{
	double fahren = 99;
	use2(2, 2);

	double cel = convert(fahren);
	cout << " Fahrenheit " << fahren << " = Celsius " << cel << "\n";

}
