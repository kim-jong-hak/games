#include <iostream>
#include <string>
using namespace std;
int gmae(int soled);
int battle(int input,int computer);

double winning_rate = 0;
int main() 
{
	//�������� � ������ �Է��ϸ� 
	//n*n���� ���� ������� ���ھ��
	//������
	
	int computer = 1 + (rand() % 3);
	int input = 0;
	double tt = 0;
	srand(time(0));
	for (int run=0 ;;run++)
	{

		cout << "\n\n\n����(1) ����(2) ��(3) ����ּ���!--"<< "\n";
		
		
		cout << "\n �·� :";
		if (run <= 0)
		{
			cout << "����"<<"\n";
		}
		else 
		{
			cout << (winning_rate / run) * 100 << "\n"; //�·�����ϱ� 
		}
		
		cin >> input;
		 computer = 1 + (rand() % 3);
		 gmae(input);
		 cout << "(��) vs " ;
		 gmae(computer);
		 cout << "(��ǻ��)";
		 battle(input, computer);

		
		 
		
	}
	

	return 0;
}
int gmae(int soled)
{
	switch (soled)
	{
	case 1 :
			cout << "����";
			break;
	case 2 :
		cout << "����";
		break;
	case 3 :
		cout << "��";
		break;
	}
	return 0;
}
int battle(int input, int computer)
{
	if (input == 1 && computer == 3)
	{
		++winning_rate;
		cout << "�̰���ϴ�.\n";

	}
	else if (input == 2 && computer == 1)
	{
		++winning_rate;
		cout << "�̰���ϴ�.\n";
	}
	else if (input == 3 && computer == 2)
	{
		++winning_rate;
		cout << "�̰���ϴ�.\n";
	}
	else if (input == computer)
	{
		cout << "�����ϴ�.\n";
	}
	else
	{
		cout << "�й��߽��ϴ�.\n";
	}



	return 0;
}



