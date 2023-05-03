#pragma once
#include<iostream>
using namespace std;

#include "workerManager.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include "worker.h"
#include"Worker.h"

WorkerManager::WorkerManager()
{


	//�ļ������ڵ����
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl; //�������
		//��ʼ������
		this->m_EmpNum = 0;
		//��ʼ������ָ��
		this->m_EmpArray = NULL;
		//��ʼ���ļ�Ϊ�ձ�־
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//�ļ����� ����Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//�ļ�Ϊ��
		cout << "�ļ�Ϊ��" << endl;
		//��ʼ������
		this->m_EmpNum = 0;
		//��ʼ������ָ��
		this->m_EmpArray = NULL;
		//��ʼ���ļ�Ϊ�ձ�־
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	

	//�ļ����� ���Ҽ�¼����
	int num = this->get_EmpNum();
	cout << "ְ��������Ϊ:" << num << endl;
	this->m_EmpNum = num;
	//���ٿռ�
	this->m_EmpArray = new Worker* [this->m_EmpNum];
	//���ļ��е����ݴ浽������
	this->init_Emp();
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		cout << "ְ�����:" << this->m_EmpArray[i]->m_Id
			<< "����:" << this->m_EmpArray[i]->m_Name
			<< "���ű��:" << this->m_EmpArray[i]->m_DeptId << endl;
	}
}

void WorkerManager::Show_Menu() //��ʾ�˵�
{
	cout << "********************************************" << endl;
	cout << "*********  ��ӭʹ��ְ������ϵͳ�� **********" << endl;
	cout << "*************  0.�˳��������  *************" << endl;
	cout << "*************  1.����ְ����Ϣ  *************" << endl;
	cout << "*************  2.��ʾְ����Ϣ  *************" << endl;
	cout << "*************  3.ɾ����ְְ��  *************" << endl;
	cout << "*************  4.�޸�ְ����Ϣ  *************" << endl;
	cout << "*************  5.����ְ����Ϣ  *************" << endl;
	cout << "*************  6.���ձ������  *************" << endl;
	cout << "*************  7.��������ĵ�  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

void WorkerManager::exitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

void WorkerManager::Add_Emp()
{
	cout << "����������ְ�������� " << endl;

	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		//�����¿ռ��С
		int newSize = this->m_EmpNum + addNum;

		//�����¿ռ�
		Worker** newSpace = new Worker * [newSize];

		//��ԭ�ռ������ݴ�ŵ��¿ռ���
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//�����µ�����
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect;

			cout << "������� " << i + 1 << " ����ְ����ţ�" << endl;
			cin >> id;

			cout << "������� " << i + 1 << " ����ְ��������" << endl;
			cin >> name;

			cout << "��ѡ���ְ���ĸ�λ��" << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 1);
				break;
			case 3:
				worker = new Boss(id, name, 1);
				break;
			default:
				break;
			}

			newSpace[this->m_EmpNum + i] = worker;
		}

		//�ͷ�ԭ�пռ�
		delete[] this->m_EmpArray;

		//�����¿ռ��ָ��
		this->m_EmpArray = newSpace;

		//�����µ�ְ������
		this->m_EmpNum = newSize;

		//����ְ����Ϊ�ձ�־
		this->m_FileIsEmpty = false;

		//��ʾ��Ϣ
		cout << "�ɹ����" << addNum << "����ְ����" << endl;

		//���浽�ļ���
		this->save();

	}
	else
	{
		cout << "��������" << endl;
	}

	system("pause");
	system("cls");
}

void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " " << this->m_EmpArray[i]->m_Name << " " << this->m_EmpArray[i]->m_DeptId << endl;
	}

	ofs.close();
};

//ͳ���ļ��е�����
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//���ļ�,���ļ��ķ�ʽ����
	int id;
	string name;
	int dId;
	int num = 0;
	while(ifs>>id&&ifs>>name&&ifs>>dId)
	{
		num++;//ͳ����������
		
	}
	return num;
};


//��ʼ��Ա��
void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int dId;
	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker* worker = NULL;
		if (dId == 1)
		{
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2)
		{
			worker = new Manager(id, name, dId);

		}
		else
		{
			worker = new Boss(id, name, dId);
		}
		this->m_EmpArray[index] = worker;
		index++;
	};
};

//������ְ��
void WorkerManager::Show_Emp()
{
	//�ж��ļ��Ƿ�Ϊ��
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ��" << endl;

	}
	else
	{
		for (int i = 0; i < m_EmpNum; i++)
		{
			//���ö�̬���ó���ӿ�
			this->m_EmpArray[i]->showInfo();
		}
	}
	//�������������
	system("pause");
	system("cls");
};


//ɾ��Ա��
void WorkerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��!" << endl;
	}
	else
	{
		//����ְ�����ɾ��
		cout << "��������Ҫɾ����ְ�����:" << endl;
		int id = 0;
		cin >> id;
		int index = this->IsExist(id);
		if (index != -1)//˵��ְ�����ڲ���Ҫɾ����indexλ���ϵ�ְ��
		{
			//����ǰ��
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;//���������м�¼��Ա����
			//ͬ�����µ��ļ���
			this->save();
			cout << "ɾ���ɹ�!" << endl;
		}
		else
		{
			cout << "ɾ��ʧ��,δ�ҵ���ְ��!" << endl;
		};
	};
	system("pause");
	system("cls");
};

//����ְ������ж�ְ���Ƿ����,�����ڷ���ְ����������λ�ã������ڷ���-1
int WorkerManager::IsExist(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			index = i;
			break;
		}
	}
	return index;
};


//�޸�ְ��
void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��!" << endl;

	}
	else
	{
		cout << "�������޸�ְ���ı��:" << endl;
		int id;
		cin >> id;
		int ret=this->IsExist(id);
		if (ret != -1)
		{
			//���ҵ������ŵ�ְ��
			delete this->m_EmpArray[ret];
			int newId = 0;
			string newName = "";
			int dSelect = 0;
			cout << "���ҵ����:" << id << "�ŵ�ְ��,��������ְ����" << endl;
			cin >> newId;
			cout << "�������µ�����:" << endl;
			cin >> newName;
			cout << "�������µĸ�λ:1��ְͨ��2����3�ϰ�" << endl;
			cin >> dSelect;
			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(newId, newName, dSelect);
			case 2:
				worker = new Manager(newId, newName, dSelect);
			case 3:
				worker = new Boss(newId, newName, dSelect);
			default:
				break;

			}
			this->m_EmpArray[ret] = worker;
			cout << "�޸ĳɹ�!" << endl;
			//���浽λ����
			this->save();
		}
		else
		{
			cout << "�޸�ʧ��,δ���ҵ���ְ��" << endl;
		}
	}
	system("pause");
	system("cls");
};
void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "ְ�������ڻ��¼Ϊ��!" << endl;
	}
	else
	{
		cout << "���������Ա���ı��" << endl;
		int id = 0;
		cin >> id;
		int ret = this->IsExist(id);
		if (ret != -1)
		{
			cout << "�Ѳ��ҵ���Ա��!" << endl;
			cout << "Ա�����:" << this->m_EmpArray[ret]->m_Id<<"  "
				<< "Ա������:" << this->m_EmpArray[ret]->m_Name<<"  "
				<< "Ա����λ:" << this->m_EmpArray[ret]->m_DeptId << endl;

		}
		else
		{
			cout << "δ���ҵ���Ա��!" << endl;
		}
	}
};

void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��!" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "��ѡ������ʽ:" << endl;
		cout << "1.����ְ���Ž�������" << endl;
		cout<< "2.����ְ���Ž��н���" << endl;
		int select = 0;
		cin >> select;
		for (int i = 0; i < m_EmpNum; i++)
		{
			int minOrMax = i;//������Сֵ�����ֵ�±�
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if (select == 1)//����
				{
					if (this->m_EmpArray[minOrMax]->m_Id > this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
				else//����
				{
					if (this->m_EmpArray[minOrMax]->m_Id < this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}

				}

			}//�ж�һ��ʼ�϶� ��Сֵ�����ֵ �ǲ��� �������Сֵ�����ֵ,������� ��������
			if (i != minOrMax)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
				this->m_EmpArray[minOrMax] = temp;
			}
			cout << "����ɹ�!�����Ľ��Ϊ:" << endl;
			this->save();//�����Ľ�����浽�ļ���
			this->Show_Emp();//�������е�ְ��

		}
	}
};

//����ļ�
void WorkerManager::Clean_File()
{
	cout << "ȷ�������?!!?!?!?!?" << endl;
	cout << "1.ȷ��2.����" << endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		//�������ļ�
		ofstream ofs(FILENAME, ios::trunc);//ɾ���ļ��������´���
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			//ɾ�� ������ÿһ��ְ������
			for (int i = 0; i < m_EmpNum; i++)
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}
			//ɾ����������ָ��
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
			
		}
		cout << "��ճɹ�!" << endl;
		system("pause");
		system("cls");

	}
};
WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			delete this-> m_EmpArray[i];
		}

	}
	delete[] this->m_EmpArray;
	this->m_EmpArray = NULL;
}
