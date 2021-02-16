#include <string>

using namespace std;

class Card
{
    private:
    string name;
    int level;
    int attack;
    int HP;

    public:
        Card(string name, int level, int attack, int HP);
        void display();
};