#pragma once
#include"personne.h"
class Compte {
  // attributs
	private:
	int numeroDuCompte;
	Personne titulaireDuCompte;
	double solde;
	double tauxInteret;

public:
		   //méthodes :
		   //un constructeur paramétré(au moins)
	Compte();
	Compte(const int &numeroDeCompte, const Personne &titulaireDuCompte, const double &solde, const double &tauxInteret);
		   // des accesseurs
	int getNumeroCompte();
	
		   // affichage d'un compte
	void afficher()const;
	//retirer et déposer de l'argent sur le compte
		void retirer(const double & credit);
		void deposer(const double & debit);
		//saisie d'un compte
		void lireCompte();
};