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
	////测试代码

	//Woker * worker1 = new Employee(1, "刘子桦", 1);
	//worker1->show_info();
	//Woker * worker2 = new Manager(2, "奥富教授", 2);
	//worker2->show_info();
	//Woker * worker3 = new Boss(3, "首相", 3);
	//worker3->show_info();

	//实例化一个管理者
	WorkerManager wm;
	// 用户输入 的选择
	int choice = 0;
	while (true) {
		//首先显示此菜单
		wm.show_menu();
		// 用户输入选择
		cout << "请您输入要进行的操作：" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0:   //退出该系统
			wm.exitsystm();
			break;
		case 1:   //增加员工的信息
			wm.add_employee();
			break;
		case 2:    //显示员工的信息
			wm.show_employee_info();
			system("pause");
			system("cls");
			break;
		case 3:   //删除离职的员工 
		{wm.Delete();
		system("pause");
		system("cls");
		break;
		}
		case 4:  //修改员工的信息
		{  
			wm.Modify_employee();
		   system("pause");
		   system("cls");
			break;
		}
			
		case 5:  // 查找员工的信息

		{
			wm.search_employee();
			system("pause");
			system("cls");
			break;
		}
		case 6:  //按照标号进行排序
		{
			cout << "请输入你喜欢的排序方式：" << endl;
			cout << "1代表升序，2代表降序" << endl;
			int see;
			cin >> see;
			if (see = 1) {
				wm.sortedByWorkid(false);
			}
			else if (see = 2) {
				wm.sortedByWorkid(true);
			}
			else {
				cout << "请重新输入" << endl;
			}
			system("pause");
			system("cls");
			break;
		}
		
		case 7:  //清空所有信息
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