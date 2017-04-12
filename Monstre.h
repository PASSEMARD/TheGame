#pragma once
#include "Personnage.h"

class Monstre : public Personnage
{
public:
	Monstre(std::string);
	~Monstre();
	void m_UtiliserCompetence(int, Personnage*);
};

