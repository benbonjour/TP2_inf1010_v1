/************************************************************************************
 * Fichier                  : etudiant.h
 * Auteur                   : Benjamin Brodeur Mathieu & Julien Aymong
 * Description              : Definition de la classe Etudiant
 * Date de creation         : 6 Fevrier 2013
 * Date de modification     : 
 ************************************************************************************/

#include <string>

using namespace std;

#ifndef _ETUDIANT_H_
#define _ETUDIANT_H_

class Etudiant : public Individu
{
public:
    //Constructeurs
    Etudiant();
    Etudiant(string nom, string prenom, string* listeVinsPreferes, int capaciteListeVins, int tailleListeVins, string departement, string niveau, double prixEntree = 14.5);
    
    //Destructeur
    ~Etudiant();
    
    //Modifiers & Accessors
    string getDepartement() const;
    string getNiveau() const;
    void setDepartement(string departement);
    void setNiveau(string niveau);
    
    //Methode getString()
    string getString() const;
    
private:
    
    string departement_;
    string niveau_;
    
};


#endif // _ETUDIANT_H_