/************************************************************************************
 * Fichier                  : individu.cpp
 * Auteur                   : Benjamin Brodeur Mathieu et Julien Aymong
 * Description              : Implémentation de la classe Individu
 * Date de creation         : 6 Fevrier 2013
 * Date de modification     : 
 ************************************************************************************/

#include <string>
#include <iostream>
#include "individu.h"
#include <sstream>
using namespace std;

    
//Constructeurs

/************************************************************************************
* Description              : Individu::Individu(): constructeur par defaut initialise
*                            les atributs de l'individu par des valeurs par defaults
* Parametre                : AUCUN
* Valeur de retour         : AUCUNE
* Remarque                 : AUCUNE
 ************************************************************************************/
Individu::Individu()
{
    nom_ = "sansnom";
    prenom_ = "sansprenom";
    listeVinsPreferes_ = new string[1];
    tailleListeVins_ = 0;
    capaciteListeVins_ = 1;
    prixEntree_ = 0;
}


/************************************************************************************
 * Description              : Individu::Individu(string nom, string prenom, string*
 *                            listeVinsPreferes, int tailleListeVins, int 
 *                            capaciteListeVins, double prixEntree : constructeur 
 *                            par parametres qui initialise attributs de l'individu 
 *                            par des valeurs par defaults.
 * Parametre                : String nom(IN): le nom de l'individu
 *                            String prenom(IN):  Prenom de l'individu
 *                            String* listeVinsPreferes(IN): tableau de string
 *                            contenant la liste de vin preferes de l'individu
 *                            Int tailleListeVins(IN): taille du tableau de la liste
 *                            de vin.
 *                            Int capaciteListeVins(IN): capacite du tableau de la 
 *                            liste de vins.
 *                            Double prixEntree(IN): la valeur du prix d'entree
 * Valeur de retour         : AUCUNE
 * Remarque                 : AUCUNE
 ************************************************************************************/
Individu::Individu(string nom, string prenom, string* listeVinsPreferes, int tailleListeVins, int capaciteListeVins, double prixEntree)
{
    nom_ = nom;
    prenom_ = prenom;
    listeVinsPreferes_ = listeVinsPreferes;
    tailleListeVins_ = tailleListeVins;
    capaciteListeVins_ = capaciteListeVins;
    prixEntree_ = prixEntree;
}

/************************************************************************************
 * Description              : Individu::Individu(const Individu& unIndividu) : const
 *                            ructeur par copie qui initialise les attributs de 
 *                            l'individu par copie
 * Parametre                : AUCUN
 * Valeur de retour         : AUCUNE
 * Remarque                 : AUCUNE
 ************************************************************************************/
Individu::Individu(const Individu& unIndividu)
{
    nom_ = unIndividu.nom_;
    prenom_ = unIndividu.prenom_;
    prixEntree_ = unIndividu.prixEntree_;
    listeVinsPreferes_ = new string[unIndividu.capaciteListeVins_];
    // on copie les valeurs du tableau d'un individu dans celui de l'individu creer
    for (int i = 0; i < capaciteListeVins_; i++)
    {
        listeVinsPreferes_[i] = unIndividu.listeVinsPreferes_[i];
    }
}

   

//Destructeurs
/************************************************************************************
 * Description              : Individu::~Individu() : Destructeur par defaut
 * Parametre                : AUCUN
 * Valeur de retour         : AUCUNE
 * Remarque                 : AUCUNE
 ************************************************************************************/
Individu::~Individu()
{
    delete [] listeVinsPreferes_;
    listeVinsPreferes_ = 0;
}

//Modifiers & accesors
/************************************************************************************
 * Description              : Individu::getNom() : Accessor au nom de l'individu
 * Parametre                : AUCUN
 * Valeur de retour         : String nom "nom de l'individu"
 * Remarque                 : AUCUNE
 ************************************************************************************/
string Individu::getNom() const
{
    return nom_;
}

/************************************************************************************
 * Description              : Individu::getPrenom() : Accessor au prenom de l'individu
 * Parametre                : AUCUN
 * Valeur de retour         : String prenom "prenom de l'individu"
 * Remarque                 : AUCUNE
 ************************************************************************************/
string Individu::getPrenom() const
{
    return prenom_;
}


/************************************************************************************
 * Description              : Individu::setNom() : Modifie le nom de l'individu
 * Parametre                : String nom(IN): le nom entrer
 * Valeur de retour         : AUCUN
 * Remarque                 : AUCUNE
 ************************************************************************************/
void Individu::setNom(string nom)
{
    nom_ = nom;
}

/************************************************************************************
 * Description              : Individu::setPrenom() : Modifie le prenom de l'individu
 * Parametre                : String prenom(IN): le prenom entrer
 * Valeur de retour         : AUCUN
 * Remarque                 : AUCUNE
 ************************************************************************************/
void Individu::setPrenom(string prenom)
{
    prenom_ = prenom;
}

//Surcharge d'operateurs
/************************************************************************************
 * Description              : bool operator==(Individu& unIndividu) const, fonction
 *                            constante qui verifie si le nom et le prenom des 
 *                            individus sont les mêmes.
 * Parametre                : Individu& unIndividu(IN): l'individu à comparer
 * Valeur de retour         : Bool egal: retourne vrai si les individus sont les memes
 * Remarque                 : AUCUNE
 ************************************************************************************/
bool Individu::operator==(Individu& unIndividu) const
{
    bool egal;
    
    if(nom_ == unIndividu.getNom() && prenom_ == unIndividu.getPrenom())
    {
        egal = true;
    }
    else
    {
        egal = false;
    }
    
    return egal;
}

/************************************************************************************
 * Description              : Individu& operator=(const Individu& unIndividu),
 *                            fonction qui retourne l'individu de gauche maintenant 
 *                            avec les memes attributs a droite du egal.
 * Parametre                : Individu& unIndividu(IN): l'individu a droite du egal
 *                            dont les valeurs sont copiees dans celui de gauche. 
 * Valeur de retour         : Individu: l'individu appelant la fonciton (gauche)
 * Remarque                 : AUCUNE
 ************************************************************************************/
Individu& Individu::operator=(const Individu& unIndividu)
{
    if(this != &unIndividu)
    {
        nom_ = unIndividu.nom_;
        prenom_ = unIndividu.prenom_;
        listeVinsPreferes_ = unIndividu.listeVinsPreferes_;
        tailleListeVins_ = unIndividu.tailleListeVins_;
        capaciteListeVins_ = unIndividu.capaciteListeVins_;
        prixEntree_ = unIndividu.prixEntree_;
        
        delete [] listeVinsPreferes_;
        listeVinsPreferes_ = new string[capaciteListeVins_];
        
        for (int i = 0; i < capaciteListeVins_; i++)
        {
            listeVinsPreferes_[i] = unIndividu.listeVinsPreferes_[i];
        }
    }
    
    return *this ;
}



//Fonction getvinPrefere(), getNbVinsPreferes()
/************************************************************************************
 * Description              : Individu::getVinPrefere(int i) const, fonction qui ajoute un
 *                            nom de vin à la liste du vin fromage.
 * Parametre                : Int i(IN): le numero correspondant au vin preferes du 
 *                            tableau des vins preferes de l'individu.
 * Valeur de retour         : String nomDuVin: nom du vin prefere
 * Remarque                 : AUCUNE
 ************************************************************************************/
string Individu::getVinPrefere(int i) const
{
    return listeVinsPreferes_[i];
}

/************************************************************************************
 * Description              : Individu::getNbVinsPreferes() const, fonction qui ajoute                            
 *                            un nom de vin à la liste du vin fromage.
 * Parametre                : AUCUN
 * Valeur de retour         : Int tailleListeVin: nb de vin dans la liste de 
 *                            l'individu.
 * Remarque                 : AUCUNE
 ************************************************************************************/
int Individu::getNbVinsPreferes() const
{
    return tailleListeVins_;
}

//Fonction add et del Pour listeVinsPreferes
/************************************************************************************
 * Description              : Individu::add(string nomDuVin), fonction qui ajoute un
 *                            nom de vin à la liste du vin fromage.
 * Parametre                : String nomDuVin(IN): nom du vin a ajouter à la liste. 
 * Valeur de retour         : AUCUNE
 * Remarque                 : AUCUNE
 ************************************************************************************/
void Individu::add(string nomDuVin)
{
    if(capaciteListeVins_ < (tailleListeVins_+1))
    {
        capaciteListeVins_ = capaciteListeVins_*2;
        
        string* tabTemp = new string[capaciteListeVins_];
        
        for (int i = 0; i < tailleListeVins_; i++)
        {
            tabTemp[i] = listeVinsPreferes_[i];
        }
        
        delete [] listeVinsPreferes_;
        listeVinsPreferes_ = tabTemp;
    }
    listeVinsPreferes_[tailleListeVins_] = nomDuVin;
    tailleListeVins_++;
}

/************************************************************************************
 * Description              : Individu::del(string nomDuVin), fonction qui retire un
 *                            nom de vin à la liste du vin fromage.
 * Parametre                : String nomDuVin(IN): nom du vin a retirer à la liste.
 * Valeur de retour         : AUCUNE
 * Remarque                 : AUCUNE
 ************************************************************************************/
void Individu::del(string nomDuVin)
{
	bool trouve = false;
	string* nouvelleListe = new string[tailleListeVins_ - 1];
	for (int i = 0; i < tailleListeVins_ && !trouve; i++)
	{
		if (listeVinsPreferes_[i] == nomDuVin)
		{
			trouve = true;
			for (int j = 0, k = 0; j < tailleListeVins_; j++, k++)
			{
				if (listeVinsPreferes_[j] != nomDuVin)
				{
					nouvelleListe[k] = listeVinsPreferes_[j];
				}
				else
				{
					k--; //Permet de rester à la bonne case mémoire du tableau pour ajouter 
						 //le prochain vin qui ne porte pas le même nom que celui que l'on
						 //souhaite enlever
				}
			}
		}
	}
	if (trouve == false)
	{
		cout << "Le vin specife n'est pas present dans la liste de preference." << endl;
	}
	else
	{
		delete [] listeVinsPreferes_;
		listeVinsPreferes_ = nouvelleListe;
		tailleListeVins_--;
		capaciteListeVins_ --;
	}
}

//Fonction getPrix pour prixEntree
/************************************************************************************
 * Description              : Individu::getPrix() const, fonction qui retourne 
 *                            l'attribut protege prixEntree_
 * Parametre                : Double: prix payé par les étudiants à l'entrée
 * Valeur de retour         : AUCUNE
 * Remarque                 : AUCUNE
 ************************************************************************************/
double Individu::getPrix() const
{
    return prixEntree_;
}

//Methode getString()
/************************************************************************************
 * Description              : Individu::getString() const, fonction qui retourne le 
 *                            prenom, nom, prix d'entre et liste des vins preferes de
 *                            l'individu.
 * Parametre                : String: [Prenom][Nom] -Prix: [prix d'entrée]CAD - Vins:
 *                            [liste des vins séparées par une virgule et une espace]
 * Valeur de retour         : AUCUNE
 * Remarque                 : AUCUNE
 ************************************************************************************/
string Individu::getString() const
{
    stringstream information;
    
    information << "Individu: " << prenom_ << " " << nom_ << " - Prix:" << prixEntree_ << "CAD";
    
    if(tailleListeVins_ != 0)
    {
        for (int i = 0; i < tailleListeVins_; i++)
        {
            information << listeVinsPreferes_[i];
        }
    }
    
    return information.str();
}

