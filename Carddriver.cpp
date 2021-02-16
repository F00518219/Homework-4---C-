#include "Card.hpp"

int main(int argc, char** argv)
{
    Card* Charizard = new Card("Charizard", 76, 100, 120);
    //(*Charizard).display();
    Charizard-> display();

    Card* Blastoise = new Card("Blastoise", 52, 50, 100);
    Blastoise-> display();

    Card* Venasaur = new Card("Venasaur", 67 , 60, 100);
    Venasaur-> display();

    Card* Pikachu = new Card("Pikachu", 14, 20, 50);
    Pikachu-> display(); 
}