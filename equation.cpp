#include<iostream>
using namespace std;

class equation {
private:
	int a;
	int b;
	int c;
public:
	equation(int x, int y, int z)
	{
		a = x;
		b = y;
		c = z;


	}
	bool operator==(equation e)
	{

		if (a == e.a &&
			b == e.b &&
			c == e.c)
		{

			return 1;
		}
		return 0;

	}
	int d = 0;
	void solve()
	{
		d = b * b - 4 * a * c;
		cout << "discriminant:" << d << endl;
		cout << endl;
		if (d > 0)
		{
			cout << "two real and distinct roots" << endl;
		}
		else if (d < 0)
		{
			cout << "no real roots" << endl;

		}
		else
		{
			cout << "two equal and real roots" << endl;
		}
	}

};
int main()
{
	equation e1(1, -5, 6);
	equation e2(1, -5, 6);
	equation e3(1, 2, 5);


	cout << "quadratic equation solver." << endl;

	cout << "1.equation comparison" << endl;

	cout << "equation 1 and equation 2: ";
	if (e1 == e2)
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
	cout << endl;
	cout << "equation 1 and equation 3: ";
	if (e1 == e3)
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
	cout << endl;
	cout << "2.solving equation" << endl;


	cout << "equation 1: x^2 - 5x + 6 = 0" << endl;
	e1.solve();

	cout << "equation 2: x^2 - 5x + 6 = 0" << endl;
	e2.solve();

	cout << "equation 3: x^2 + 2x + 5 = 0" << endl;
	e3.solve();


	cout << "program completed." << endl;

	return 0;
}
