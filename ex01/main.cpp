#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		std::cout << "Leaks check from subject:" << std::endl;
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		delete j;
		delete i;
	}
	std::cout << std::endl;
	std::cout << "Deep copy tests:" << std::endl;
	const Cat *mojo = new Cat();
	{
		Cat mojo_copy(*mojo);
		std::cout << "Mojo type is " << mojo->getType() << std::endl;
	}
	std::cout << "Mojo type after copy deletion is " << mojo->getType() << std::endl;
	delete mojo;

	std::cout << std::endl;
	{
		std::cout << "Animal array tests:" << std::endl;
		std::cout << "--- Construction ---" << std::endl;
		Animal const *(array[6]);

		for (int i = 0; i < 3; i++)
			array[i] = new Dog();
		for (int i = 3; i < 6; i++)
			array[i] = new Cat();
		for (int i = 0; i < 6; i++)
			array[i]->makeSound();
		std::cout << "--- Destruction ---" << std::endl;
		for (int i = 0; i < 6; i++)
			delete array[i];
	}
	std::cout << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}
	std::cout << "Idea from basic: " << basic.getIdea(12) << std::endl;
	return (0);
}
