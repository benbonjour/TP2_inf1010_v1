/************************************************************************************
 * Fichier                  : entreprise.cpp
 * Auteur                   : Julien Aymong & Benjamin Brodeur Mathieu
 * Description              : Implémentation de la classe Entreprise
 * Date de creation         : 7 février 2013
 * Date de modification     : 14 Fevrier 2013
 ************************************************************************************/

#include <string>
#include <sstream>
#include "individu.h"
#include "entreprise.h"

using namespace std;

//Constructeurs
/************************************************************************************
* Description              : Entreprise::Entreprise() : Cette méthode initialise les
*							 attributs avec des valeurs par défaut.
* Parametre                : AUCUN
* Valeur de retour         : AUCUNE
* Remarque                 : AUCUNE
************************************************************************************/
Entreprise::Entreprise()
{
	Individu::Individu();
	nomEntreprise_ = "1337 Entreprise";
	stagiairesCherches_ = 2;
	emploisProposes_  = 2;
}

/************************************************************************************
* Description              : Entreprise::Entreprise(string nomEntreprise, string nom,
* 							 string prenom, string* listeVinsPreferes, int capaciteListeVins,
* 							 int tailleListeVins, int stagiairesCherches, int emploisProposes,
*                            double prixEntree) : Cette méthode initialise les attributs avec 
* 							 les valeurs choisies par l'utilisateur.
* Parametre                : string nomEntreprise (IN) : nom de l'entreprise du représentant
*							 string nom (IN) : nom du représentant
*							 string prenom (IN) : prénom du représentant
*							 string* listeVinsPreferes (IN) : tableau des vins du représentant
*							 int capaciteListeVins (IN) : capacité du tableau dynamique des vins préférés
*							 int tailleListeVins (IN) : nombre de vins préférés
*							 int stagiairesCherches (IN) : nombre de stagiaire rechercés
*							 int emploisProposes (IN) : nombre d'emplois disponible
*							 double prixEntree (IN) : prix d'entrée au Vin et Fromage
* Valeur de retour         : AUCUNE
* Remarque                 : AUCUNE
************************************************************************************/
Entreprise::Entreprise(string nomEntreprise, string nom, string prenom, string* listeVinsPreferes, int capaciteListeVins, int tailleListeVins, int stagiairesCherches, int emploisProposes, double prixEntree)
	: Individu(nom, prenom, listeVinsPreferes, capaciteListeVins, tailleListeVins, prixEntree), nomEntreprise_(nomEntreprise), stagiairesCherches_(stagiairesCherches), emploisProposes_(emploisProposes)
{// on donne encore une fois la majorite des attributs au constructeur d'individu

}


//Destructeur
/************************************************************************************
* Description              : Entreprise::~Entreprise() : Cette méthode est le
*							 le destructeur par défaut.
* Parametre                : AUCUN
* Valeur de retour         : AUCUNE
* Remarque                 : AUCUNE
************************************************************************************/
Entreprise::~Entreprise() // n'a pas a etre implementer ici.
{

}


//Modifiers & Accessors
/************************************************************************************
* Description              : string Entreprise::getNomEntreprise() const : Cette
*							 retourne à l'utilisateur le nom de l'entreprise.
* Parametre                : AUCUN
* Valeur de retour         : string
* Remarque                 : Cette méthode est constante.
************************************************************************************/
string Entreprise::getNomEntreprise() const
{
	return nomEntreprise_;
}

/************************************************************************************
* Description              : int Entreprise::getStagiairesCherches() const : Cette
*							 méthode retourne à l'utilisateur le nombre de stagiaires
*							 recherchés par l'entreprise.
* Parametre                : AUCUN
* Valeur de retour         : int
* Remarque                 : Cette méthode est constante.
************************************************************************************/
int Entreprise::getStagiairesCherches() const
{
	return stagiairesCherches_;
}

/************************************************************************************
* Description              : int Entreprise::getEmploisProposes() const : Cette
*							 méthode retourne à l'utilisateur le nombre d'emplois
*							 proposés 
* Parametre                : AUCUN
* Valeur de retour         : int
* Remarque                 : Cette méthode est constante
************************************************************************************/
int Entreprise::getEmploisProposes() const
{
	return emploisProposes_;
}

/************************************************************************************
* Description              : void Entreprise::setNomEntreprise(string nomEntreprise) :
*							 Cette méthode permet de modifier la valeur de nomEntreprise
*							 par la valeur choisie par l'utilisateur.
* Parametre                : string nomEntreprise (IN) : nom de l'entreprise à placer
* Valeur de retour         : AUCUNE
* Remarque                 : AUCUNE
************************************************************************************/
void Entreprise::setNomEntreprise(string nomEntreprise)
{
	nomEntreprise_ = nomEntreprise;
}

/************************************************************************************
* Description              : void Entreprise::setStagiairesCherches(int stagiairesCherches) :
*							 Cette méthode permet de modifier la valeur de stagiaireCherches
*							 par la valeur choisie par l'utilisateur.
* Parametre                : int stagaireCherches (IN) : nombre de stagaires recherchés
* Valeur de retour         : AUCUNE
* Remarque                 : AUCUNE
************************************************************************************/
void Entreprise::setStagiairesCherches(int stagiairesCherches)
{
	stagiairesCherches_ = stagiairesCherches;
}

/************************************************************************************
* Description              : void Entreprise::setEmploisProposes(int emploisProposes) :
*							 Cette méthode permet de modifier la valeur de emploisProposes
*							 par la valeur choisie par l'utilisateur.
* Parametre                : int emploisProposes (IN) : nombre d'emplois disponibles
* Valeur de retour         : AUCUNE
* Remarque                 : AUCUNE
************************************************************************************/
void Entreprise::setEmploisProposes(int emploisProposes)
{
	emploisProposes_ = emploisProposes;
}


//Methode getString()
/************************************************************************************
* Description              : string Entreprise::getString() const : Cette méthode permet
*							 de retourner à l'utilisateur le 
* Parametre                : AUCUN
* Valeur de retour         : string
* Remarque                 : Cette méthode est constante.
************************************************************************************/
string Entreprise::getString() const
{
	stringstream information;
	information << "Entreprise : " << getPrenom() << " " << getNom() << ", " + nomEntreprise_ << " (" << stagiairesCherches_ << " stages, " << emploisProposes_ << " emplois) - Prix : " << getPrix() << " CAD";
	if ( getNbVinsPreferes() != 0) // s'il y a un ou plus d'un vin dans la liste
	{
		int nbVins = getNbVinsPreferes();
		information << " - Vins : ";
		for (int i = 0; i < nbVins; i++) // boucle sur le nombre de vin
		{
			information << getVinPrefere(i); // donne le vin au stringstream
			if (i != nbVins - 1)
			{
				information << ", ";
			}
		}
	}

	return information.str();
}
