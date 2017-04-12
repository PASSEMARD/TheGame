#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Competence.h"
#include "Interface.h"

class Competence;

class Personnage
{
protected:
	std::string nom;
	int vitesse;
	int manaMax;
	int manaActuelle;
	int pvMax;
	int pvActuelle;
	std::vector<Competence> competences;

public:
	Personnage(std::string);
	~Personnage();
	void m_UtiliserCompetence(int,Personnage*);
	int m_GetPV();
	int m_GetMana();
	int m_GetVitesse();
	void m_PrendreDegat(int);
	void m_PerdreMana(int);
	int m_GetNbrCompetence();
	std::string m_GetNom();
};

