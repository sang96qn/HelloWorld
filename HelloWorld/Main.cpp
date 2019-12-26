#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int x = 50;
	int w = 10;
	cout << setw(10) << "VietNam" << setw(10) << "America" << setw(w) << "Germany"<<endl;
	cout << "============================================="<<endl;
	for (int i = 3; i <= x; i += 9)
	{
		cout << setw(w) << i <<setw(w)<< pow(i, 2) << setw(w) << pow(i, 3)<<endl;
	}
	cin.get();
	return 0;
}