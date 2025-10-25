#include <iostream>
using namespace std;

int main()
{
	int colin, rowin;
	cout<<"Enter the number of columns you would like: ";
	cin >> colin;
	cout<<"Enter the number of rows you would like: ";
	cin >> rowin;
	char letter=65;
	cout<<endl;
	for (int colsize=0; colsize<colin; colsize++)
	{
		cout<<letter;
	}
	cout<<endl;
	for (int rowsize=2; rowsize<rowin; rowsize++)
	{
		cout<<++letter;
		for (int colsize=2; colsize<colin; colsize++)
		{
			cout<<" ";
		}
		cout<<letter<<endl;
	}
letter++;
for (int colsize=0; colsize<colin; colsize++)
	{
		cout<<letter;
	}	
}
