/************************************************************************************
 * Fichier                  : entreprise.h
 * Auteur                   : Benjamin Brodeur Mathieu & Julien Aymong
 * Description              : Definition de la classe Entreprise
 * Date de creation         : 6 Février 2013
 * Date de modification     :
 ************************************************************************************/

#include <string>

using namespace std;

#ifndef _ENTREPRISE_H_
#define _ENTREPRISE_H_

class Entreprise : public Individu
{
public:
    //Constructeurs
    Entreprise();
    Entreprise(string nomEntreprise, int stagiairesCherches, int emploisProposes);
    
    //Destructeur
    ~Entreprise();
    
    //Modifiers & Accessors
    string getNomEntreprise() const;
    int getStagiairesCherches() const;
    int getEmploisProposes() const;
    
    void setNomEntreprise(string nomEntreprise);
    void setStagiairesCherches(int stagiairesCherches);
    void setEmploisProposes(int emploisProposes);
    
    //Methode getString()
    string getString() const;
    
private:
    
    string nomEntreprise_;
    int stagiairesCherches_;
    int emploisProposes_;
    
};

#endif // _ENTREPRISE_H_