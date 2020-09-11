// But : Le programme � comme entr�e un nombre de 5 chiffres, il verifie que celui-ci comprend bien 5 chiffres et l'affiche verticalement
//Auteur : DEFFERT Arnaud
// Date : 200-09-14

#include <iostream> // Pour permettre au programme d'interagir avec l'utilisateur cout, cin, 

int main()

{
	setlocale(LC_ALL, "");  // fait apparaitre correctement les accents de windows � la console

	// au debut on d�clare les valeurs

	int nombre; // d�clarer un nombre entier

std::cout << "Saisir un nombre � 5 chiffres :"; //On invite l'utilisateur � saisir un nombre
std::cin >> nombre; // Le programme lit et enregistre la valeur

//si le nombre est inf�rieur � 10000 il affiche Ce nombre ne contient pas 5 chiffres.

if (nombre < 10000)
{
	std::cout << "Ce nombre ne contient pas 5 chiffres.";

}

//si le nombre est  sup�rieur ou �gale � 10000  et inf�rieur ou �gale � 99999 il a 5 chiffres
if (nombre >= 1000)
if (nombre <=99999)


{// bloc instruction ex�cut� si la condition est vraie

	std::cout << nombre / 10000 % 10; //l'op�rateur demande de diviser le nombre par 10000 modulo 10 pour afficher des dizaine de 1000
	std::cout << nombre / 1000 % 10 ; //l'op�rateur demande de diviser le nombre par 1000 modulo 10 pour afficher l'unite de 1000
	std::cout << nombre / 100 % 10; //l'op�rateur demande de diviser le nombre par 100 modulo 10pour afficher l'unit� de 100
	std::cout << nombre / 10 % 10; //l'op�rateur demande de diviser le nombre par 10 modulo 10pour afficher le chiffre des dizaine
	std::cout << nombre  %10; //l'op�rateur demande de diviser le nombre par  modulo 10 pour afficher le nombre des unit�s

}
else
{ //bloc instruction ex�cut� si la condition est fausse

	std::cout << "Ce nombre ne contient pas 5 chiffres.";

}


}
// plan de test

/*
nombre				resultat souhaite									erreur
12345				12345 verticalement						affiche sur la m�me ligne
																	12345
																		
													
													

123				Ce nombre ne contient pas 5 chiffres.
10000															affiche sur la m�me ligne 10000
123456			Ce nombre ne contient pas 5 chiffres.								


*/