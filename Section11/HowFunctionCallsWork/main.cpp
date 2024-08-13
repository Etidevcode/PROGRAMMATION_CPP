
#include <iostream>

using namespace std;

void func2(int &x, int y, int z){
    x += y + z;
}

int func1(int a, int b){
    int result{};
    result =  a +b;
    func2(result, a, b);
    return result;
}

int main(){
    int x {10};
    int y{20};
    int z{};
    
    z = func1(x, y);
    cout << z << endl;
    return 0;
}

/*
Que se passe-t-il généralement lorsque main appelle func1 (ou qu'une fonction en appelle une autre) ?
Il existe d'autres façons d'obtenir le même résultat :)
     
principal:
     pousser l'espace pour la valeur de retour
     pousser l'espace pour les paramètres
     pousser l'adresse de retour
     transférer le contrôle vers func1 (jmp)

fonction :
     pousser l'adresse de l'enregistrement d'activation précédent
     pousser toutes les valeurs de registre qui devront être restaurées avant de revenir à l'appelant
     exécuter le code dans func1
     restaurer les valeurs du registre
     stocker l'enregistrement d'activation précédent (déplacer le pointeur de pile)
     transférer le contrôle à l'évaluation de retour (jmp)

principal:
     affiche les paramètres
     affiche la valeur de retour

*/