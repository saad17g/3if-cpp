/************************************************************************
                           Cellule  -  Composant ListeChainée
                             -------------------
    début                : 15/11/2021
    copyright            : (C) 2021 par Jules DUCANGE et Saad GUESSOUS
    e-mail               : Jules.Ducange@insa-lyon.fr
                           Saad.Guessous@insa-lyon.fr
*************************************************************************/

//------- Réalisation de la classe <Cellule> (fichier Cellule.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Trajet.h"
#include "Cellule.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Cellule::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

//-------------------------------------------- Constructeurs - destructeur

Cellule::Cellule ( Trajet* Valeur, Cellule* Suivante )
{
    #ifdef MAP
    cout << "Appel au constructeur de <Cellule>" << endl;
    #endif

    valeur = Valeur;
    suivante = Suivante;
} //----- Fin de Cellule


Cellule::~Cellule ( )
{
    delete valeur;
    #ifdef MAP
    cout << "Appel au destructeur de <Cellule>" << endl;
    #endif
} //----- Fin de ~Cellule

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées