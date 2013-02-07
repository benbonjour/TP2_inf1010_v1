/************************************************************************************
 * Fichier                  : etudiant.cpp
 * Auteur                   : Benjamin Brodeur Mathieu & Julien Aymong
 * Description              : Implémentation de la classe Etudiant
 * Date de creation         : 6 Fevrier 2013
 * Date de modification     : 
 ************************************************************************************/

#include <string>
#include <sstream>
#include "individu.h"
#include "etudiant.h"

using namespace std;

//Constructeurs
/************************************************************************************
* Description              : Etudiant::Etudiant() : Cette méthode initialise les attributs
*							 avec une valeur par défaut.
* Parametre                : AUCUN
* Valeur de retour         : AUCUNE
* Remarque                 : AUCUNE
************************************************************************************/
Etudiant::Etudiant()
{
	Individu::Individu();
	departement_ = "Genie des materiaux LOLOLOL";
	niveau_ = "Même pas obtenu son Diplome d'etude secondaire XD";
	prixEntree_ = 14,5;

}

/************************************************************************************
* Description              : Etudiant::Etudiant(string departement, string niveau) :
*							 Cette méthode initialise les attributs avec des valeurs
*							 choisis par l'utilisateur
* Parametre                : string departement (IN) : nom du département de l'étudiant
*							 string niveau (IN) : nom du niveau d'étude
* Valeur de retour         : AUCUNE
* Remarque                 : AUCUNE
************************************************************************************/
Etudiant::Etudiant(string nom, string prenom, string* listeVinsPreferes, string departement, string niveau)
		: Individu(nom, prenom, listeVinsPreferes), departement_(departement), niveau_(niveau)
{
	prixEntree_ = 14,5;
}


//Destructeur
/************************************************************************************
* Description              : Etudiant::~Etudiant() : Cette méthode est le destructeur
*							 par défaut.
* Parametre                : AUCUN
* Valeur de retour         : AUCUNE
* Remarque                 : AUCUNE
************************************************************************************/
Etudiant::~Etudiant()
{

}


//Modifiers & Accesseurs
/************************************************************************************
* Description              : string Etudiant::getDepartement() const : Cette méthode
*							 retourne le nom du département de l'étudiant.
* Parametre                : AUCUN
* Valeur de retour         : String
* Remarque                 : Cette méthode est constante.
************************************************************************************/
string Etudiant::getDepartement() const
{
	return departement_;
}

/************************************************************************************
* Description              : string Etudiant::getNiveau() const : Cette méthode retourne
*							 le niveau d'étude de l'étudiant.
* Parametre                : AUCUN
* Valeur de retour         : String
* Remarque                 : AUCUNE
************************************************************************************/
string Etudiant::getNiveau() const
{
	return niveau_;
}

/************************************************************************************
* Description              : void Etudiant::setDepartement(string departement) : Cette
*							 méthode assigne un département ou l'étudiant étudie
*							 selon la valeur de l'utilisateur
* Parametre                : string departement (IN) : nom du département d'étude
* Valeur de retour         : AUCUNE
* Remarque                 : AUCUNE
************************************************************************************/
void Etudiant::setDepartement(string departement)
{
	departement_ = departement;
}

/************************************************************************************
* Description              : void Etudiant::setNiveau(string niveau) : Cette méthode
*							 assigne un niveau d'étude de l'étudiant selon la valeur
*							 de l'utilisateur.
* Parametre                : string niveau (IN) : niveau d'étude
* Valeur de retour         : SUCUNE
* Remarque                 : AUCUNE
************************************************************************************/
void Etudiant::setNiveau(string niveau)
{
	niveau_ = niveau;
}


//Methode getString()
/************************************************************************************
* Description              : string Etudiant::getString() const : Cette méthode permet
*							 d'afficher les différentes informations sur un étudiant :
*							 Prénom, nom, Département, Niveau d'étude, Prix payé en
*							 entrée, liste des vins consommés.
* Parametre                : AUCUN
* Valeur de retour         : String
* Remarque                 : Cette méthode est constante.
************************************************************************************/
string Etudiant::getString() const
{
	stringstream information;
	information << "Etudiant : " << getPrenom() << " " << getNom() << " (" + departement_ << ", " << niveau_ << ") - Prix : " << getPrix() << " CAD";
	if ( getNbVinsPreferes() != 0)
	{
		int nbVins = getNbVinsPreferes();
		information << " - Vins : ";
		for (int i = 0; i < nbVins; i++)
		{
			information << getVinsPreferes(i);
			if (i != nbVins - 1)
			{
				information << ", ";
			}
		}
	}

	return information.str();
}