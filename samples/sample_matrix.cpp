// ����, ���, ���� "������ ����������������-2", �++, ���
//
// sample_matrix.cpp - Copyright (c) ������� �.�. 07.05.2001
//   ������������ ��� Microsoft Visual Studio 2008 �������� �.�. (20.04.2015)
//
// ������������ ����������������� �������

#include <iostream>
#include "utmatrix.h"
#include <stdlib.h>
//---------------------------------------------------------------------------

void main()
{
  
  int i,n, j,t1,t2;

    setlocale(LC_ALL, "Russian");
  cout << "������������ �������� ��������� ������������� ����������� ������" << endl;
   
 cout << "������� ������ ������(<10000)"<<endl;
 cin >> n;
 TMatrix<int> a(n), b(n), c(n);
 if (n > MAX_MATRIX_SIZE)
 {
	 cout<<"������ ������ ��������� ��������"<<endl;
 }
 cout << "�������� ������ ���������� ������:" << endl;
 cout << "1.���������� ������� ���������� �������" << endl;
 cout << "2.������������� ��������� �������" << endl;
 cout << "3.���������� ������� �������������" << endl;
  cin >> t1;
  if (t1 == 1)
  {
	  for (i = 0; i < n; i++)
	  
		  for (j = i; j < n; j++) {
			  a[i][j] = rand() % 1001;
			  b[i][j] = rand() % 1001;
		  }
		  cout << "a =" << a << endl;
		  cout << "b =" << b << endl;
	  
  }
  if (t1 == 2)
  {
	  for (i = 0; i < n; i++)
		  for (j = i; j < n; j++) {
			  a[i][j] = i * 10 + j;
			  b[i][j] = (i * 10 + j) * 100;
		  }
  }
  if (t1 == 3) 
  {
	  cout << "������� ������� a" << endl;
	  cin >> a;
	  cout << "������� ������� b" << endl;
	  cin >> b;
  }
  cout << "�������� �������, ������� ���������� ��������� � ���������" << endl;
  cout << "1.�������� ������ a+b" << endl;
  cout<< "2.��������� ������ a-b" << endl;
  cin >> t2;
  if (t2 == 1) 
  {
	  c = a + b;
	  cout << "Matrix a = " << endl << a << endl;
	  cout << "Matrix b = " << endl << b << endl;
	  cout << "Matrix c = a + b" << endl << c << endl;
  }
  if (t2 == 2) 
  {
	  c = a - b;
	  cout << "Matrix a = " << endl << a << endl;
	  cout << "Matrix b = " << endl << b << endl;
	  cout << "Matrix c = a - b" << endl << c << endl;
  }
  
}
//---------------------------------------------------------------------------
