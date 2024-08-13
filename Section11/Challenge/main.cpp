#include <iostream>

using namespace std;

// Article 11
// Défi
/*
      Rappelez-vous le défi de la section 9 ci-dessous.
     Votre défi pour la section 11 est de modulariser votre solution à la section 9
     défiez en refactorisant votre solution afin qu'elle utilise des fonctions.
    
     Vous décidez comment modulariser le programme.
     vous pouvez utiliser ma solution qui est incluse dans ce fichier, ou modulariser votre solution.
    
     Voici quelques conseils :
         - Créer des fonctions pour chaque fonction majeure
         - Gardez les fonctions petites
         - Rappelez-vous l'analogie Patron/Ouvrier
         - Conserver la déclaration vectorielle dans la fonction principale 
          et transmettre l'objet vectoriel à toute fonction qui le nécessite

         NE déplacez PAS l'objet vectoriel en dehors de main et faites-en une variable globale.
    
         - Vous pouvez commencer par définir une fonction qui affiche le menu
         - Vous pouvez ensuite définir une fonction qui lit la sélection de l'utilisateur et la renvoie en majuscule
         - Créer des fonctions pour chaque option de menu
         - Créer des fonctions qui affichent la liste des nombres, calculent la moyenne, etc.
        
     Prenez-le une fonction à la fois et prenez votre temps.
     Si vous êtes frustré, faites une pause : ce n'est pas aussi facile qu'il 
    y paraît la première fois !
    
     Enfin, n'oubliez pas d'utiliser des prototypes de fonctions !
    
     Bonne chance, je sais que vous pouvez le faire !
*/
/*
     Ce défi consiste à utiliser une collection (liste) d'entiers et à permettre à l'utilisateur
     pour sélectionner des options dans un menu pour effectuer des opérations sur la liste.
    
     Votre programme doit afficher un menu d'options à l'utilisateur comme suit :
    
     P - Imprimer les numéros
     A - Ajouter un numéro
     M - Afficher la moyenne des nombres
     S - Afficher le plus petit nombre
     L - Afficher le plus grand nombre
     Q - Quitter

     Entrez votre choix :
    
Le programme ne doit accepter que les choix valides de l'utilisateur, les sélections en majuscules et en minuscules doivent être autorisées.
Si un choix illégal est fait, vous devriez afficher « Sélection inconnue, veuillez réessayer » et les options du menu devraient être
affiché à nouveau.


Si l'utilisateur saisit « P » ou « p », vous devez afficher tous les éléments (ints) dans la liste.
Si la liste est vide, vous devriez afficher "[] - la liste est vide"
Si la liste n'est pas vide, tous les éléments de la liste doivent être affichés entre crochets séparés par un espace.
Par exemple, [ 1 2 3 4 5 ]
      
Si l'utilisateur saisit « A » ou « a », vous devez lui demander un nombre entier à ajouter à la liste.
que vous ajouterez à la liste puis afficherez qu'il a été ajouté. Par exemple, si l'utilisateur saisit 5
Vous devriez afficher "5 ajoutés".
Les entrées de liste en double sont OK

Si l'utilisateur saisit « M » ou « m », vous devez calculer la moyenne des éléments de la liste et l'afficher.
Si la liste est vide, vous devriez afficher "Impossible de calculer la moyenne - aucune donnée".

Si l'utilisateur saisit « S » ou « s », vous devez afficher le plus petit élément de la liste.
Par exemple, si la liste contient [2 4 5 1], vous devez afficher « Le plus petit nombre est 1 ».
Si la liste est vide, vous devriez afficher "Impossible de déterminer le plus petit nombre - la liste est vide".

Si l'utilisateur saisit « L » ou « l », vous devez afficher le plus grand élément de la liste
Par exemple, si la liste contient [2 4 5 1], vous devez afficher « Le plus grand nombre est 5 ».
Si la liste est vide, vous devriez afficher "Impossible de déterminer le plus grand nombre - la liste est vide".

Si l'utilisateur saisit « Q » ou « q », vous devez afficher « Au revoir » et le programme doit se terminer.

Avant que tu commences. Écrivez les étapes que vous devez suivre et décidez dans quel ordre elles doivent être effectuées.
Pensez aux boucles que vous devez utiliser ainsi qu'à ce que vous utiliserez pour votre logique de sélection.

Cet exercice peut être difficile ! Il faudra probablement plusieurs tentatives avant de le terminer - ce n'est pas grave !

Enfin, assurez-vous de tester votre programme au fur et à mesure et à la fin.

Astuce : utilisez un vecteur !

Fonctionnalité supplémentaire si vous souhaitez étendre ce programme.

- rechercher un numéro dans la liste et s'il est trouvé, afficher le nombre de fois qu'il apparaît dans la liste
- effacer la liste (la rendre à nouveau vide) (Indice : la classe vectorielle a une méthode .clear())
- ne pas autoriser les entrées en double
- proposez vos propres idées !

Bonne chance!

*/

int main(){
    cout << "Default Template" << endl;
    return 0;
}
