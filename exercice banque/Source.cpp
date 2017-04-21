#include<iostream>
#include<string>
#include"banque.h"
#include"compte.h"
#include"personne.h"
using namespace std;

int main() {
	cout << "classe personne" << endl;
	Personne client("mohamed"), directeur("Rachid");

	client.afficher();
	cout << endl;
	directeur.afficher();
	cout << endl<<endl;
	cout << "classe Compte" << endl;
	Compte cheque(200, client, 2000, 1.2);
	cheque.afficher();
	cout << endl<<endl;
	cout << "classe banque" << endl;
	Banque banque("banque", directeur);
	banque.afficher();
	cout << endl;
	banque.ouvertureCompte();
	banque.ouvertureCompte();
	banque.ouvertureCompte();
	banque.ouvertureCompte();
	banque.afficher();
	return 0;
}