#pragma once
#include"compte.h"
#include"personne.h"
#include<string>
using namespace std;
#define MAX_COMPTE 10
#define CREDIT 0
#define DEBIT 1

class Banque {
	// attributs:
private:
	string nomBanque;
	Personne directeur;
	int nbCompte;
	Compte  compte[MAX_COMPTE];
	// m�thodes :
 //un constructeur param�tr� seulement
public:
	Banque(const string &nomBanque,const Personne &directeur);
	//ouvrir / fermer un compte
	void ouvertureCompte();
	void clotureCompte(const int &numeroCompte);
	//affichage de l'�tat des comptes
	void afficher()const;
	// effectuer une op�ration sur un compte
	void operationCompte(const short &operation, const int &numCompte, const double montant);
};