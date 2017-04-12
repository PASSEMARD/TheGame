#include "Monstre.h"

using namespace std;

Monstre::Monstre(string nom) : Personnage("Monstre/" + nom + ".txt")
{
}


Monstre::~Monstre()
{
}

void Monstre::m_UtiliserCompetence(int numeroCompetence, Personnage* cible)
{
	if (manaActuelle > competences[numeroCompetence].m_getCoutMana())
	{
		manaActuelle -= competences[numeroCompetence].m_getCoutMana();
		competences[numeroCompetence].m_Utiliser(this, cible);
	}
	else
	{
		for (int i = 0; i < competences.size(); i++)
		{
			if (manaActuelle > competences[numeroCompetence].m_getCoutMana())
			{
				manaActuelle -= competences[numeroCompetence].m_getCoutMana();
				competences[numeroCompetence].m_Utiliser(this, cible);
				break;
			}
		}
	}
}
