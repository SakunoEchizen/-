#include"func.h"


void creat_student(Student *student)// *student �� student[] ��һ������;
{

	cout << "��������ѧ�������������룺\nѧ������  ����  ����  ָ����ʦ����1  ָ����ʦ����21  ָ����ʦ����3  \n�������һ��ѧ����Ϣ��enter����������һ��ѧ����Ϣ" << endl;
	//cout << "������ѧ������Ϣ��" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> student[i].name >> student[i].age >> student[i].score >> student[i].teacher_name[0] >> student[i].teacher_name[1] >> student[i].teacher_name[2];
	}
	cout << "ѧ������Ϣ��Ϣ�������" << endl;

}

void printf_teacher(void)
{
	Student student[5];
	creat_student(student);
	Teacher teacher[3] = { {student[0].teacher_name[0],student},{student[0].teacher_name[1],student},{student[0].teacher_name[2],student} };
	
	for (int i = 0; i < 3; i++)
	{
		cout << teacher[i].name <<"�����ѧ����Ϣ���£�" << endl;
		for (int j = 0; j < 3; j++)
		{
			cout << "���֣�" << teacher[i].stu->name << " ���䣺" << teacher[i].stu->age << " ������" << teacher[i].stu->score << " ��ʦ1��" << teacher[i].stu->teacher_name[0] << " ��ʦ2��" << teacher[i].stu->teacher_name[1] << " ��ʦ3��" << teacher[i].stu->teacher_name[2] << endl;
		}
		cout << endl;
	}
}