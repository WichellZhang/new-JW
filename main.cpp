#include"Manage2.h"


using namespace std;

int main()
{
	Manage G;
	int i, j, k;
	G.readtxt();
	G.print();
	while (1)
	{

		cout << "******************************" << endl;
		cout << "**********1.ɾ����************" << endl;
		cout << "********2.ɾ��·����**********" << endl;
		cout << "********3.����·�ɱ�**********" << endl;
		cout << "************4.�˳�************" << endl;
		cout << "******************************" << endl;
		cin >> i;
		switch (i)
		{
		case 1:
		{
			cout << "��������Ҫɾ���ıߵ���·������" << endl;
			cin >> j >> k;
			G.delSide(j, k);
			break;
		}
		case 2:
		{
			cout << "��������Ҫɾ����·������" << endl;
			cin >> j;
			G.delNode(j);
			break;
		}
		case 3:
		{
			cout << "��������Ҫ���ɵ�·�ɱ��·������" << endl;
			cin >> j;
			G.shortest(j);
			break;
		}
		case 4:
		{
			exit(1);
			break;
		}

		}

	}
	return 0;
}
