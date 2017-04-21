#include<iostream>
#include<string>
#include"personne.h"
using namespace std;

	//un constructeur paramétré seulement
Personne::Personne(const string &nom) {
		this->nom = nom;
	}
	//methode d'affichage
	void Personne::afficher()const {
		cout << nom;
	}
	//saisie d'une personne
	void Personne::lirePersonne() {
		cout << "Nom : ";cin>> nom;
	}