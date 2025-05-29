#include <iostream>
#include <Windows.h>

int a;
int b;
int i = 4;
std::string Oper;
int main() {
	while (i < 5)
	{

		// Original code would not allow me to end since IF can only take one statement at a time.
		// I.E. I wrote if(end == "end", "End") It will not work and my function will not work.
		// However in end.h i wrote if(end == "end) with a bunch of else if statements for every casing type of end.
		// This allows this to close properly when typing end, however it is definitly not the most efficient way.

		#include "end.h"
		
		std::cout << "Hello! Please insert your first number: ";
		std::cin >> a;
		std::cout << "Okay! Now insert the operator (+,-,/,*): ";
		std::cin >> Oper;
		std::cout << "Okay!! Now that last number!: ";
		std::cin >> b;
		

		for (int i = 0; i < 5; i++)
		{
			std::cout << "Calculating...\n";
			Sleep(200);
		
		}

		std::cout << "\nEquals: ";

#define ADD std::cout << a + b;
		if (Oper == "+") {
			std::cout << "";
			ADD;
		}
#define SUBTRACT std::cout << a - b;

		else if (Oper == "-")
		{
			std::cout << "";
			SUBTRACT;
		}

#define MULTIPLY std::cout << a * b;

		else if (Oper == "*")
		{
			std::cout << "";
			MULTIPLY;
		}

#define DIVIDE std::cout << a / b;
		else if (Oper == "/")
		{
			std::cout << "";
			DIVIDE;
		}
		std::cout << "\n";
	}
}
