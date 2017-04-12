#include "stdafx.h"
#include "Personnage.h"


using namespace std;

// Constructeur | Destructeur : \\.

Personnage::Personnage(string emplacementFichier)
{
	ifstream fichier(emplacementFichier);

	if (fichier)
	{
		string res;
		getline(fichier, nom);
		getline(fichier, res);
		pvMax = atoi(res.c_str());
		getline(fichier, res);
		manaMax = atoi(res.c_str());
		getline(fichier, res);
		vitesse = atoi(res.c_str());
		while (getline(fichier, res));
		competences.push_back(Competence(res));
		fichier.close();
		manaActuelle = manaMax;
		pvActuelle = pvMax;
	}
	else
		Interface::m_messageErreur("Erreur ouverture du fichier :" + emplacementFichier);

}

Personnage::~Personnage()
{
}

void Personnage::m_UtiliserCompetence(int, Personnage*)
{

}

// Methode : \\.

void Personnage::m_PrendreDegat(int nombreDegat)
{
	if (nombreDegat > 0)
	{
		if (pvActuelle - nombreDegat < 0)
			pvActuelle = 0;
		else
			pvActuelle = pvActuelle - nombreDegat;
	}
	else if(nombreDegat < 0)
	{
		if (pvActuelle - nombreDegat > pvMax)
			pvActuelle = pvMax;
		else
			pvActuelle = pvActuelle - nombreDegat;
	}
}

void Personnage::m_PerdreMana(int nombreManaPerdu)
{
	if (nombreManaPerdu > 0)
	{
		if (manaActuelle - nombreManaPerdu < 0)
			manaActuelle = 0;
		else
			manaActuelle = manaActuelle - nombreManaPerdu;
	}
	else if (nombreManaPerdu < 0)
	{
		if (manaActuelle - nombreManaPerdu > manaMax)
			manaActuelle = manaMax;
		else
			manaActuelle = manaActuelle - nombreManaPerdu;
	}
}

// Accesseur : \\.

int Personnage::m_GetPV()
{
	return pvActuelle;
}

int Personnage::m_GetMana()
{
	return manaActuelle;
}

int Personnage::m_GetVitesse()
{
	return vitesse;
}

string Personnage::m_GetNom()
{
	return nom;
}

int Personnage::m_GetNbrCompetence()
{
	return competences.size();
}