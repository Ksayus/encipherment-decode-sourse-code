#include <iostream>
#include <Windows.h>
#include "encipherment.h"
#include "decode.h"
#include "password_txt.cpp"
#include "tool.h"
#include "choosemoudle.h"

using namespace std;

int main()
{
	choosemoudle();

	while (moudle_1 != 3)
	{
		clear_sceen();
		//ѡ��ģʽ����ѡ��ʽ
		if (moudle_1 == 1)
		{
			clear_sceen();
			cout << one_dimensional_encryption_word << "    " << two_dimensional_encryption_word << "    " << fence_encryption_word << endl;
			cin >> moudle_2;
			clear_sceen();
			cout << "������Ҫ���ܵ��ı�:" << endl;
			move_probability();
			//cin >> input;
			if (moudle_2 == 1)
			{
				one_dimensional_encryption();
			}
			if (moudle_2 == 2)
			{
				two_dimensional_encryption();
			}
			if (moudle_2 == 3)
			{
				fence_encryption();
			}
			out_word(moudle_2);
		}
		else {
			if (moudle_1 == 2)
			{
				clear_sceen();
				cout << "��������ܺ���ı�:" << endl;
				//inspection_input_deteil();
				read_inspection_code();
				if (readmodule == 1)
				{
					one_dimension_decode();
				}
				if (readmodule == 2)
				{
					two_dimension_decode();
				}
				if (readmodule == 3)
				{
					fence_decode();
				}
				out_decode();
			}
		}
		clear_sceen();
		choosemoudle();
	}
	clear_sceen();
	break_quckily();
}
