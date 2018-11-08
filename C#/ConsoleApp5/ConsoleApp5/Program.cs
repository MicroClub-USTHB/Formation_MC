using System;
 
 namespace ConsoleApp5
 {
     class Program
     {
         static void Main(string[] args)
         {
             Feu_Signalisation FS = new Feu_Signalisation(10);
             FS.allumer();
             FS.clignoter(12);
             Console.WriteLine("Hello World!");
         }
     }
 }