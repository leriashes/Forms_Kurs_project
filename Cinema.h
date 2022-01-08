#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "Film.h"
#include <thread>
using namespace std;

class Cinema
{
public:
	int films_number;	//���������� ������� � �������
	int broni_number = 0;	//���������� ��������������� �������
	int broni_zapis = 0;	//���������� ��������������� ������� ��� ������ � ����
	string name;	//�������� ����������
	string address;	//����� ����������
	string cashiers[6];	//������� ����������		// ������� ����� �������� � ����������� � ���?
	string id_cinema;
	string bron[100][8];
	string temp_inf[10];
	int inf_temp;

	string inn;		//������ ��� ����
	string rnm;		//������ ��� ����
	string otchet_vsego;	//����� ������� �� ���� ������
	string otchet_today;	//����� ������� �� ����������� ����
	string start_day;		//���� ������ ������� ������� ��� ������
	int kolvo_biletov[2];	//���������� ��������� �������
	string promo[10][2];	//���������
	int promo_number = 0;
	int cashiers_number = 0;

	Film films[10];
	
public:
	

	int SearchBron(string code);	//����� ����� �� ������
	void List_bron();	//����� ���� ������������
	void ChangeName();	//������� �������� ����������
	void ChangeAdress();	//������� ������ ����������
	void ChangeINN();		//��������� ��� ����������
	void ChangeRNM();		//��������� ��� ����������

	void ChangeCashier();	//��������� ��������
	void ListCashier(int k);	//����� ��������

	/// 
	/// ��������� � ����� USER
	/// 
	void ListPromo(int k);	//����� ������ ����������
	void DelPromo();		//�������� ���������
	void RedPromo();		//�������������� ���������� � ���������
	void NewPromo();		//���������� ������ ���������
	string NewPromoName(string message);
	string NewPromoValue(string message);

	void DelFilm(int num_film);
	void ChangeFilm(int num_punkt, int num_film);
	int CheckTime(int time, int num_seans, int duration);
	void TimeAuto(int duration);
	string Convert_Time(int time);
	int DeConvert_Time(string time);

	void NewID();		//��������� ������ ID cinema
	void InputName();	//���� �������� ����������
	void InputCashier();	//���� ��� �������
	void InputINN();		//���� ���
	void InputAdress();		//���� ������
	void InputRNM();		//���� ���
	void NewHallCinema(int number_film);	//��������� ������������� ���� ��� ������ ������	
	void PriceInput(int num_film, int num);

	string NewHall();	//��������� ���� (�������)

	void NameOut();	//����� �������� ����������
};

