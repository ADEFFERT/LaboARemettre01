// But : Le programme doit lire un Entier, D�terminer et Afficher s'il s'agit d'un entier Pair ou Impair
// Auteur :  DEFFERT Arnaud
// Date : 2020-09-14

#include <iostream> // boite � outils pour communiquer avec l'utilisateur, cout cin



int x;
main()

{
	setlocale(LC_ALL, "");  // fait apparaitre correctement les accents de windows � la console

	cout <<"Donnez un nombre :"; //l'utilisateur donne un nombre
	cin >> x;
	if (x % 2 == 0)
		cout << "Le nombre est pair"; //Le programme r�pond si le chiffre est pair
	}else{

	cout << "Le nombre est impair"; //Le programme r�pond si le chiffre est impair


	return 0;



}


