#pragma once //��ֹͷ�ļ��ظ�����
#include<iostream>
using namespace std;

//��ݳ������
class Identity
{
public:

	//����ϵͳ  ���麯��
	virtual void operMenu() = 0;

	//�û���
	string m_Name;
	//����
	string m_Pwd;

};
