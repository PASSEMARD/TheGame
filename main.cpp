#include "Jeu.h"

using namespace std;

int main(){
	bool EtatJeux=true;
	Jeux jeu();
	while (EtatJeux){
		jeu.m_update();
		EtatJeux=jeu.m_getEtat();
	}
	return 0;
}
