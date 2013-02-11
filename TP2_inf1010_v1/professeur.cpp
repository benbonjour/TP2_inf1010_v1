/************************************************************************************
 * Fichier                  : professeur.cpp
 * Auteur                   : Benjamin Brodeur Mathieu & Julien Aymong
 * Description              : Implémentation de la classe Professeur
 * Date de creation         : 6 Fevrier 2013
 * Date de modification     : 
 ************************************************************************************/

#include <string>
#include <iostream>
#include "individu.h"
#include "professeur.h"
#include <sstream>


//Constructeurs
/************************************************************************************
 * Description              : Professeur::Professeur() : Cette méthode initialise les
                              attributs avec une valeur par défaut.
 * Parametre                : AUCUN
 * Valeur de retour         : AUCUNE
 * Remarque                 : AUCUNE
 ************************************************************************************/
Professeur::Professeur()
{
    departement_ = "un mauvais departement";
    bureau_ = "aucun bureau";
}

/************************************************************************************
 * Description              : Professeur::Professeur(string departement, string bureau)
 *                          : Cette méthode initialise les attributs departement et 
 *                            bureau.
 * Parametre                : String nom(IN): contient le nom du prof.
 *                            String prenom(IN): contient le prenom du prof.
 *                            String* listeVin Preferes(IN): contient la liste des vins
 *                            preferes des professeurs.
 *                            Int capaciteListeVins(IN): contient la capacite max du tab
 *                            de la liste de vin preferes du professeur.
 *                            Int tailleListesVins(IN): le nombre de vin prefere du prof
 *                            String departement(IN): contient le departement du prof.
 *                            String bureau(IN): contient le nom du bureau du prof.
 *                            Double prixEntre(IN): prix de l'entre du prof.
 * Valeur de retour         : AUCUNE
 * Remarque                 : AUCUNE
 ************************************************************************************/
Professeur::Professeur(string nom, string prenom, string* listeVinsPreferes, int capaciteListeVins, int tailleListesVins, string departement, string bureau, double prixEntree) 
	: Individu(nom, prenom, listeVinsPreferes, capaciteListeVins, tailleListesVins, prixEntree)
{
    departement_ = departement;
    bureau_ = bureau;
}

//Destructeur
/************************************************************************************
 * Description              : Professeur::~Professeur(): destructeur de la fonction.
 * Parametre                : AUCUN
 * Valeur de retour         : AUCUNE
 * Remarque                 : AUCUNE
 ************************************************************************************/
Professeur::~Professeur()
{
}

//Modifiers & Accessors
/************************************************************************************
 * Description              : Professeur::getDepartement() const : Accessor au nom
 *                            du departement du professeur
 * Parametre                : AUCUN
 * Valeur de retour         : String departement: nom du departement du professeur
 * Remarque                 : AUCUNE
 ************************************************************************************/
string Professeur::getDepartement() const
{
    return departement_;
}

/************************************************************************************
 * Description              : Professeur::getBureau() const : Accessor au nom
 *                            du bureau du professeur
 * Parametre                : AUCUN
 * Valeur de retour         : String bureau: nom du bureau du professeur
 * Remarque                 : AUCUNE
 ************************************************************************************/
string Professeur::getBureau() const
{
    return bureau_;
}

/************************************************************************************
 * Description              : setDepartement(string departement) : Modifie le nom du
 *                            departement du professeur.
 * Parametre                : String departement (IN): le nom du departement entrer.
 * Valeur de retour         : AUCUN
 * Remarque                 : AUCUNE
 ************************************************************************************/
void Professeur::setDepartement(string departement)
{
    departement_ = departement;
}

/************************************************************************************
 * Description              : Professeur::setBureau(string bureau): Modifie le nom du
 *                            bureau du professeur.
 * Parametre                : String bureau (IN): le nom du bureau entrer.
 * Valeur de retour         : AUCUN
 * Remarque                 : AUCUNE
 ************************************************************************************/
void Professeur::setBureau(string bureau)
{
    bureau_ = bureau;
}

//Methode getString()
/************************************************************************************
 * Description              : Individu::getString() const, fonction qui retourne le
 *                            prenom, nom, le nom du departement, le nom du bureau et
 *                            prix d'entree, la liste des vins preferes, de l'individu
 * Parametre                : String: [Prenom][Nom] -Prix: [prix d'entrée]CAD - Vins:
 *                            [liste des vins séparées par une virgule et une espace]
 * Valeur de retour         : AUCUNE
 * Remarque                 : AUCUNE
 ************************************************************************************/
string Professeur::getString() const
{
    stringstream information;
    
    information << "Professeur: " << getPrenom() << " " << getNom() << " (" << departement_<< ", " << 
    bureau_ << ") - Prix : " << prixEntree_ << " CAD";
    
    if(getNbVinsPreferes() != 0)
    {
		information << " Vins - ";
		for (int i = 0; i < getNbVinsPreferes(); i++)
        {
            information << getVinPrefere(i);
			if (i != getNbVinsPreferes() - 1)
			{
				information << ", ";
			}
        }
    }
    
    return information.str();
}
