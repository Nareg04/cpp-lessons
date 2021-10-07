#include "iostream"
using namespace std;

struct About
{
	int width;
	int lengh;
};

class floor_plan
{
public:
	About masin;
	floor_plan()
	{
		this->masin.width = 30;
		this->masin.lengh = 8;
	}
	void squires(floor_plan *b)
	{
		cout << b->masin.width * b->masin.lengh << "\n";
	}

};

class House : public floor_plan
{
public:
	double height;
	House()
	{
		this->height = 18;
	}

	void valume(House *own)
	{
		cout << own->masin.width * own->masin.lengh * this->height << "\n";
	}

	~House()
	{
		cout << "The end";
	}
};

int main()
{
	floor_plan hatakagic;
	House parametrs;

	cout << "Squires: ";
	hatakagic.squires(&hatakagic);

	cout << "Valume: ";
	parametrs.valume(&parametrs);

	return 0;
}
