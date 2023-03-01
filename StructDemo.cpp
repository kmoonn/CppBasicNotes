#include <iostream>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
};

int main(){
	struct Student s;
	s.name = "Hushan";
	s.age = 21;
	s.score = 98;
	cout << "ÐÕÃû£º" << s.name << endl;
}