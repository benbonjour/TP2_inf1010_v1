/************************************************************************************
 * Fichier                  : professeur.h
 * Auteur                   : Benjamin Brodeur Mathieu & Julien Aymong
 * Description              : Definition de la classe Professeur
 * Date de creation         : 6 Fevrier 2013
 * Date de modification     : 
 ************************************************************************************/

#include <string>
#include "individu.h"

using namespace std;

#ifndef _PROFESSEUR_H_
#define _PROFESSEUR_H_

class Professeur : public Individu
{
public:
    //Constructeurs
    Professeur();
    Professeur(string nom, string prenom, string* listeVinsPreferes, int capaciteListeVins, int tailleListesVins, string departement, string bureau, double prixEntree = 0);
    
    //Destructeur
    ~Professeur();
    
    //Modifiers & Accessors
    string getDepartement() const;
    string getBureau() const;
    void setDepartement(string departement);
    void setBureau(string bureau);
    
    //Methode getString()
    string getString() const;
    
private:
    string departement_;
    string bureau_;
    
};


#endif // _PROFESSEUR_H_