using namespace std;
#include <stdio.h>
#include <string.h>
#include <iostream>
void encryption(char[], char[]);
void decryption(char[], char[]);
void main()
{
	int ed;
	char key[] = { 'D','K','V','Q','F','I','B','J','W','P','E','S','C','X','H','T','M','Y','A','U','O','L','R','G','Z','N' };
	char b[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	cout << "enter 0 for encryption or 1 for decryption:" << endl;
	cin >> ed;
	if (ed == 0) encryption(key, b);
	if (ed == 1) decryption(key, b);
}
void encryption(char key[], char b[])
{
	char PT[200];
	char CT[200];
	puts("enter the original (plaintext) message");
	cin >> PT;
	cout << "The encrypted (ciphertext) message is:" << endl;
	for (int i = 0; i < strlen(PT); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (PT[i] == b[j])
			{
				CT[i] = key[j];
				cout << CT[i];
				break;
			}
		}
	}
	cout << "" << endl;
}

void decryption(char key[], char b[])
{
	char PT[200];
	char CT[200];
	puts("enter the decrypted (ciphertext) message");
	cin >> CT;
	cout << "The original (plaintext) message is:" << endl;
	for (int i = 0; i < strlen(CT); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (CT[i] == key[j])
			{
				PT[i] = b[j];
				cout << PT[i];
				break;
			}
		}
	}
	cout << "" << endl;
}
