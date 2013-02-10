/************************************************************************************
 * Fichier                  : entreprise.cpp
 * Auteur                   : Julien Aymong & Benjamin Brodeur Mathieu
 * Description              : Implémentation de la classe Entreprise
 * Date de creation         : 7 février 2013
 * Date de modification     : 
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

}

/************************************************************************************
* Description              : Entreprise::Entreprise(string nomEntreprise, string nom, string prenom, string* listeVinsPreferes, int capaciteListeVins, int tailleListeVins, int stagiairesCherches, int emploisProposes, double prixEntree) :
*							 Cette méthode initialise les attributs avec les valeurs
*							 choisies par l'utilisateur.
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
{

}


//Destructeur
/************************************************************************************
* Description              : Entreprise::~Entreprise() : Cette méthode est le
*							 le destructeur par défaut.
* Parametre                : AUCUN
* Valeur de retour         : AUCUNE
* Remarque                 : AUCUNE
************************************************************************************/
Entreprise::~Entreprise()
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
* Parametre                : 
* Valeur de retour         : 
* Remarque                 : 
************************************************************************************/
int Entreprise::getEmploisProposes() const
{

}

/************************************************************************************
* Description              : 
* Parametre                : 
* Valeur de retour         : 
* Remarque                 : 
************************************************************************************/
void Entreprise::setNomEntreprise(string nomEntreprise)
{

}

/************************************************************************************
* Description              : 
* Parametre                : 
* Valeur de retour         : 
* Remarque                 : 
************************************************************************************/
void Entreprise::setStagiairesCherches(int stagiairesCherches)
{

}

/************************************************************************************
* Description              : 
* Parametre                : 
* Valeur de retour         : 
* Remarque                 : 
************************************************************************************/
void Entreprise::setEmploisProposes(int emploisProposes)
{

}


//Methode getString()
/************************************************************************************
* Description              : 
* Parametre                : 
* Valeur de retour         : 
* Remarque                 : 
************************************************************************************/
string Entreprise::getString() const
{

}