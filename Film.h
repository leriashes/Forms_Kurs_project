#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Film
{
public:
	string name;		//�������� ������
	string age;			//���������� �����������
	string duration;	//����������������� ������
	string rejisser;	//���������
	string short_description;	//������� �������� ������
	string main_role;	//������� ����
	string number_zal;	//����� ���� ��� ������
	string date[3];		//���� ������
	string path;

	string price[9];	//��������� ������
	string time[9];		//����� ������
	string mesta[9];	//����� � ����
};