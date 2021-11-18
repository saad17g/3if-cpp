//---------- Réalisation du module <TestTrajet> (fichier TestTrajet.cpp)

/////////////////////////////////////////////////////////////////  INCLUDE
//-------------------------------------------------------- Include système
#include <iostream>

using namespace std;
//------------------------------------------------------ Include personnel
#include "TrajetSimple.h"
#include "Cellule.h"

///////////////////////////////////////////////////////////////////  PRIVE
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//---------------------------------------------------- Variables statiques

//------------------------------------------------------ Fonctions privées
//static type nom ( liste de paramètres )
// Mode d'emploi :
//
// Contrat :
//
// Algorithme :
//
//{
//} //----- fin de nom

static void TestTrajetSimpleConstructor( void )
// Mode d'emploi : Test le constructeur de TrajetSimple.
//
{
  TrajetSimple trajetSimple = TrajetSimple("Paris", "Lyon", "TGV");
} //----- fin de TestTrajetSimpleConstructor


static void TestTrajetSimpleGetVilleDepart( void )
// Mode d'emploi : Test le constructeur de TrajetSimple.
//
{
  TrajetSimple trajetSimple = TrajetSimple("Paris", "Lyon", "TGV");
  cout << "Ville de départ : " << trajetSimple.GetVilleDepart() << endl;
} //----- fin de TestTrajetSimpleGetVilleDepart

static void TestTrajetSimpleGetVilleArrivee( void )
// Mode d'emploi : Test le constructeur de TrajetSimple.
//
{
  TrajetSimple trajetSimple = TrajetSimple("Paris", "Lyon", "TGV");
  cout << "Ville d'arrivée : " << trajetSimple.GetVilleArrivee() << endl;
} //----- fin de TestTrajetSimpleGetVilleDepart


static void TestTrajetSimpleAfficher( void )
// Mode d'emploi : Test le constructeur de TrajetSimple.
//
{
  TrajetSimple trajetSimple = TrajetSimple("Paris", "Lyon", "TGV");
  cout << "Trajet "; trajetSimple.Afficher();
} //----- fin de TestTrajetSimpleGetVilleDepart

static void TestCelluleConstructeur( void )
// Mode d'emploi : Test le constructeur de TrajetSimple.
//
{
  TrajetSimple trajetSimple = TrajetSimple("Paris", "Lyon", "TGV");
  TrajetSimple *pointeurTrajetSimple = &trajetSimple;
  Cellule cellule = Cellule( pointeurTrajetSimple, NULL );
} //----- fin de TestTrajetSimpleGetVilleDepart


static void TestCelluleGetValeur( void )
// Mode d'emploi : Test le constructeur de TrajetSimple.
//
{
  TrajetSimple trajetSimple = TrajetSimple("Paris", "Lyon", "TGV");
  TrajetSimple *pointeurTrajetSimple = &trajetSimple;
  Cellule cellule = Cellule( pointeurTrajetSimple, NULL );
  cout << "Valeur de la cellule " << cellule.GetValeur() << endl;
} //----- fin de TestTrajetSimpleGetVilleDepart

static void TestCelluleGetSuivante( void )
// Mode d'emploi : Test le constructeur de TrajetSimple.
//
{
  TrajetSimple trajetSimple = TrajetSimple("Paris", "Lyon", "TGV");
  TrajetSimple *pointeurTrajetSimple = &trajetSimple;
  Cellule cellule = Cellule( pointeurTrajetSimple, NULL );
  cout << "Cellule suivante : " << cellule.GetSuivante() << endl;
} //----- fin de TestTrajetSimpleGetVilleDepart

static void TestCelluleAfficher( void )
// Mode d'emploi : Test le constructeur de TrajetSimple.
//
{
  TrajetSimple trajetSimple = TrajetSimple("Paris", "Lyon", "TGV");
  TrajetSimple *pointeurTrajetSimple = &trajetSimple;
  Cellule cellule = Cellule( pointeurTrajetSimple, NULL );
  cellule.Afficher( );
} //----- fin de TestTrajetSimpleGetVilleDepart

//////////////////////////////////////////////////////////////////  PUBLIC
//---------------------------------------------------- Fonctions publiques
int main ( )
{
  /* Test de TrajetSimple */
  cout << " ----- Test de TrajetSimple ----- " << endl;
  TestTrajetSimpleConstructor();
  TestTrajetSimpleGetVilleDepart();
  TestTrajetSimpleGetVilleArrivee();
  TestTrajetSimpleAfficher();

  /* Test de Cellule */
  cout << " ----- Test de Cellule ----- " << endl;
  TestCelluleConstructeur();
  TestCelluleGetValeur();
  TestCelluleGetSuivante();
  TestCelluleAfficher();
  return 0;
}