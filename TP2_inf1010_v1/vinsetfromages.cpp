/************************************************************************************
 * Fichier                  : vinsetfromages.cpp
 * Auteur                   : Benjamin Brodeur Mathieu & Julien Aymong
 * Description              : Implémentation de la classe VinsEtFromages
 * Date de creation         : 6 Fevrier 2013
 * Date de modification     : 
 ************************************************************************************/

#include "entreprise.h"
#include "professeur.h"
#include "etudiant.h"
#include "individu.h"
#include "vinsetfromages.h"
#include <iostream>

#include <sstream>
#include <string>
#include <vector>

using namespace std;

//Constructeurs
/************************************************************************************
 * Description              : VinsEtFromages::VinsEtFromages()
 * Parametre                : AUCUN
 * Valeur de retour         : AUCUNE
 * Remarque                 : AUCUNE
 ************************************************************************************/
VinsEtFromages::VinsEtFromages()
{
	//TODO : À demander au professeur
	/*
    Entreprise* uneEntreprise = new Entreprise;
    listeEntreprises_.push_back(uneEntreprise);
    
    Professeur* unProf = new Professeur;
    listeProfesseurs_.push_back(unProf);
    
    Etudiant* unEtudiant = new Etudiant;
    listeEtudiants_.push_back(unEtudiant);
	*/
}

//Destructeur
/************************************************************************************
 * Description              : VinsEtFromages::~VinsEtFromages() : Destructeur par def.
 * Parametre                : AUCUN
 * Valeur de retour         : AUCUNE
 * Remarque                 : AUCUNE
 ************************************************************************************/
VinsEtFromages::~VinsEtFromages()
{
}

//Add & Del
/************************************************************************************
 * Description              : void VinsEtFromages::addEntreprise(Entreprise& uneEntreprise)
 *                            , fonction qui ajoute une Entreprise a la liste d'invites
 * Parametre                : Entreprise& uneEntreprise(IN): entreprise ajoutee
 * Valeur de retour         : AUCUNE
 * Remarque                 : AUCUNE
 ************************************************************************************/
void VinsEtFromages::addEntreprise(Entreprise& uneEntreprise)
{
    bool trouver= false;
    
    for (unsigned int i = 0; i < listeEntreprises_.size(); i++)
    {
        if(listeEntreprises_[i] == &uneEntreprise)
        {
            trouver = true;
            cout << "Erreur, l'entreprise specifiee existe deja : " << endl;
            listeEntreprises_[i]->getString();
        }
    }
    
    if(!trouver)  // si l'entreprise n'est pas trouver on l'ajoute
    {
        //Entreprise* deuxEntreprise = new Entreprise;
        //deuxEntreprise = &uneEntreprise;
        listeEntreprises_.push_back(&uneEntreprise);
    }
             
    
}

/************************************************************************************
 * Description              : void VinsEtFromages::addProfesseur(Professeur& unProfesseur)
 *                            , fonction qui ajoute un professeur a la liste d'invites
 * Parametre                : Professeur& unProfesseur(IN): Professeur ajoute
 * Valeur de retour         : AUCUNE
 * Remarque                 : AUCUNE
 ************************************************************************************/
void VinsEtFromages::addProfesseur(Professeur& unProfesseur)
{
    bool trouver= false;
    
    for (unsigned int i = 0; i < listeProfesseurs_.size(); i++)
    {
        if(listeProfesseurs_[i] == &unProfesseur)
        {
            trouver = true;
            cout << "Erreur le professeur specifiee existe deja : " << endl;
            listeProfesseurs_[i]->getString();
        }
    }
    
    if(!trouver)  // si le professeur n'est pas trouver on l'ajoute
    {
        //Professeur* deuxProfesseur = new Professeur;
        //deuxProfesseur = &unProfesseur;
        listeProfesseurs_.push_back(&unProfesseur);
    }
   
}

/************************************************************************************
 * Description              : void VinsEtFromages::addEtudiant(Etudiant& unEtudiant)
 *                            , fonction qui ajoute un etudiant a la liste d'invites
 * Parametre                : Etudiant& unEtudiant(IN): etudiant ajoute
 * Valeur de retour         : AUCUNE
 * Remarque                 : AUCUNE
 ************************************************************************************/
void VinsEtFromages::addEtudiant(Etudiant& unEtudiant)
{
    bool trouver= false;
    
    for (unsigned int i = 0; i < listeEtudiants_.size(); i++)
    {
        if(listeEtudiants_[i] == &unEtudiant)
        {
            trouver = true;
            cout << "Erreur l'etudiant specifie existe deja : " << endl;
            listeEtudiants_[i]->getString();
        }
    }
    
    if(!trouver)  // si l'etudiant n'est pas trouver on l'ajoute
    {
        //Etudiant* deuxEtudiant = new Etudiant();
        //deuxEtudiant = &unEtudiant;
        listeEtudiants_.push_back(&unEtudiant);
    }
}

/************************************************************************************
 * Description              : void VinsEtFromages::delEntreprise(Entreprise& uneEntreprise)
 *                            , fonction qui suprime une Entreprise de la liste d'invites
 * Parametre                : Entreprise& uneEntreprise(IN): entreprise a enlever
 * Valeur de retour         : AUCUNE
 * Remarque                 : L'espace du pointeur n'est pas desallouer mais seulement
 *                            mis a zero.
 ************************************************************************************/
void VinsEtFromages::delEntreprise(Entreprise& uneEntreprise)
{
    for (unsigned int i = 0; i < listeEntreprises_.size(); i++)
    {
        if(listeEntreprises_[i] == &uneEntreprise)
        {
            listeEntreprises_[i] = 0;
        }
    }
}

/************************************************************************************
 * Description              : void VinsEtFromages::delProfesseur(Professeur& unProfesseur)
 *                            , fonction qui suprime un professeur de la liste d'invites
 * Parametre                : Professeur& unProfesseur(IN): professeur a enlever
 * Valeur de retour         : AUCUNE
 * Remarque                 : L'espace du pointeur n'est pas desallouer mais seulement
 *                            mis a zero.
 ************************************************************************************/
void VinsEtFromages::delProfesseur(Professeur& unProfesseur)
{
    for (unsigned int i = 0; i < listeProfesseurs_.size(); i++)
    {
        if(listeProfesseurs_[i] == &unProfesseur)
        {
            listeProfesseurs_[i] = 0;
        }
    }
}

/************************************************************************************
 * Description              : void VinsEtFromages::delEtudiant(Etudiant& unEtudiant)
 *                            , fonction qui ajoute un etudiant a la liste d'invites
 * Parametre                : Etudiant& unEtudiant(IN): etudiant a enlever
 * Valeur de retour         : AUCUNE
 * Remarque                 : L'espace du pointeur n'est pas desallouer mais seulement
 *                            mis a zero.
 ************************************************************************************/
void VinsEtFromages::delEtudiant(Etudiant& unEtudiant)
{
    for (unsigned int i = 0; i < listeEtudiants_.size(); i++)
    {
        if(listeEtudiants_[i] == &unEtudiant)
        {
            listeEtudiants_[i] = 0;
        }
    }
}

//Methode Afficher Present
/************************************************************************************
 * Description              : string VinsEtFromages::afficherPresent() const, cette 
 *                            methode affiche la liste de tout le monde present.
 * Parametre                : AUCUN
 * Valeur de retour         : String (contenant toutes les informations)
 * Remarque                 : AUCUNE
 ************************************************************************************/
string VinsEtFromages::afficherPresent() const
{
    stringstream listePresence;
    
    listePresence << "Liste de Presences : " << endl;
	listePresence << "\n# Entreprises presentes : "<< endl;
    
    for(unsigned int i = 0; i < listeEntreprises_.size(); i++)
    {
        if(listeEntreprises_[i] != 0)
        {
            listePresence << "#- ";
            listePresence << listeEntreprises_[i]->getString();
            listePresence << endl;
        }
    }

    listePresence << "\n# Professeurs presents : "<< endl;
    
    for(unsigned int i = 0; i < listeProfesseurs_.size(); i++)
    {
        if(listeProfesseurs_[i] != 0)
        {
            listePresence << "#- ";
            listePresence << listeProfesseurs_[i]->getString();
            listePresence << endl;
        }
    }
    
    listePresence << "\n# Etudiants presents : "<< endl;
    
    for(unsigned int i = 0; i < listeEtudiants_.size(); i++)
    {
        if(listeEtudiants_[i] != 0)
        {
            listePresence << "#- ";
            listePresence << listeEtudiants_[i]->getString();
            listePresence << endl;
        }
    }
    
    return listePresence.str();
}

/************************************************************************************
 * Description              : vector<Individu> getListeIndividus() const, cette
 *                            methode retourne un vecteur d'objet individu creer local-
 *                            lement.
 * Parametre                : AUCUN
 * Valeur de retour         : Vecteur<Individu>
 * Remarque                 : AUCUNE
 ************************************************************************************/
vector<Individu> VinsEtFromages::getListeIndividus() const
{
    vector <Individu> listeIndividu;
	int position = 0;

    for(unsigned int i = 0; i < listeEntreprises_.size(); i++)
    {
        if(listeEntreprises_[i] != 0)
        {
			listeIndividu.push_back(*listeEntreprises_[i]);
			/*
			for (int j = 0; j < listeIndividu[i].getNbVinsPreferes(); i++)
			{
				listeIndividu[i].add(listeEntreprises_[i]->getVinPrefere(j));
			}
			*/

        }
    }
   
        for(int i = 0; i < listeProfesseurs_.size(); i++)
    {
        if(listeProfesseurs_[i] != 0)
        {
            listeIndividu.push_back(*listeProfesseurs_[i]);
        }
    }

    for(int i = 0; i < listeEtudiants_.size(); i++)
    {
        if(listeEtudiants_[i] != 0)
        {
            listeIndividu.push_back(*listeEtudiants_[i]);
        }
    } 
    

    return listeIndividu;
}

/************************************************************************************
* Description              : string VinsEtFromages::afficherIndividus() const : Cette
*							 méthode retourne une chaine de caractère contenant les
*							 information de tous les individus présents au Vin et Fromage.
* Parametre                : AUCUN
* Valeur de retour         : string
* Remarque                 : Cette fonction est constante.
************************************************************************************/
string VinsEtFromages::afficherIndividus() const
{
	string information = "\n\nIndividus presents : \n";
	vector<Individu> listePresence;

	listePresence = getListeIndividus();

	for (int i = 0; i < listePresence.size(); i++)
	{
		information += "\n#- ";
		information += listePresence[i].Individu::getString();
	}

	information += "\n";
	return information;
}