#include<iostream>
using namespace std;
#include<string>
// д������������, ������Ե��������
class CPU {
public:
	virtual  void control() = 0;
};
class GPU {
public:
	virtual void display_and_speed() = 0;
};
class Memory_disk {
public:
	virtual void save_data() = 0;
};

// д����ͬ���̵ľ�������ʵ�ַ�ʽ
class IntelCPU:public CPU
{
public:
	IntelCPU(string cpuv) {
		this->CPU_VERSION = cpuv;
	  }
	void control() {
		cout << "Intel CPU"<<CPU_VERSION<<"  Powered" << endl;
	}
private:
	string CPU_VERSION;

};
class NVIDIA :public GPU
{
public:
	NVIDIA(string gpu_V) {

		this->GPU_VER = gpu_V;
	}
	void display_and_speed() {

		cout << "Graphics by NVIDIA " << GPU_VER << endl;
	}
	
private:
	string GPU_VER;


};
class Kinston :public Memory_disk {
public:
	Kinston(string ver) {
		this->MD_VERSION = ver;
	}
	void save_data() {
		cout << "Memory disk provided by Kinston :" << MD_VERSION << endl;
	}

private:
	string MD_VERSION;

};

// д����������������������
class PersonalComputer
{
public:
	PersonalComputer(CPU *cpu_ver, GPU * gpu_ver, Memory_disk *md_ver)
	{
		this->cpu = cpu_ver;
		this->gpu = gpu_ver;
		this->md = md_ver;
	};
	void showinfo() {
		cout << "this is your computer information:" << endl;
	  cpu->control();
	  gpu->display_and_speed();
	  md->save_data();

	}
private:
	CPU * cpu;
	GPU *gpu;
	Memory_disk *md;

};

// ���е�����װ��ʹ��intel��CPU,NVIDIA��GPU���Լ�KINSTON��Ӳ��
void Build_a_Computer()
{
	IntelCPU cpu_selected("i7: 9th generation");
	NVIDIA gpu_selected("NVIDIA RTX 3070");
	Kinston memory_disk_selected("KINSTON @2TB");
	PersonalComputer pc(&cpu_selected, &gpu_selected, &memory_disk_selected);
	pc.showinfo();


}

int main(int agrc, char**argv)
{
	Build_a_Computer();
	system("pause");
	return 0;


}