#include"Manage3.h"
#include<string>
#include<fstream> 
#include<iostream>
using namespace std;

void Manage::delNode(int a)
{
	int i, j;

	int m = Num(a);


	for (i = m + 1; i<numNodes; i++)
	{
		vexs[i - 1] = vexs[i];
		for (j = 0; j<numNodes; j++)
			arc[i - 1][j] = arc[i][j];
	}

	for (i = m + 1; i<numNodes; i++)
	{
		for (j = 0; j<numNodes; j++)
			arc[j][i - 1] = arc[j][i];
	}


	numNodes = numNodes - 1;

	ofstream Open("1.txt");

	for (i = 0; i<numNodes; i++)
	{
		Open << vexs[i] << "	";
		for (int j = 0; j<numNodes; j++)
		{
			Open << arc[i][j] << "		";
		}
		Open << endl;
	}


	Open.close();
	readtxt();
}