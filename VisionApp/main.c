/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - ���ΰ�.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�

struct vision
{
    double left;
    double right;
};

struct vision exchange(struct vision robot);

int main(void) 
{
    struct vision robot;

    printf("�÷� �Է� : ");
    scanf("%lf%lf", &(robot.left), &(robot.right));
    printf("ó���÷� %.1lf  %.1lf\n", robot.left, robot.right);
    robot = exchange(robot);
    printf("�ٲ� �÷� : %.1lf  %.1lf\n", robot.left,robot.right);
    // type here.
	system("pause");
	return EXIT_SUCCESS;
}

struct vision exchange(struct vision robot)
{
    double temp;

    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;
}