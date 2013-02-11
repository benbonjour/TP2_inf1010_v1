/************************************************************************************
 * Fichier                  : main.cpp
 * Auteur                   : 
 * Description              : Fichier principal de l'application
 * Date de creation         : 
 * Date de modification     : 
 ************************************************************************************/

#include <iostream>

#include <string>
#include "individu.h"
#include "vinsetfromages.h"
#include "professeur.h"
#include "entreprise.h"
#include "etudiant.h"

using namespace std;

// Vérification pour les fuites de mémoires
#define _CRTDBG_MAP_ALLOC // Utilise les allocations avec débogage.
#include <stdlib.h>
#include <crtdbg.h>
#define new new( _NORMAL_BLOCK , __FILE__ , __LINE__ ) // Ajoute le numéro de ligne au rapport de fuites.

int main() {

	// Vérification pour les fuites de mémoires
	_CrtSetDbgFlag(0
	| _CRTDBG_ALLOC_MEM_DF    // Débogage d'allocation mémoire.
	| _CRTDBG_LEAK_CHECK_DF   // Rapport de fuites à la sortie du programme.
	| _CRTDBG_CHECK_ALWAYS_DF // Vérifie la corruption à chaque new/delete (lent).
	);

	// Créer un objet VinsEtFromages

	VinsEtFromages infoLog;

	// Créer quatre (4) étudiants différents
	string* listeMarie;
	string* listeJulien;
	string* listeAlexandre;
	string* listeBenjamin;

	listeMarie = new string[1];
	listeMarie[0] = "Mon vin";
	listeJulien = new string[1];
	listeJulien[0] = "Mon vin";
	listeAlexandre = new string[1];
	listeAlexandre[0] = "Mon vin";
	listeBenjamin = new string[1];
	listeBenjamin[0] = "Mon vin";

	Etudiant marie("Miousse","Marie", listeMarie, 1, 1, "Logiciel", "Premiere Annee", 15.7);
	Etudiant julien("Aymong","Julien", listeJulien, 1, 1, "Logiciel", "Premiere Annee",14.5);
	Etudiant alexandre("St-Onge","Alexandre", listeAlexandre, 1, 1, "Logiciel", "Premiere Annee", 13.2);
	Etudiant benjamin("Brodeur","Benjamin", listeBenjamin, 1, 1, "Logiciel", "Premiere Annee", 14.5);

	// Leur ajouter à chacun un vin préféré

	marie.add("un Rouge releve");
	julien.add("Rhum & Coke");
	alexandre.add("dry gin");
	benjamin.add("non merci ca va :D");



	// Les ajouter à la liste des étudiants assistant au Vins & Fromages

	infoLog.addEtudiant(marie);
	infoLog.addEtudiant(julien);
	infoLog.addEtudiant(alexandre);
	infoLog.addEtudiant(benjamin);


	// Créer deux (2) professeurs
	string* listeMajikarp;
	string* listeDitto;

	listeMajikarp = new string[1];
	listeMajikarp[0] = "Mon vin";
	listeDitto = new string[1];
	listeDitto[0] = "Mon vin";

	Professeur majikarp("Poke", "Majikarp", listeMajikarp, 1, 1, "Poissonnerie", "M-4016", 9001);
	Professeur ditto("Pokemo", "Ditto", listeDitto, 1, 1, "Ingenerie", "M-3016", 0);
	
	// Leur ajouter à chacun deux vins préférés

	majikarp.add("De l'eau filtree pur a 100%");
	majikarp.add("De l'eau minerale");

	ditto.add("Le meme que Majikarp");
	ditto.add("Parce qu'il COPIE TOUTE LOL");

	// Supprimer le premier vin préféré ajouté au premier professeur

	majikarp.del("De l'eau filtree pur a 100%");

		

	// Les ajouter à la liste des professeurs assistant au Vins & Fromages

	infoLog.addProfesseur(majikarp);
	infoLog.addProfesseur(ditto);


	//cout << infoLog.afficherPresent();
	

	// Créer cinq (5) représentants d'entreprises

	string* listePoint;
	string* listeLigne;
	string* listeCarre;
	string* listeCube;
	string* listeHypercube;

	listePoint = new string[1];

	listeLigne = new string[1];
	listeLigne[0] = "Mon vin plat";

	listeCarre = new string[1];
	listeCarre[0] = "Mon vin carre";

	listeCube = new string[1];
	listeCube[0] = "Mon vin volumique";

	listeHypercube = new string[1];
	listeHypercube[0] = "Mon vin space and time";

	//Entreprise();

	Entreprise point("Dimension-0", "Point", "Bon", listePoint, 1, 0, 1, 1, 1);
	Entreprise ligne("Dimension-1", "Secante", "Parallele", listeLigne, 1, 1, 1, 1, 2.5);
	Entreprise carre("Dimension-2", "Losange", "Rectangle", listeCarre, 1, 1, 1, 1, 2.5);
	Entreprise cube("Dimension-3", "XYZ", "Plate", listeCube, 1, 1, 1, 1, 2.5);
	Entreprise hypercube("Dimension-4", "WOAH", "HYPERCUBE", listeHypercube, 1, 1, 1, 1, 2.5);

	// Leur ajouter à chacun un vin préféré, excepté au premier

	ligne.add("Un vin cheap");
	carre.add("Un vin moins cheap");
	cube.add("Un vin de depanneur");
	hypercube.add("Cheval-Blanc 1947");

	// Les ajouter à la liste des représentants d'entreprises assistant au Vins & Fromages

	infoLog.addEntreprise(point);
	infoLog.addEntreprise(ligne);
	infoLog.addEntreprise(carre);
	infoLog.addEntreprise(cube);
	infoLog.addEntreprise(hypercube);

	// Supprimer le troisième (3ème) étudiant, le premier (1er) professeur et les
	// représentants d'entreprises deux (2) et quatre (4)

	infoLog.delEtudiant(alexandre);
	infoLog.delProfesseur(majikarp);
	infoLog.delEntreprise(ligne);
	infoLog.delEntreprise(cube);

	// Afficher la liste des personnes qui seront présentes au
	// Vins & Fromages en utilisant la méthode afficherPresents()

	cout << infoLog.afficherPresent();

	// Afficher la liste de tous les individus qui seront présents au
	// Vins & Fromages en utilisant la méthode afficherIndividus()


	return 0;
}

