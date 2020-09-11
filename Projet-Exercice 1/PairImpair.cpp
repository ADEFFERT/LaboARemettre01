// But : Le programme doit lire un Entier, Déterminer et Afficher s'il s'agit d'un entier Pair ou Impair
// Auteur :  DEFFERT Arnaud
// Date : 2020-09-14

#include <iostream> // boite à outils pour communiquer avec l'utilisateur, cout cin



int main()
{
	setlocale(LC_ALL, "");  // fait apparaitre correctement les accents de windows à la console


	int nombre; // déclarer nombre entier
	
	std::cout <<"Saisir un nombre :"; //On invite l'utilisateur à saisir un nombre

	std::cin >> nombre; // Le programme lit et enregistre la valeur


	if (nombre % 2 == 0) // mise en place de la condition qui vérifie si le nombre est pair ou impair
	{ 
		std::cout << nombre << " est un nombre pair"; //Le programme affiche que le nombre taper par l'utilisateur est pair.
	}

	else
	{
		 std::cout << nombre << " est un nombre impair"; //Le programme affiche que le nombre taper par l'utilisateur  est impair
	}

	return 0;

}

// Plan de test

/*
nombre			resultat
1				impair
12				pair
15				impair
0				pair
*/


