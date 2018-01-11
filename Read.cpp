#include"Manage2.h"
#include<string>
#include<fstream> 
#include<iostream>
using namespace std;

void Manage::readtxt()
{

	ifstream OpenFiled("1.txt");
	int i = 0, j = 0;
	string str;
	while (!OpenFiled.eof())
	{
		getline(OpenFiled, str);
		j++;
	}
	numNodes = j-1;
	OpenFiled.close();
	ifstream OpenFile("1.txt");
	while (!OpenFile.eof())
	{
		OpenFile >> vexs[i];
		for (int j = 0; j<numNodes; j++)
			OpenFile >> arc[i][j];
		i++;
	}

	cout << "路由器号" << "添加的东西" << endl;
	for (int a = 0; a<numNodes; a++)
	{
		cout << vexs[a] << "	";
		for (int b = 0; b<numNodes; b++)
		{
			cout << arc[a][b] << "	";
		}
		cout << endl;
	}
	OpenFile.close();

}

int Manage::Num(int b)
{
	for (int i = 0; i<numNodes; i++)
	{
		if (vexs[i] == b)
			return i;
	}
}

