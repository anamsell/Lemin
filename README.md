 Comment ça marche ?
 
• Votre programme va recevoir sur l’entrée standard la description de la fourmilière
sous la forme suivante :

nombre_de_fourmis
les_salles
les_tubes

• La fourmilière est décrite par ses liaisons :

##start
1 23 3
2 16 7
#commentaire
3 16 3
4 16 5
5 9 3
6 1 5
7 4 8
##end
0 9 5
0-4
0-6
1-3
4-3
5-2
3-5
#autre commentaire
4-2
2-1
7-6
7-2
7-4
#C'est la fin
6-5

• On a donc 2 parties :

◦ La définition des salles sous la forme suivante : nom coord_x coord_y

◦ La définition des tubes : nom1-nom2

◦ Le tout entre-coupé de commentaires qui commencent par #

• Les lignes commençant par un ## sont des commandes modifiant les propriétés de
la ligne significative qui vient juste après.

• Par exemple, ##start indique l’entrée de la fourmilière et ##end la sortie

• La première ligne non conforme ou vide entraîne la fin de l’acquisition de la fourmilière et son traitement normal avec les données déjà acquises.

• S’il n’y a pas assez de donnée pour faire un traitement normal vous devrez simplement afficher ERROR
