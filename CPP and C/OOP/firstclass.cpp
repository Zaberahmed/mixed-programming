#include <bits/stdc++.h>
using namespace std;
class Animals
{

public:
    string name;
    int age;
    string birthday;

    void showname(string name)
    {
        cout << name << endl;
    }
    Animals() // Default constructor
    {
        name = "Tweety";
    }
};
void sample()
{
    Animals cat;
    cat.showname(cat.name = "Baby");
}

int main()
{
    Animals dog;
    // dog.name = "Milo";
    dog.showname("Milo");

    sample();

    Animals bird;
    bird.showname(bird.name);
}
