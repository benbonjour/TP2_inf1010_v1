/************************************************************************************
 * Fichier                  : individu.h
 * Auteur                   : Benjamin Brodeur Mathieu & Julien Aymong
 * Description              : Definition de la classe Individu
 * Date de creation         : 6 Fevrier 2013
 * Date de modification     : 
 ************************************************************************************/

#include <string>

using namespace std;

#ifndef _INDIVIDU_H_
#define _INDIVIDU_H_

class Individu
{
public:
    
    //Constructeurs
    Individu();
    Individu(string nom, string prenom, string* listeVinsPreferes);
    Individu(const Individu& unIndividu);
    
    //Destructeurs
    ~Individu();
    
    //Modifiers & accesors
    string getNom() const;
    string getPrenom() const;
    void setNom(string nom);
    void setPrenom(string prenom);
    
    //Surcharge d'operateurs
    bool operator==(Individu& unIndividu) const;
    Individu& operator=(const Individu& unIndividu) const;
    
    //Fonction add et del Pour listeVinsPreferes
    void add(string nomDuVin);
    void del(string nomDuVin);
    
    //Fonction getPrix pour prixEntree
    double getPrix() const;
    
    //Methode getString()
    
    string getString() const;
    
    
protected:
    
    double prixEntree;
    
private:
    
    string nom_;
    string prenom_;
    string* listeVinsPreferes_;
};

#endif // _INDIVIDU_H_