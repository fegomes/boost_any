// boost_any.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <boost/any.hpp>

int main()
{
	boost::any texto = std::string("Isso é uma string!");
	boost::any qualquer = std::string("Eu sou um texto");

	std::cout << boost::any_cast<std::string>(texto) << std::endl;
	std::cout << boost::any_cast<std::string>(qualquer) << std::endl;

	// agora sou um número
	qualquer = 10;
	std::cout << boost::any_cast<int>(qualquer) << std::endl;

	// agora sou um double
	qualquer = 10.52;
	std::cout << boost::any_cast<double>(qualquer) << std::endl;

	// agora sou um char
	qualquer = 'B';
	std::cout << boost::any_cast<char>(qualquer) << std::endl;

	qualquer = std::string("Eu sou um texto novamente!");
	std::cout << boost::any_cast<std::string>(qualquer) << std::endl;
	
	int pause;
	std::cin >> pause;
	return 0;
}

