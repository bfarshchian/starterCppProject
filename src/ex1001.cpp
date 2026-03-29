#include <iostream>
#include <vector>

using namespace std;

calss Animal {
public:
    void speak() {
        cout << "Some sound \n";
    }
    ~Animal(){
        cout << "Animal cleaning\n";
    }
};

class Dog : public Animal {
public:
    void speak() {
        cout << "Woof\n";
    }
    ~Dog(){
        cout << "Dog cleaning\n";
    }
};

class Cat : public Animal {
public:
    void speak() {
        cout << "Meow\n";
    }
    ~Cat(){
        cout << "Cat cleaning\n";
    }
};

int main(){
    vector<Animal*> pets;
    pets.pushback(new Dog());
    pets.pushback(new Cat());

    for(Animal* pet : pets){
        pet->speak();
    }

    for(Animal* pet : pets){
        delete pet;
    }

    return 0;
}