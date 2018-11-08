import java.lang.Math;

public class Feu_Signalisation {
    private int hauteur;
    private int couleur;
    private boolean active;

    public Feu_Signalisation(int h){
        hauteur  = h;
    }

    private boolean mettre_en_fonction(){
        double j = (Math.random()*2000)%10;
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

    public boolean allumer(){
        boolean b = mettre_en_fonction();
        if(b)
            System.out.println("allumage reussi");
        else
            System.out.println("allumage impossible");
        return b;
    }

    public int getHauteur() {
        return hauteur;
    }

    public void clignoter(int t){
        if(!active)
        {
            System.out.println("Clignotement impossible, feu non actif");
            return;
        }
        while(t>0){
            for(int i=0;i<3;i++)
            {
                System.out.println("Je clignote avec la couleur : " + (couleur==0?"Rouge":"Vert") );
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
