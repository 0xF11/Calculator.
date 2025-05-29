#pragma once
#include <iostream>

// Sloppy code for making the console properly end when user directs it to..

std::string end;
std::cout << "If you would like to close this app please type End whenever this prompt shows up.\n";
std::cin >> end;
	if(end == "end")
	{
	return 0;
	}

	else if (end == "End")
	{
		return 0;
	}

	else if (end == "enD")
	{
		return 0;
	}

	else if (end == "eNd")
	{
		return 0;
	}

	else if (end == "eND")
	{
		return 0;
	}

	else if (end == "EnD")
	{
		return 0;
	}

	else if (end == "ENd")
	{
		return 0;
	}

	else if (end == "END")
	{
		return 0;
	}
