#include"func.h"


void creat_student(Student *student)// *student 和 student[] 是一样的用途
{

	cout << "共有五名学生，请依次输入：\n学生名字  年龄  分数  指导老师名字1  指导老师名字21  指导老师名字3  \n输入完成一个学生信息后按enter接着输入下一个学生信息" << endl;
	//cout << "请输入学生的信息：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> student[i].name >> student[i].age >> student[i].score >> student[i].teacher_name[0] >> student[i].teacher_name[1] >> student[i].teacher_name[2];
	}
	cout << "学生的信息信息输入完成" << endl;

}

void printf_teacher(void)
{
	Student student[5];
	creat_student(student);
	Teacher teacher[3] = { {student[0].teacher_name[0],student},{student[0].teacher_name[1],student},{student[0].teacher_name[2],student} };
	
	for (int i = 0; i < 3; i++)
	{
		cout << teacher[i].name <<"带领的学生信息如下：" << endl;
		for (int j = 0; j < 3; j++)
		{
			cout << "名字：" << teacher[i].stu->name << " 年龄：" << teacher[i].stu->age << " 分数：" << teacher[i].stu->score << " 老师1：" << teacher[i].stu->teacher_name[0] << " 老师2：" << teacher[i].stu->teacher_name[1] << " 老师3：" << teacher[i].stu->teacher_name[2] << endl;
		}
		cout << endl;
	}
}