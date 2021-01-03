#include <iostream>
#include <fstream>
#include "function.h"
#include "parameters.h"
using namespace std;


double findextremum(double x1, int & iterations)
{
	double x0, x2, xm, y0, y2, y1, c, b;
	xm = x1;
	iterations = 1; //0	
	do
	{
		x1 = xm;//��������� �����������.
		x0 = x1 - h;// ���������� �������� �������� ���������(h-������������ ������������-������������)
		x2 = x1 + h;// ���������� �������� �������� ���������

		//���������� 3 �������� ���������
		y0 = f(x0);
		y1 = f(x1);
		y2 = f(x2);
		//���������� ������������ ��������
		c = y0 / (2.0 * h * h) - y1 / (h * h) + y2 / (2.0 * h * h);
		b = (-y0 * (2.0 * x1 + h) + 4.0 * y1 * x1 - y2 * (2.0 * x1 - h)) / (2.0 * h * h);

		xm = -b / (2.0 * c);// ��������� ��������� ����������
		iterations++;
		if (iterations > maxiterations) break; //�����! 
	} while (fabs(xm - x1) > eps); // ���������� �������� //>
	return xm;
}


int main(void)
{
	double step = (x2 - x1) / 100.0; //��������� ��������
	double candidat;
	double xm = x1;
	int bestiter = 1;//0
	int iter = 0;

	for (double x = x1; x <= x2; x += step)
	{
		candidat = findextremum(x, iter);
		if ((f(candidat) > f(xm)) ^ findMinimum)
		{
			xm = candidat;
			bestiter = iter;
		}
	}


	ofstream ff(filename);
	ff << xm << endl;
	ff << f(xm) << endl;
	ff << bestiter << endl;
	ff << ((bestiter >=100000)?"ERROR":"OK") << endl; //>= 1000
	//�����������, ������ �������� ��� �������
	double besty = f(xm);
	double neary = f(xm + h);

	if (findMinimum && besty<neary || !findMinimum && besty > neary)
		ff << "OK" << endl;
	else
		ff << "ERROR" << endl;

	ff.close();

	return 0;
}