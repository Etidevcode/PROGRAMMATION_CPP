# Pointeurs

**Question 1 :**

Une variable pointeur peut stocker ________.

*adresses d'autres variables*

**Question 2 :**

Afin de déterminer l'adresse d'une variable en C++, on peut utiliser l'opérateur ________.

*&*

**Question 3 :**

Les variables de pointeur doivent toujours être ________ avant d'être utilisées.

*initialisé*

**Question 4 :**

Afin de suivre un pointeur et d'accéder aux données vers lesquelles il pointe, nous devons ________ le pointeur à l'aide de l'opérateur ________.

```
déférencer, *
```

**Question 5 :**

Les pointeurs peuvent être utilisés pour allouer dynamiquement du stockage à partir de ________ à ________.

*tas ou magasin gratuit, runtime*

**Question 6 :**

Lors de l'utilisation de pointeurs bruts et d'une allocation de stockage dynamique, nous devons toujours désallouer le stockage utilisé en utilisant ________ pour empêcher ________.


*delete, fuites de mémoire*

**Question 7 :**

________ et les pointeurs peuvent être utilisés de manière interchangeable dans de nombreux contextes.

*Noms des tableaux*

**Question 8 :**

Quels types de variables ptr peut-il stocker étant donné la déclaration suivante ci-dessous ?

`int **ptr;`

*adresses des pointeurs vers des entiers*

**Question 9 :**

Qu'affiche l'extrait de code suivant ?

```
int *data = new int[5];
 
for (int i = 0; i<5; i++)
   *(data + i) = i*2;
 
for (int i = 0; i<=4; i++)
   cout << data[i] << " " ;
cout << endl;   
 
delete [] data;
```

*0 2 4 6 8*

**Question 10 :**

Compte tenu des déclarations de pointeurs suivantes, que pouvez-vous dire à propos de ptr1 et ptr2 ?

```
int *ptr1;
int *ptr2 { nullptr};
```

*`ptr1` n'est pas initialisé et `ptr2` est initialisé*
















