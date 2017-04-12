class Jeux{
private:	
	enum Etat {
		e_Initialisation,
		e_Exploration,
		e_Combat,
		e_FinDuJeu
	};
	Etat etatJeux;
	Joueur* heros;
	int difficulty;
	Map carte;
	bool end;
public:
	Jeux();
	void m_getJoueur();
	void m_selectDifficulty();
	void m_getMap();
	void m_update();
	bool m_getEtat();
	~Jeux();
};
