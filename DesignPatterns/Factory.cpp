#include <iostream>
using namespace std;
// factory Design Pattern

class Animal{
	public:
	virtual void sounds() =0; // pure virtual function
};

class Dog: public Animal
{
	public:
	void sounds() override{
		cout << "woof" << endl;
	}
};
class Cat: public Animal
{
	public:
	void sounds() override{
		cout << "meow" << endl;
	}
};

class AnimalFactory
{
	public:
	static Animal* createAnimal(const string &type){
		if (type=="dog")
		{
			return new Dog();
		}
		if (type == "cat")
		{
			return new Cat();
		}
		return nullptr;
	}
};


int main() {
	Animal* anm = AnimalFactory::createAnimal("cat");
	anm->sounds();
	return 0;
}