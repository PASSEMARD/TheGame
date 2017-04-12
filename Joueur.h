#pragma once
#include "Personnage.h"

class Joueur : public Personnage
{
public:
	Joueur(std::string);
	~Joueur();
	std::vector<std::string> m_GetAllCompetence();
	void m_UtiliserCompetence(int, Personnage*);
	void m_RestaurerSante();
	void m_RestaurerMana();
	int m_GetManaMax();
	int m_GetPVMax();

};

