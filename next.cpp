#include"Manage2.h"
#include<string>
#include<fstream> 
#include<iostream>
using namespace std;

void Manage::print() {
	cout << "路由器号" << endl;
	cout << "计算机网络上机实习" << endl;
	for (int a = 0; a<numNodes; a++)
	{
		cout << vexs[a] << "	";
		for (int b = 0; b<numNodes; b++)
		{
			cout << arc[a][b] << "	";
		}
		cout << endl;
	}
}