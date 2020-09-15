// FR : But : Le programme à comme entrée un nombre de 5 chiffres, il verifie que celui-ci comprend bien 5 chiffres et l'affiche verticalement
//Auteur : DEFFERT Arnaud
// Date : 200-09-14

#include <iostream> // Pour permettre au programme d'interagir avec l'utilisateur cout, cin, 

int main()

{
	setlocale(LC_ALL, "");  // fait apparaitre correctement les accents de windows à la console

	// au debut on déclare les valeurs

	int nombre; // déclarer un nombre entier

std::cout << "Saisir un nombre à 5 chiffres :"; //On invite l'utilisateur à saisir un nombre
std::cin >> nombre; // Le programme lit et enregistre la valeur

//si le nombre est inférieur à 10000 il affiche Ce nombre ne contient pas 5 chiffres.

if (nombre < 10000)
{
	std::cout << "Ce nombre ne contient pas 5 chiffres.";

}
// KM : Utilise le else
//si le nombre est  supérieur ou égale à 10000  et inférieur ou égale à 99999 il a 5 chiffres
if (nombre >= 1000)		// KM : manque un 0 à 1000
if (nombre <=99999)


{// bloc instruction exécuté si la condition est vraie

	std::cout << nombre / 10000 % 10; //l'opérateur demande de diviser le nombre par 10000 modulo 10 pour afficher des dizaine de 1000
	std::cout << nombre / 1000 % 10 ; //l'opérateur demande de diviser le nombre par 1000 modulo 10 pour afficher l'unite de 1000
	std::cout << nombre / 100 % 10; //l'opérateur demande de diviser le nombre par 100 modulo 10pour afficher l'unité de 100
	std::cout << nombre / 10 % 10; //FR : l'opérateur demande de diviser le nombre par 10 modulo 10pour afficher le chiffre des dizaine
	std::cout << nombre  %10; //l'opérateur demande de diviser le nombre par  modulo 10 pour afficher le nombre des unités

}
else
{ //bloc instruction exécuté si la condition est fausse

	std::cout << "Ce nombre ne contient pas 5 chiffres.";

}


}

// KM : Excellent plan de tests avec les erreurs constatées. Effectivement vous ne saviez pas comment faire un retour à la ligne. Mon erreur ! 
// plan de test

/*
nombre				resultat souhaite									erreur
12345				12345 verticalement						affiche sur la même ligne
																	12345
																		
													
													

123				Ce nombre ne contient pas 5 chiffres.
10000															affiche sur la même ligne 10000
123456			Ce nombre ne contient pas 5 chiffres.								


*/
