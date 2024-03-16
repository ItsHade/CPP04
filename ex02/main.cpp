#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		std::cout << "Leaks check from subject:" << std::endl;
		const AAnimal *j = new Dog();
		const AAnimal *i = new Cat();

		delete j;
		delete i;
	}
	std::cout << std::endl;
	{
		std::cout << "Deep copy tests:" << std::endl;
		Cat mojo;

		Cat mojo_copy(mojo);

		std::cout << "mojo's brain address: " << static_cast<void*>(mojo.getBrain()) << std::endl;
		std::cout << "mojo_copy's brain address: " << static_cast<void*>(mojo_copy.getBrain()) << std::endl;
	}
	std::cout << std::endl;
	{
		std::cout << "AAnimal array tests:" << std::endl;
		std::cout << "--- Construction ---" << std::endl;
		AAnimal const *(array[6]);

		for (int i = 0; i < 3; i++)
			array[i] = new Dog();
		for ( int i = 3; i < 6; i++)
			array[i] = new Cat();
		std::cout << "--- Destruction ---" << std::endl;
		for (int i = 0; i < 6; i++)
			delete array[i];
		std::cout << std::endl;
	}
	{
		//can't instantiate AAnimal object because it's abstract class
		// const AAnimal *t = new AAnimal();
	}

	return (0);
}
