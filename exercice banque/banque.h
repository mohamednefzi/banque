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
	// méthodes :
 //un constructeur paramétré seulement
public:
	Banque(const string &nomBanque,const Personne &directeur);
	//ouvrir / fermer un compte
	void ouvertureCompte();
	void clotureCompte(const int &numeroCompte);
	//affichage de l'état des comptes
	void afficher()const;
	// effectuer une opération sur un compte
	void operationCompte(const short &operation, const int &numCompte, const double montant);
};