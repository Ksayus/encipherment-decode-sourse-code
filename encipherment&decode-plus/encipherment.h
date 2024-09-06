#ifndef ENCIPHERMENT
#define ENCIPHERMENT

#include <iostream>
#include <fstream>
#include "tool.h"
#include "password_txt.cpp"

using namespace std;

const int max_number = 512;


int probability;
int two_dimension_probability;
int drection;
int two_dimension_drection;
int read;
int fence_number;
int binarysystem[max_number]{};//�洢 һ ά�����ƶ���С�Ķ���������
int two_dimension_binarysystem[max_number]{};//�洢 �� ά�����ƶ���С�Ķ���������
int drectionbinarysystem[max_number]{};//�洢����Ķ���������


char input[max_number];
char out[max_number];
char fence_store[max_number][max_number];//���ڴ洢դ�������м���̵��ַ�˳�����



int move_probability()
{
	srand(time(0));

	//������������Ա���м���
	probability = rand() % 25 + 1;
	two_dimension_probability = rand() % 12 + 1;
	//�����ƶ�����
	drection = rand() % 2;
	//cout << savedrection << endl;

	//�ж��ƶ�����
	if (drection == 1) {
		probability = probability;
		two_dimension_probability = two_dimension_probability;
		two_dimension_drection = 1;
	}
	else {
		probability = -probability;
		two_dimension_probability = -two_dimension_probability;
		two_dimension_drection = -1;
	}
	return probability, two_dimension_probability, drection, two_dimension_drection;
}


int inspection_word_code()
{
	while (1)
	{
		//cout << input[read + 2] << endl;
		if (input[read] == 0)
		{
			break;
		}
		else {
			read++;
		}
	}
	cout << read << endl;
	return read;
}


void one_dimensional_encryption()
{
	cin >> input;
	inspection_word_code();
	for (int i = 0; i <= read; i++) {
		for (int forread = 26; forread <= 51; forread++)
		{
			if (input[i] == bigword[forread])
			{
				out[i] = bigword[forread + probability];
			}
			if (input[i] == smallword[forread])
			{
				out[i] = smallword[forread + probability];
			}
			if (input[i] == '?' || input[i] == '!' || input[i] == '@' || input[i] == '#' || input[i] == '$' || input[i] == '%' || input[i] == '^' || input[i] == '&' || input[i] == '*' || input[i] == '(' || input[i] == ')' || input[i] == '-' || input[i] == '_' || input[i] == '+' || input[i] == '=' || input[i] == ',' || input[i] == '.' || input[i] == '/' || input[i] == ';' || input[i] == '[' || input[i] == ']' || input[i] == '>' || input[i] == '<' || input[i] == ':' || input[i] == '"' || input[i] == '{' || input[i] == '}' || input[i] == '|' || input[i] == '`' || input[i] == '~' || input[i] == '��' || input[i] == '��' || input[i] == '��' || input[i] == '��' || input[i] == '��' || input[i] == '��' || input[i] == '��' || input[i] == '��' || input[i] == '��' || input[i] == '��' || input[i] == '��' || input[i] == '��' || input[i] == '��' || input[i] == '��' || input[i] == '��' || input[i] == '��' || input[i] == '��')
			{
				out[i] = input[i];
			}
		}
	}
}
void two_dimensional_encryption()
{
	cin >> input;
	inspection_word_code();
	int m = 0;
	while (read)
	{
		for (int j = 13; j <= 25; j++)
		{
			for (int k = 2; k <= 3; k++)
			{
				if (input[m] == two_dimension_bigword[k][j])
				{
					out[m] = two_dimension_bigword[k + two_dimension_drection][j + two_dimension_probability];
				}
				if (input[m] == two_dimension_smallword[k][j])
				{
					out[m] = two_dimension_smallword[k + two_dimension_drection][j + two_dimension_probability];
				}
				if (input[m] == '?' || input[m] == '!' || input[m] == '@' || input[m] == '#' || input[m] == '$' || input[m] == '%' || input[m] == '^' || input[m] == '&' || input[m] == '*' || input[m] == '(' || input[m] == ')' || input[m] == '-' || input[m] == '_' || input[m] == '+' || input[m] == '=' || input[m] == ',' || input[m] == '.' || input[m] == '/' || input[m] == ';' || input[m] == '[' || input[m] == ']' || input[m] == '>' || input[m] == '<' || input[m] == ':' || input[m] == '"' || input[m] == '{' || input[m] == '}' || input[m] == '|' || input[m] == '`' || input[m] == '~' || input[m] == '��' || input[m] == '��' || input[m] == '��' || input[m] == '��' || input[m] == '��' || input[m] == '��' || input[m] == '��' || input[m] == '��' || input[m] == '��' || input[m] == '��' || input[m] == '��' || input[m] == '��' || input[m] == '��' || input[m] == '��' || input[m] == '��' || input[m] == '��' || input[m] == '��')
				{
					out[m] = input[m];
				}
			}
		}
		m++;
		read--;
	}
}
void fence_encryption()
{
	cin >> input;
	inspection_word_code();
	for (int z = 0; z <= ((read - 1) / 2); z++)
	{
		for (int x = 0; x <= 1; x++)
		{
			fence_store[x][z] = input[fence_number];
			fence_number++;
		}
	}
	int out_number = 0;
	for (int d = 0; d <= 1; d++)
	{
		for (int e = 0; e <= ((read - 1) / 2); e++)
		{
			out[out_number] = fence_store[d][e];
			out_number++;
		}
	}
}

void out_word(int choosemodule)
{
	ofstream enciphermentFile;
	enciphermentFile.open("encipherment_contect.txt", fstream::app);
	fstream file("encipherment_contect.txt", ios::out);

	int n = 0, b = 0, c = 0;
	//cout << probability << endl;
	//cout << drection << endl;

	//�������ƶ�������ƶ���С����probability or two_dimension_probability����Ϊ������
	if (probability < 0)
	{
		probability = -probability;
	}
	if (two_dimension_probability < 0)
	{
		two_dimension_probability = -two_dimension_probability;
	}

	probability = probability * privacy_key;
	two_dimension_probability = two_dimension_probability * privacy_key;

	cout << "���ܺ�Ϊ:";

	//�������ƶ�������ƶ���С����probability��ת��Ϊ������
	while (probability)
	{
		binarysystem[n] = probability % 2;
		probability /= 2;
		//cout << binarysystem[n];
		n++;
	}

	//�������ƶ�������ƶ���С����two_dimension_binarysystem��ת��Ϊ������
	while (two_dimension_probability)
	{
		two_dimension_binarysystem[b] = two_dimension_probability % 2;
		two_dimension_probability /= 2;
		//cout << binarysystem[n];
		b++;
	}

	//���ݿ�ʼѡ���ģʽ�ж�����Ķ��������飨binarysystem or two_dimension_binarysystem��
	if (choosemodule == 1)
	{
		for (int k = 22; k >= 0; k--)
		{
			cout << binarysystem[k];
			enciphermentFile << binarysystem[k];
		}
	}
	else {
		if (choosemodule == 2)
		{
			for (int k = 22; k >= 0; k--)
			{
				cout << two_dimension_binarysystem[k];
				enciphermentFile << two_dimension_binarysystem[k];
			}
		}
		else {
			if (choosemodule == 3)
			{
				for (int k = 22; k >= 0; k--)
				{
					cout << "0";
					enciphermentFile << "0";
				}
			}
		}
	}
	//cout << binarysystem << endl;
	cout << "-" << out << "-";
	enciphermentFile << "-" << out << "-";
	if (choosemodule == 1 || choosemodule == 2)
	{
		if (drection == 1)
		{
			cout << "00001";
			enciphermentFile << "00001";
		}
		else {
			cout << "00000";
			enciphermentFile << "00000";
		}
	}
	else {
		cout << "00000";
		enciphermentFile << "00000";
	}
	cout << "-" << choosemodule << endl;
	enciphermentFile << "-" << choosemodule << endl;
	//cout << drectionbinarysystem << endl;

	cout << "�ı�������!" << endl;
	enciphermentFile.close();
	cout << "�ı��ĵ��ѹر�!" << endl;

	break_quckily();
}
#endif // !ENCIPHERMENT


