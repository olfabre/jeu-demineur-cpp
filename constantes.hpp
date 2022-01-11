#ifndef CONSTANTES_JEUX_HPP
#define CONSTANTES_JEUX_HPP
using namespace std;

//  Source : constantes.hpp    Contenu : Toutes les constantes utiles pour le fonctionnement de mon Jeux
namespace _constante
{

  const string fichierLogo("logo.txt");           // Fichier Logo
  const int indicateurSantePlayerDefaut = 640;    // Points santé au début du jeu
  const int scorePlayerDefaut = 6400;             // Score au début du jeu
  const int jockerPlayerDefaut = 1;               // Nbre de Jocker au début du jeu
  const int forceJeuFacile = 0;                   // Constante difficulté du jeu à facile
  const int forceJeuMoyen = 1;                    // Constante difficulté du jeu à moyen
  const int forceJeuDifficile = 2;                // Constante difficulté du jeu à difficile
  const string pseudoPlayerModeTest = "Einstein"; // Pseudo en mode test
  const int debutJeux = 0;                        // Variable debut jeux
  const int encoursJeux = 1;                      // Variable milieu jeux
  const int finJeux = 2;                          // Variable fin jeux
  const int nbrColonneGrilleJeu = 8;              // Constante du nombre de colonnes dans une grille du jeu
  const int nbrLigneGrilleJeu = 8;                // Constante du nombre de lignes dans une grille du jeu
  const bool grilleHidden = true;                 // Grille privée (non affichée)
  const bool grillePublic = false;                // Grille public (affichée)
}
#endif