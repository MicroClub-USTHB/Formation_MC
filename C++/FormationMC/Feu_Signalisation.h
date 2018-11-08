//
// Created by Geekzone on 02-11-18.
//

#ifndef FORMATIONMC_FEU_SIGNALISATION_H
#define FORMATIONMC_FEU_SIGNALISATION_H
class Feu_Signalisation {
private:
    int hauteur;
    int couleur; //0 pour Rouge et 1 pour Vert , -1 si éteint
    bool allumer;
    bool mise_en_fonction();
public:
    Feu_Signalisation(int h);
    int getCouleur();
    int getHauteur(); //Retourne la hauteur du plus haut point
    bool allumer_feu(int couleur);
    void clignoter();
    void clignoter(int t);
};
#endif //FORMATIONMC_FEU_SIGNALISATION_H
