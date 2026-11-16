#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "../include/homework.h"

#define STUDENTS 3
#define EXAMS 4

static int minimum(const int grades[][EXAMS], int pupils, int tests)
{
    int i, j;
    int lowGrade = 100;

    for (i = 0; i < pupils; i++)
    {
        for (j = 0; j < tests; j++)
        {
            if (grades[i][j] < lowGrade)
            {
                lowGrade = grades[i][j];
            }
        }
    }
    return lowGrade;
}

static int maximum(const int grades[][EXAMS], int pupils, int tests)
{
    int i, j;
    int highGrade = 0;

    for (i = 0; i < pupils; i++)
    {
        for (j = 0; j < tests; j++)
        {
            if (grades[i][j] > highGrade)
            {
                highGrade = grades[i][j];
            }
        }
    }
    return highGrade;
}

static double average(const int setOfGrades[], int tests)
{
    int i;
    int total = 0;

    for (i = 0; i < tests; i++)
    {
        total += setOfGrades[i];
    }
    return (double)total / tests;
}

static void printGrades(const int grades[][EXAMS], int pupils, int tests)
{
    int i, j;
    printf("                 [0]  [1]  [2]  [3]");
    for (i = 0; i < pupils; i++)
    {
        printf("\nstudentGrades[%d] ", i);
        for (j = 0; j < tests; j++)
        {
            printf("%-5d", grades[i][j]);
        }
    }
}

void P14(void)
{
    int student;
    const int studentGrades[STUDENTS][EXAMS] = {
        { 77, 68, 86, 73 },
        { 96, 87, 89, 78 },
        { 70, 90, 86, 81 }
    };

    printf("[P14] 二維陣列學生成績分析:\n");
    printf("The array is:\n");
    printGrades(studentGrades, STUDENTS, EXAMS);

    printf("\n\nLowest grade: %d\nHighest grade: %d\n",
        minimum(studentGrades, STUDENTS, EXAMS),
        maximum(studentGrades, STUDENTS, EXAMS));

    for (student = 0; student < STUDENTS; student++)
    {
        printf("The average grade for student %d is %.2f\n",
            student, average(studentGrades[student], EXAMS));
    }
}