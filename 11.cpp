#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <cstdio>
#include <errno.h>
#include <string>
#include <sstream>
using namespace std;

void main()
{	

							/* {TASK 1} */
	
	/*
	while (true)
	{

		int number;

		cout << "Choose action : " << "\n" <<
			"1 - take a decimal number belonging to the type and cast to the same large number, only formatted as an unsigned hexadecimal integer (uppercase letters). Scanf and printf functions used." << "\n" <<
            "2 - read a string, output a string. Nothing special..." << "\n" <<
			"3 - file handling." << endl;

		cin >> number;

		cin.ignore();

		switch (number)
	 	{
	 	case 1:
	 	{
	 		printf("Enter a number : ");
	 		int a;
	 		scanf_s("%d", &a);
	 		printf("%X", a);
	 		break;
	 	}
	 	case 2:
	 	{
	 		printf("Enter a string : ");
	 		char stroka[500];
	 		gets_s(stroka);
	 		puts(stroka);
	 		break;
	 	}
	 	case 3:
	 	{
	 		printf("Enter an action : \n1 - read, write. \n2 - fopen,fclose,fprintf,fscanf,feof. \n");
	 		int numb;
	 		cin >> numb;

	 		switch (numb)
	 		{

	 		case 1:
	 		{


	 			const char* file_name = "test1fasflkalfl.txt";
	 			const char* file_name2 = "gdsjgksjgjsd";
	 			ofstream file_in;
	 			file_in.open(file_name);
	 			cout << "Enter what you want to write to the file : ";
	 			char str[1000];
	 			cin >> str;
	 			file_in.write(str, sizeof(str));
	 			 file_in << str;
	 			file_in.close();

	 			cout << "Let's find out from the file what you entered : ";
	 			ifstream file_out(file_name2);
	 			char text[1000];
	 			if (file_out.is_open())
	 			{
	 				 file_out.getline(text, 1000);
	 				file_out.read(text, sizeof(text));
	 				cout << text << endl;
	 			}
	 			else
	 			{
	 				cout << "File is not found!" << endl;
	 			}

	 			file_out.close();

	 			break;
	 		}

	 		case 2:
	 		{


	 			const char* file_name = "test.txt";
	 			FILE* file_in;
	 			cout << "Enter the string you would like to write to the file : ";
	 			char str[1000];
	 			cin >> str;
	 			file_in = fopen(file_name, "w+");
	 			fprintf(file_in, "%s", str);
	 			fclose(file_in);

	 			cout << "Let's find out from the file what you entered : ";
	 			FILE* file_out;
	 			char text[1000];
	 			file_out = fopen(file_name, "r");
	 			fscanf(file_out, "%s", text);
	 			cout << text << endl;
	 			fclose(file_out);

	 			 printf("\n");
	 			printf("\nNow we count the numbers from the testik.txt file into an array using the feof function : \n");

	 			FILE* file_testik;
	 			int M[100];
	 			int d;
	 			file_testik = fopen("testik.txt", "r");
	 			int i = 0;
	 			while (!feof(file_testik))
	 			{
	 				fscanf(file_testik, "%d", &d);
	 				M[i] = d;
	 				i++;
	 			}

	 			for (int j = 0;j < i;j++)
	 			{
	 				cout << M[j] << endl;
	 			}

	 			break;
	 		}

	 		default:
	 			printf("Action not recognized!");
	 		}
	 		break;
	 	}

	 	default:
	 		printf("Action not recognized!");
	 	}
	 
	 	cout << "\n" << endl;

	 }
    */
	
	




							/* {TASK 2} */


	ifstream myfile;
	myfile.open("test-1.txt");
	int i = 0;
	string* M = new string[50];
	string* H = new string[50];
	int j = 0;
	if (myfile.is_open())
	{
		while (!myfile.eof())
		{
			string line;
			getline(myfile, line);
			H[j] = line;
			j++;
		}
	}
	else
	{
		printf(" Error! File is not found! ");
	}

	myfile.close();

	for (int p = 0; p < j; p++)
	{
		istringstream separate(H[p]);
		for (string word; separate >> word; )
		{
			M[i] = word;
			i++;
		}
	}

	string MaxLong = "";
	string slv;
	string* MassSlov = new string[50];
	int a = 0;
	int MaxCount = 0;
	string Important ;

	for (int l = 0; l < i; l++)
	{
		int count = 0; 
		for (int h = 0; h < i; h++)
		{
			string slovo = M[h];
			if ((slovo.find(M[l]) != slovo.npos) && (slovo != M[l]) && (slovo.rfind(M[l],0)==0))
			{
				slv = M[l];
				 break;

				count++;
			}
		}
		
		if ((size(slv) >= size(MaxLong)) && (size(slv)>0))  count>0
		{
			MaxLong = slv;
		}

		if ((size(slv) > 0) && (count >= MaxCount))
		{
			Important = slv;
			MaxCount = count;
		}

	}

	for (int l = 0; l < i; l++)
	{
		if ((M[l].find(MaxLong) != M[l].npos) && (M[l]!=MaxLong) && (size(MaxLong)>0))
		{
			MassSlov[a] = M[l];
			a++;
		}
	}

	ofstream file_long;
	ofstream file_imp;
	file_long.open("Answer-Long.txt");
	file_imp.open("Answer-Important.txt");


	if (size(MaxLong) > 0)
	{
		file_long << MaxLong << " ";
		for (int y = 0; y < a; y++)
		{
			file_long << MassSlov[y] << " " ;
		}
	}
	else
	{
		file_long << "NO" ;
	}

	if (MaxCount > 0)
	{
		file_imp << Important << " " << MaxCount ;
	}
	else
	{
		file_imp << "NO" ;
	}

	cout << "Answers are written to files. Open them!" << endl;
}
