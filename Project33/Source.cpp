#include <iostream>
using namespace std;
class Distsnce
{
private:
	int feet;
	float inches;
public:
	Distsnce() :feet(0), inches(0.0)
	{}
	Distsnce(int ft, float in) : feet(ft), inches(in)
	{}
	void getdist()
	{
		cout << "Please! Enter number pounds: "; cin >> feet;
		cout << "Please! Enter number inches: "; cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\'-" << inches << '\"';
	}
};
int main()
{
	Distsnce dist1(11, 6.25);
	Distsnce dist2(dist1);
	Distsnce dist3 = dist1;
	cout << "dist1= "; dist1.showdist();
	cout << "dist2= "; dist2.showdist();
	cout << "dist3= "; dist3.showdist();
	cout << endl;
	system("pause");
	return 0;
}