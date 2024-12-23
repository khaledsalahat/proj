#include<iostream>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
#pragma warning (disaple :4996)
using namespace std;

void main()
{

	string choice;
	char str[100];
	cout << "Please enter a paraghraph: " << endl;
	cin.getline(str, 100, '\n');
	cout << "Please select a choice:" << endl;
	cout << "c- To change the paragraph into uppercase " << endl;
	cout << "w- To change every first letter in each word to uppercase" << endl;
	cout << "s- To change each letter of every sentence to uppercase" << endl;
	cout << "d- To change every (is) with (was) in the paragraph" << endl;
	cin >> choice;
	
		if (choice == "c") {

			for (int i = 0; i <= strlen(str); i++) {
				str[i] = toupper(str[i]);

			}
			cout << str;
		}
		if (choice == "w") {

			for (int i = 0; i < strlen(str); i++) {
				if (i == 0) {
					str[i] = toupper(str[i]);
				}
				if (str[i - 1] == ' ') {
					str[i] = toupper(str[i]);
				}
			}
			cout << str << endl;
		}
		if (choice == "s") {
			for (int i = 0; i < strlen(str); i++) {
				if (i == 0) {
					str[i] = toupper(str[i]);
				}
				if (str[i - 1] == '.') {
					str[i] = toupper(str[i]);
				}
			}
			cout << str << endl;
		}
		if (choice == "d") {
			for (int i = 0; i < strlen(str); i++) {
				if (str[i] == ' ' && str[i + 1] == 'i' && str[i + 2] == 's' && str[i + 3] == ' ') {
					cout << " was ";
					i += 3;
				}
				else {
					cout << str[i];
				}

			}

		}
		
}







			
