#include <iostream>
#include <string>

int main() {
    std::string nom;

    std::cout << "Quel est votre prénom ? ";
    std::getline(std::cin, nom); // lire une ligne entière (utile si le prénom a des espaces)

    std::cout << "Salut, " << nom << " !" << std::endl;
    std::cout << "Votre prénom contient " << nom.length() << " lettres." << std::endl;

    return 0;
}
