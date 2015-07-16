#include <iostream>
using namespace std;

#include <cstdlib> // system()

int main()
{

	system("netsh interface ip delete arpcache");
	system("ipconfig /flushdns");

	cout << "DNS & Arp-table cache cleared." << endl;
	

	system("pause");

	return 0;
}
