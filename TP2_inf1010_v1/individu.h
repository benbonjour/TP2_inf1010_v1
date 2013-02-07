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
    Individu(string nom, string prenom, string* listeVinsPreferes,int capaciteListeVins, int tailleListeVins, double prixEntree = 0);
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
    Individu& operator=(const Individu& unIndividu);
    
    //Fonction add et del Pour listeVinsPreferes
    void add(string nomDuVin);
    void del(string nomDuVin);
    
    //Fonction getvinPrefere(), getNbVinsPreferes()
    string getVinPrefere(int i) const;
    int getNbVinsPreferes() const;
    
    //Fonction getPrix pour prixEntree
    double getPrix() const;
    
    
    //Methode getString()
    string getString() const;
    
    
protected:
    
    double prixEntree_;
    
private:
    
    string nom_;
    string prenom_;
    string* listeVinsPreferes_;
    int tailleListeVins_;          // taille et capacite nous permet de gerer les tableaux dynamiques
    int capaciteListeVins_;        // comme s'il s'agissait de vecteurs.
    
    
};

#endif // _INDIVIDU_H_