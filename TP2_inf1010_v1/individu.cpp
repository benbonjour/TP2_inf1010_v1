/************************************************************************************
 * Fichier                  : individu.cpp
 * Auteur                   : Benjamin Brodeur Mathieu et Julien Aymong
 * Description              : Implémentation de la classe Individu
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
    
    /************************************************************************************
     * Description              : Individu() : constructeur par defaut initialise les at
     *                            tributs de l'individu par des valeurs par defaults
     * Parametre                : AUCUN
     * Valeur de retour         : AUCUNE
     * Remarque                 : AUCUNE
     ************************************************************************************/
    Individu()
    {
    
    }
    
    
    /************************************************************************************
     * Description              : Individu(string nom, string prenom, string* listeVins
     *                            Preferes) : constructeur par parametres qui initialise 
     *                            les attributs de l'individu par des valeurs par defaults
     * Parametre                : String:nom "nom de l'individu, String:prenom "prenom de
     *                            l'individu", String*:listeVinsPreferes "tableau de stri
     *                            ng contenant la liste de vin preferes de l'individu"
     * Valeur de retour         : AUCUNE
     * Remarque                 : AUCUNE
     ************************************************************************************/
    Individu(string nom, string prenom, string* listeVinsPreferes)
    {
    
    }
    
    /************************************************************************************
     * Description              : Individu(const Individu& unIndividu) : constructeur par 
     *                            defaut initialise les at
     *                            tributs de l'individu par des valeurs par defaults
     * Parametre                : AUCUN
     * Valeur de retour         : AUCUNE
     * Remarque                 : AUCUNE
     ************************************************************************************/
    Individu(const Individu& unIndividu)
    {
    
    }
    
    
    
    
    
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
