#include<iostream>
#include<string>
#include "workerManager.h"
#include "Worker.h"
#include"Employee.h"
#include "Manager.h"
#include "Boss.h"


using namespace std;

int main(int argc, char**argv)
{
	////���Դ���

	//Woker * worker1 = new Employee(1, "������", 1);
	//worker1->show_info();
	//Woker * worker2 = new Manager(2, "�¸�����", 2);
	//worker2->show_info();
	//Woker * worker3 = new Boss(3, "����", 3);
	//worker3->show_info();

	//ʵ����һ��������
	WorkerManager wm;
	// �û����� ��ѡ��
	int choice = 0;
	while (true) {
		//������ʾ�˲˵�
		wm.show_menu();
		// �û�����ѡ��
		cout << "��������Ҫ���еĲ�����" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0:   //�˳���ϵͳ
			wm.exitsystm();
			break;
		case 1:   //����Ա������Ϣ
			wm.add_employee();
			break;
		case 2:    //��ʾԱ������Ϣ
			wm.show_employee_info();
			system("pause");
			system("cls");
			break;
		case 3:   //ɾ����ְ��Ա�� 
		{wm.Delete();
		system("pause");
		system("cls");
		break;
		}
		case 4:  //�޸�Ա������Ϣ
		{  
			wm.Modify_employee();
		   system("pause");
		   system("cls");
			break;
		}
			
		case 5:  // ����Ա������Ϣ

		{
			wm.search_employee();
			system("pause");
			system("cls");
			break;
		}
		case 6:  //���ձ�Ž�������
		{
			cout << "��������ϲ��������ʽ��" << endl;
			cout << "1��������2������" << endl;
			int see;
			cin >> see;
			if (see = 1) {
				wm.sortedByWorkid(false);
			}
			else if (see = 2) {
				wm.sortedByWorkid(true);
			}
			else {
				cout << "����������" << endl;
			}
			system("pause");
			system("cls");
			break;
		}
		
		case 7:  //���������Ϣ
			wm.clear();
			system("pause");
			system("cls");
			break;
		default: 
			system("cls");
			break;
		}


	}

	system("pause");
	return 0;
}