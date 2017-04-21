#include"compte.h"
#include"personne.h"
#include<iostream>
using namespace std;



//un constructeur paramétré(au moins)
Compte::Compte() :titulaireDuCompte("no name") {
	numeroDuCompte = -1;
	solde = -1;
	tauxInteret = -1;
}

Compte::Compte(const int &numeroDeCompte, const Personne &titulaireDuCompte, const double &solde, const double &tauxInteret) :titulaireDuCompte(titulaireDuCompte) {
	this->numeroDuCompte = numeroDeCompte;
	this->solde = solde;
	this->tauxInteret = tauxInteret;
}

// des accesseurs
int Compte::getNumeroCompte() {
	return numeroDuCompte;
}


// affichage d'un compte
void Compte::afficher() const {
	cout << " Numero de compte : " << numeroDuCompte << endl;
	cout << " Nom client : ";
	titulaireDuCompte.afficher();
	cout << endl << " Solde : " << solde << endl;
	cout << " Taux d'interet : " << tauxInteret;

}
//retirer et déposer de l'argent sur le compte
void Compte::retirer(const double & credit) {
	solde -= credit;
}

void Compte::deposer(const double & debit) {
	solde += debit;
}

void Compte::lireCompte() {
	titulaireDuCompte.lirePersonne();
	cout << "numero de compte : "; cin >> numeroDuCompte;
	cout << " Solde : "; cin >> solde;
	cout << " Taux d'interet : "; cin >> tauxInteret;
}