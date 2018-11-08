//
// Created by Geekzone on 02-11-18.
//
#include "stdio.h"
#include "iostream"
#include "cstdlib"
using namespace std;
#include "Feu_Signalisation.h"


bool Feu_Signalisation::mise_en_fonction () {
    int g = rand () % 10 + 2;
    if(g>2)
    {
        allumer = true;
    }
    return allumer;
}

int Feu_Signalisation::getCouleur () {
    if(allumer)
        return couleur;
    else
        return -1;
}

int Feu_Signalisation::getHauteur () {
    return hauteur;
}

bool Feu_Signalisation::allumer_feu (int couleur) {
    std::cout << "Tentative d'allumage" << std::endl;
    bool b = mise_en_fonction ();
    if(b)
    {
        cout << "allumage reussi" << endl;
        this->couleur = couleur;
    }
    else
    {
        cout << "echec de l'allumage" << endl;
        this->couleur = -1;
    }
    return b;
}

void Feu_Signalisation::clignoter () {
    if(couleur == -1)
    {
        cout << "Le feu ne peux pas clignoter car il est éteint" << endl;
        return;
    }
    int t = 3;
    while(t>0)
    {
        for(int j=0;j<3;j++)
        {
            cout << "Je m'allume en : " << (couleur==0?"Rouge":"Vert") << endl;
        }
        if(couleur == 1)
            couleur = 0;
        else
            couleur = 1;
        t--;
    }
}

void Feu_Signalisation::clignoter (int t) {
    if(!allumer)
    {
        cout << "Le feu ne peux pas clignoter car il est éteint" << endl;
        return;
    }
    while(t>0)
    {
        for(int j=0;j<3;j++)
        {
            cout << "Je m'allume en : " << (couleur==0?"Rouge":"Vert") << endl;
        }
        if(couleur == 1)
            couleur = 0;
        else
            couleur = 1;
        t--;
    }
}

Feu_Signalisation::Feu_Signalisation (int h) {
    hauteur = h;
}


int main(){
    asm("MOV $eax,0");
    //Délcaration Statique
    Feu_Signalisation FF(10);
    FF.allumer_feu (0);
    FF.clignoter ();
    //Déclaration Dynamique
    Feu_Signalisation *F=NULL;
    F = new Feu_Signalisation(10);
    F->allumer_feu (1);
    cout << "premiere simulation" << endl;
    F->clignoter ();
    cout << "deuxieme simulation" << endl;
    F->clignoter (10);
    free (F);
}



