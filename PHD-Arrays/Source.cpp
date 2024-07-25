#include <string>
#include <iostream>
#include <vector>
#include <cstring>


using namespace std;


class Person
{
private :

		//std::string name;
		char* name;
		int age;
		float salary;
		//std::string hobbies;
		char* hobbies;
		int accountNumber;


public :


		Person(const char* nm, int ag, float slr,const char* hby, int acn)
		{
			//cout << endl << "--------New person has been created ----------" << endl;

			name = new char[strlen(nm) + 1];
			strcpy_s(name, strlen(nm) + 1, nm);


			//name = nm;

			age = ag;

			salary = slr;

			hobbies = new char[strlen(hby) + 1];
			strcpy_s(hobbies, strlen(hby) + 1, hby);
			//hobbies = hby;

			accountNumber = acn;
		};

		

		void PrintUserData()
		{
			cout << endl <<"----User details----" << endl <<endl;

			cout << " Name : " << name << endl;
			cout << " Age : " << age << endl;
			cout << "Salary : " << salary << endl;
			cout << "hobbies :" << hobbies << endl;
			cout << "A/C No  :" << accountNumber << endl;

			cout  <<endl << "--------xxxx----------" << endl;
		}


		void updateUserData()
		{
			char* newName = new char[strlen(name) + strlen(" Rawtani") + 1];
			strcpy_s(newName,strlen( name)+ strlen(" Rawtani")+1, name);
			strcat_s(newName, strlen(name) + strlen(" Rawtani") + 1, " Rawtani");
			delete[] name;
			name = newName;

			
			char* newHobbies = new char[strlen(hobbies) + strlen(" Video Games") + 1];
			strcpy_s(newHobbies, strlen(hobbies) + strlen(" Video Games") + 1, hobbies);
			strcat_s(newHobbies, strlen(hobbies) + strlen(" Video Games") + 1, " Video Games");
			delete[] hobbies;
			hobbies = newHobbies;

			age += 2;
			salary += 45000.0;
			accountNumber *= 100;
		}

		


};


int main()
{
	vector<Person> personVector;

	personVector.push_back(Person("Ayaan", 24, 0.0, "Basketball", 123455));
	personVector.push_back(Person("Rohan", 26, 15000.0, "cricket", 553488));

	for (auto &people : personVector)
	{
		people.PrintUserData();
		people.updateUserData();
		people.PrintUserData();
		//people.printCharArrays();
	}


	return 0;
}