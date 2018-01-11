#include"Manage4.h"
#include<string>
#include<fstream> 
#include<iostream>
using namespace std;

void Manage::delSide(int a, int b)
{
	int m = Num(a);
	int n = Num(b);
	arc[m][n] = 9;
	arc[n][m] = 9;


	ofstream OpenFile("1.txt");
	int i = 0;
	for (i; i<numNodes; i++)
	{
		OpenFile << vexs[i] << "	";
		for (int j = 0; j<numNodes; j++)
		{
			OpenFile << arc[i][j] << "		";
		}
		OpenFile << endl;
	}


	OpenFile.close();
	readtxt();
}
