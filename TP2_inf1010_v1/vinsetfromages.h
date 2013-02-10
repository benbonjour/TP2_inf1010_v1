/************************************************************************************
 * Fichier                  : vinsetfromages.h
 * Auteur                   : Benjamin Brodeur Mathieu & Julien Aymong
 * Description              : Definition de la classe VinsEtFromages
 * Date de creation         : 6 Fevrier 2013
 * Date de modification     : 
 ************************************************************************************/

#include <string>
#include <vector>
#include "entreprise.h"
#include "professeur.h"
#include "etudiant.h"

using namespace std;

#ifndef _VINSETFROMAGES_H_
#define _VINSETFROMAGES_H_

class VinsEtFromages : public Individu
{
public:
    //Constructeurs
    VinsEtFromages();
    
    //Destructeur
    ~VinsEtFromages();
    
    //Add & Del
    void addEntreprise(Entreprise& uneEntreprise);
    void addProfesseur(Professeur& unProfesseur);
    void addEtudiant(Etudiant& unEtudiant);
    void delEntreprise(Entreprise& uneEntreprise);
    void delProfesseur(Professeur& unProfesseur);
    void delEtudiant(Etudiant& unEtudiant);
    
    //Methode Afficher Present
    string afficherPresent() const;
    vector<Individu> getListeIndividus() const;
    string afficherIndividus() const;
    
private:
    
    vector<Entreprise*> listeEntreprises_;
    vector<Professeur*> listeProfesseurs_;
    vector<Etudiant*> listeEtudiants_;
};


#endif // _VINSETFROMAGE_H_