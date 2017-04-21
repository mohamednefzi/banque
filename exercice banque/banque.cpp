#include"banque.h"
#include"compte.h"
#include"personne.h"
#include<string>
#include<iostream>
using namespace std;


//un constructeur paramétré seulement
Banque::Banque(const string &nomBanque, const Personne &directeur) :directeur(directeur) {
	this->nomBanque = nomBanque;
	this->nbCompte = 0;
}
//ouvrir / fermer un compte
void Banque::ouvertureCompte() {

	if (nbCompte < MAX_COMPTE)
	{
		compte[nbCompte].lireCompte();
		nbCompte++;
	}
	cout << endl;

}
void Banque::clotureCompte(const int &numeroCompte) {
	int i = 0;
	while (i < nbCompte&& compte[i].getNumeroCompte() != numeroCompte)
		i++;
	if (i < nbCompte)
	{
		compte[i] = compte[nbCompte - 1];
		nbCompte--;

	}
}
//affichage de l'état des comptes
void Banque::afficher()const {
	cout << " Nom de la banque : " << nomBanque << endl;
	cout << " Nom du directeur : ";
	directeur.afficher();
	cout << endl;
	for (int i = 0; i < nbCompte; i++)
	{
		compte[i].afficher(); cout << endl;
	}
	cout << "nombre de compte : " << nbCompte;
}
// effectuer une opération sur un compte
void Banque::operationCompte(const short &operation, const int &numCompte, const double montant) { //0 pour credit 1 pour debit
	int i = 0;
	while (i < nbCompte && compte[i].getNumeroCompte() != numCompte)
		i++;
	if (i < nbCompte)
		if (operation)
			compte[i].deposer(montant);
		else compte[i].retirer(montant);
}