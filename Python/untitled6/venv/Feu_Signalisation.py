from random import *
class Feu_Signalisation:
    def __init__(self,h=None):
        if(h != None):
            self.hauteur = h
        else:
            self.hauteur = 10
        self.__couleur = 0
        self.__active = False
    def __mise_action(self):
        r = randint(0,10)
        if(r<5):
            self.__active = True
        else:
            self.__active = False
        return self.__active
    def allumer(self,cou):
        if(self.__mise_action()):
            print("Le feu s'allume")
            self.__couleur = cou
        else:
            print("Le feu ne s'allume pas")
            self.__couleur = -1
    def clignoter(self,t=None):
        if(t!=None):
            # Si je voulais faire une surcharge sur l'attribut
            # t je l'écrirais ici
            print("Surcharge non définie")
        else:
            t = 3
        if(self.__couleur == -1):
            print("Je peux pas clignoter, je suis éteint")
            return
        while(t>0):
            for i in range(3):
                print("Je clignote en " + ("Rouge" if(self.__couleur==0) else "Vert") )
            t = t -1
            if(self.__couleur==0):
                self.__couleur = 1
            else:
                self.__couleur = 0




F = Feu_Signalisation(10)
F.allumer(1)
F.clignoter()



