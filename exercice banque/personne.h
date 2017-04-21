#pragma once
#include<string>
using namespace std;
class Personne {
	//attributs:
private:
	string nom;
	//méthodes :

public:
	//un constructeur paramétré seulement
	Personne(const string &nom);
	//methode d'affichage
	void afficher()const;

	void lirePersonne();
};