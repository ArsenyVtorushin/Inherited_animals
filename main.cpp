#include <iostream>
#include <string>

class Animal
{
public:

	void PrintInform()
	{
		std::cout << type << " " << name << ", " << age << " лет " << voice << "\n";
	}

	void setAll(std::string Type, std::string Name, int Age, std::string Voice)
	{
		type = Type;
		name = Name;
		age = Age;
		voice = Voice;
	}

	std::string getType()
	{
		return type;
	}
	std::string getName()
	{
		return name;
	}
	int getAge()
	{
		return age;
	}
	std::string getVoice()
	{
		return voice;
	}

private:
	int age;
	std::string name;
	std::string type;
	std::string voice;

};



class Cat : public Animal
{
public:
	Cat(std::string Type, std::string Name, int Age, std::string Voice)
	{
		setAll(Type, Name, Age, Voice);
	}

	void SheetInSlippers()
	{
		std::cout << "hooray";
	}
	
	void ChaseMouse()
	{
		std::cout << "chase the mouse";
	}

private:
	
};


class Dog : public Animal
{
public:
	Dog(std::string Type, std::string Name, int Age, std::string Voice)
	{
		setAll(Type, Name, Age, Voice);
	}

	void Fetch()
	{
		std::cout << "One more time, master";
	}

	void GoForAWalk()
	{
		std::cout << "Lets go out, master";
	}

private:

};




int main()
{

	return 0;
}