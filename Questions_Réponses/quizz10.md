# POO – Classes et objets


**Question 1 :**

Une classe est ________. 

*Un type de données défini par l'utilisateur.*

**Question 2 :**

Le ________ d’une classe est utilisé pour initialiser les objets de ce type de classe.

*constructeur*

**Question 3 :**

Les attributs des membres de la classe sont accessibles avec l'opérateur ________.

*dot.*

**Question 4 :**

Si aucun constructeur défini par l'utilisateur n'est fourni pour une classe, C++ générera automatiquement un constructeur ________.

*défaut*

**Question 5 :**

________ et ________ déterminent l’accès accordé aux membres du groupe.

*public, private*

**Question 6 :**

La sémantique de copie fournie par le constructeur de copie C++ par défaut est ________.

*memberwhise/copie reservé aux membres*

**Question 7 :**

________ sont associés au constructeur `Move C++`.

*r-values references*

**Question 8 :**

La classe ________ est appelée lorsqu'un objet sort de la portée.

*desrtuctor*

**Question 9 :**

Qu'affiche le code suivant ?

```
#include <iostream>
using namespace std;
 
class Test {
private:
   int num;
   void increment_num() {
      num++;
   }
public:
   Test(int num) : num{num} { }
};
 
int main() {
   Test object {100};
   cout << object.increment_num() << endl;
   return 0;
}
```

*Le code ne sera pas compilé*

**Question 10 :**

Étant donné la déclaration de classe suivante, quelle affirmation n’est PAS vraie ?

```
class Test {
private:
   int num;
   void increment_num() {
      num++;
   }
public:
   Test(int num) : num{num} { }
   void decrement_num() {
      num--;
   }
};
```

*La classe a un constructeur par défaut généré par le compilateur*




