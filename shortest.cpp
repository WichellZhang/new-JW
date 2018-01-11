#include"Manage2.h"
#include<string>
#include<fstream> 
#include<iostream>
using namespace std;

void Manage::shortest(int a)
{
	int v = Num(a);
	int n = numNodes;
	int max = 9;
	int *dist = new int[n];
	int *path = new int[n];
	bool *s = new bool[n];
	int i, j, k, u, m, l, min;
	for (i = 0; i < n; i++)
	{
		dist[i] = arc[v][i];
		s[i] = false;
		if (i != v && dist[i] < max)
			path[i] = v;
		else path[i] = -1;
	}
	s[v] = true;
	dist[v] = 0;
	for (i = 0; i < n - 1; i++)
	{
		min = max;
		u = v;
		for (j = 0; j < n; j++)
		{
			if (s[j] == false && dist[j] < min)
			{
				min = dist[j];
				u = j;
			}
		}
		s[u] = true;
		for (k = 0; k < n; k++)
		{
			m = arc[u][k];
			if (s[k] == false && m < max && dist[u] + m < dist[k])
			{
				dist[k] = dist[u] + m;
				path[k] = u;
			}
		}
	}
	cout << "·����" << a << "��·�ɱ�Ϊ��" << endl;
	for (i = 0; i < n; i++)
	{
		if (i != v)
		{
			j = i;
			while (j != v)
			{
				l = j;
				j = path[j];
			}

			cout << "��·����" << vexs[i] << "�����·��Ϊ" << dist[i] << "   " << "��һ��Ϊ·����" << vexs[l] << endl;
		}
	}
	cout << "lhyyyy" << endl;
}
