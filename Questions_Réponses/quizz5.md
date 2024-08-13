# Déclaratins et opérateurs

**Question 1 :**

L'opérateur ________ incrémente la valeur de son opérande de un puis utilise la valeur.

*incrément de préfixe*

```
C'est exact - préfixe signifie pré-incrémentation, nous incrémentons donc l'opérande AVANT de l'utiliser.
```

**Question 2 :**
L'opérateur utilisé pour tester l'égalité de deux opérandes est ________.

*==*

```
Super! C'est une erreur courante d'utiliser le seul signe égal, mais il s'agirait d'une affectation et non d'une comparaison d'égalité.
```

**Question 3 :**
L'opérateur qui représente le ET logique est ________.

*&&*

```
Bien! Le && est destiné aux opérations logiques. Il existe également un seul &, mais il est utilisé pour manipuler les bits.
```

**Question 4 :**
L'opérateur qui représente le OU logique est ________.

```
||
```

```
Bien! Le || est pour les opérations logiques. Il existe également un seul |, mais il est utilisé pour manipuler les bits.
```

**Question 5 :**
Si a vaut 3, b vaut 5 et c vaut 7, lesquels des énoncés suivants sont vrais ?

```
b == 5;
c == (a + b) – 1;
b > 5;
a >= 3;
c <= (a * b) / a
```

*1,2 et 4 sont vraies*

**Question 6 :**
`a < 10 ` est appelé `a(n)` ________.

*expression relationelle*

```
Bien. Nous utilisons un opérateur relationnel et ce n'est pas une instruction complète.
```

**Question 7 :**

Qu'affichera le code suivant ?

```
int x = 10, y = 3, z = 6;
cout << (x == y) << " ";
cout << (z <= x) << " ";
cout << (y != z) << " ";
cout << (x > y && z < x) << " ";
cout << (y < x && z < x) << " ";
cout << (x < y || z < 0) << endl;
```

*0 1 1 1 1 0*

**Question 8 :**

Qu'est-ce qui est affiché par le code suivant ?

```
int amount = 100;
amount += amount * 2;
cout << amount << endl;
```

sortie :

*300*

```
Super! N'oubliez pas que nous incrémentons le montant de l'expression de droite.
```

**Question 9 :**

Qu'est-ce qui est affiché par le code suivant ?

```
int x= 5;
int y= -2;
int z = 2;
cout << (x + y * z <= x + z * z - x) << endl;
```

Sortie :

*1*

```
Bon! Cela donne (1 <= 4), ce qui est vrai, donc 1 est affiché puisque 1 est vrai.
```

**Question 10 :**

Quelles sont les valeurs de x et y après l’exécution du code suivant ?

```
double  a = 100;
int b = 12;
int x = b % 3;
double  y = a / b;
int z = a / b;
```

Sortie :

*x = 0, y = 8.33333 et z = 8*







