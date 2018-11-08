using System;
namespace ConsoleApp5
{
    public class Feu_Signalisation
    {
        private int hauteur;
        private int couleur;
        private bool active;

        public Feu_Signalisation(int h){
            hauteur  = h;
        }

        private bool mettre_en_fonction(){
            Random aleatoire = new Random();
            double j = aleatoire.NextDouble();
            if(j<2)
            {
                active = true;
            }
            else
            {
                active = false;
                couleur = -1;
            }
            return active;
        }

        public int getCouleur() {
            if(active)
                return couleur;
            else return -1;
        }

        public bool allumer(){
            bool b = mettre_en_fonction();
            if(b)
                Console.WriteLine("allumage reussi");
            else
            Console.WriteLine("allumage impossible");
            return b;
        }

        public int getHauteur() {
            return hauteur;
        }

        public void clignoter(int t){
            if(!active)
            {
                Console.WriteLine("Clignotement impossible, feu non actif");
                return;
            }
            while(t>0){
                for(int i=0;i<3;i++)
                {
                   Console.WriteLine("Je clignote avec la couleur : " + (couleur==0?"Rouge":"Vert") );
                }
                t--;
                if(couleur == 1)
                    couleur = 0;
                else
                    couleur = 1;
            }
        }

        public void clignoter(int c,int w){
            // A completer
        }
        
    }
}