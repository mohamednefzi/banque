#pragma once
#include<string>
using namespace std;
class Personne {
	//attributs:
private:
	string nom;
	//m�thodes :

public:
	//un constructeur param�tr� seulement
	Personne(const string &nom);
	//methode d'affichage
	void afficher()const;

	void lirePersonne();
};