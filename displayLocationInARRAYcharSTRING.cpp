#include <iostream>
using namespace std;
void displayLocation(string word);
int main()
{
	system("cls");
	char word[100];
	cout << "Enter the word: ";
	cin.getline(word, 100);

	displayLocation(word);
	return 0;
}
void displayLocation(string word)
{
	for (int i = 0; word[i] != '\0'; i++)
	{
		cout << word[i] << " is found at position " << i << endl;
	}
}