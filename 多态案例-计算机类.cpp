//利用多态技术，设计实现两个操作数进行运算的计算机类

#include <iostream>
using namespace std;

class AbstractCalculator {
public:
	virtual int getResult() {
		return 0;
	}

	int m_Num1=0;
	int m_Num2=0;
};

class AddCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 + m_Num2;
	}
};

class SubCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 - m_Num2;
	}
};

class MulCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 * m_Num2;
	}
};

void test() {
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;

	cout << "Result is " << abc->getResult() << endl;
}

int main() {
	test();

	system("pause");
}