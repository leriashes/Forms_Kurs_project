#include "Cinema.h"
#include "File_O.h"
#include "Time.h"
#include <iostream>
#include <string>
#include <sstream>
#include <limits>

int Cinema::SearchBron(string code)
{
	
	for (int i = 0; i < broni_number; i++)
	{
		if (code == bron[i][2])
		{
			return i;
		}
	}
	
	return -1;
}

void Cinema::List_bron()
{
	for (int o = 0; o < broni_number; o++)
	{
		cout << bron[o][1] << bron[o][2];
	}
}

void Cinema::ListCashier(int k)
{
	system("cls");
	
	for (int i = 1; i <= cashiers_number; i++)
	{
		if (k == 1)
		{
			cout << i << ") ";
		}
		cout << cashiers[i] << "\n";
	}
}

void Cinema::ListPromo(int k)
{
	for (int y = 1; y <= promo_number; y++)
	{
		if (k == 1)
		{
			cout << y << ") ";
		}
		cout <<  promo[y][0] << " (" + promo[y][1] << "%)\n\n";
	}
}

void Cinema::DelFilm(int num_film)
{
	for (int i = num_film; i < films_number - 1; i++)
	{
		films[i] = films[i + 1];
	}
	films_number = films_number - 1;

}

void Cinema::DelBron(int num)
{


	for (int g = num; g < broni_number - 1; g++)
	{
		for (int j = 0; j < 8; j++)
		{
			bron[g][j] = bron[g + 1][j];
		}
	}
	broni_number = broni_number - 1;
}

string Cinema::Convert_Time(int time)
{
	int temp;
	string ret;

	ret = to_string(time / 60);
	if (atoi(ret.c_str()) < 10)
	{
		ret = "0" + ret;
	}
	ret = ret + ":";
	temp = time - time / 60 * 60;
	if (temp < 10)
	{
		ret = ret + "0" + to_string(temp);
	}
	else
	{
		ret = ret + to_string(temp);
	}
	return ret;
}

int Cinema::DeConvert_Time(string time)
{
	int times;
	times = (int(time[0]) - 48) * 10 * 60 + (int(time[1] - 48) * 60) + (int(time[3]) - 48) * 10 + (int(time[4]) - 48);
	return times;
}

void Cinema::NewID()
{
	srand(time(NULL));
	string str = "";
	for (int i = 0; i < 5; ++i)
	{
		str += to_string(rand() % 10);
	}
	id_cinema = str;
}

void Cinema::NewHallCinema(int number_film)
{
	for (int i = 0; i < 9; i++)
	{
		films[number_film].mesta[i] = NewHall();
	}

	return;
}

string Cinema::NewHall()
{
	string temp;
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		int num = rand() % 3;
		temp = temp + to_string(num);
	}

	return temp;
}

bool Cinema::CheckBron(int num)
{
	bool itog = true;
	for (int j = 0; j < films_number; j++)
	{
		if (films[j].name == bron[num][3]) //проверка названия фильма
		{
			for (int r = 0; r < 3; r++)
			{
				if (Time::RetDate(0, 1) == bron[num][6] || Time::RetDate(1, 1) == bron[num][6] || Time::RetDate(2, 1) == bron[num][6])	//проверка даты
				{
					int l;
					if (Time::RetDate(0, 1) == bron[num][6])
					{
						l = 0;
						if (DeConvert_Time(bron[num][5]) > DeConvert_Time(Time::RetTime(0)))
						{
							return false;
						}
					}
					if (Time::RetDate(1, 1) == bron[num][6])
					{
						l = 1;
					}
					if (Time::RetDate(2, 1) == bron[num][6])
					{
						l = 2;
					}

					for (int p = 0; p < 3; p++)
					{
						if (films[j].time[p] == bron[num][5])	//проверка времени
						{
							string temp = bron[num][7];
							std::istringstream iss(temp);
							std::string token;
							while (std::getline(iss, token, ' '))
							{
								if (films[j].mesta[(l * 3) + p][atoi(token.c_str())] != '1')
								{
									return false;
								}
							}

							return true;
						}
					}
				}

			}
		}

	}
}