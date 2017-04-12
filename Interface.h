#pragma once
#include <iostream>
#include <string>
class Interface
{
public:
	Interface();
	~Interface();
	static void m_afficherLigne(std::string);
	static int m_getIntegeur(int, int);
	static char m_getChar(char*, int);
	static void m_messageErreur(std::string);
	static std::string m_getString();
};

