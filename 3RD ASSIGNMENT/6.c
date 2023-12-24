#include <stdio.h>
#define Activity_Weightage 30
#define Sport_Weightage 20
#define Exam_Weightage 50
#define Exam_Total 200
#define Activities_Total 60
#define Sport_Total 50
int main()
{
    int exam_score_1, exam_score_2, activity_score_3, activity_score_2, activity_score_1, sport_score;
    float total_percent, exam_percent, sport_percent, activity_percent;
    printf("Enter The Obtained Marks In First Exam Out Of 100??\n");
    scanf("%d", &exam_score_1);
    printf("Enter The Obtained Marks In Second Exam Out Of 100??\n");
    scanf("%d", &exam_score_2);
    printf("Enter The Obtained Marks In First Activity Out Of 20??\n");
    scanf("%d", &activity_score_1);
    printf("Enter The Obtained Marks In Second Activity Out Of 20??\n");
    scanf("%d", &activity_score_2);
    printf("Enter The Obtained Marks In Third Activity Out Of 20??\n");
    scanf("%d", &activity_score_3);
    printf("Enter The Obtained Marks In Sport Score Out Of 50??\n");
    scanf("%d", &sport_score);
    exam_percent = (float)(exam_score_1 + exam_score_2) * Exam_Weightage / Exam_Total;
    sport_percent = (float)sport_score * Sport_Weightage / Sport_Total;
    activity_percent = (float)(activity_score_1 + activity_score_2 + activity_score_3) * Activity_Weightage / Activities_Total;
    total_percent = exam_percent + sport_percent + activity_percent;
    printf("\n\n*********Result**********\n");
    printf("\n Total Percentage in examination : %.2f\n", exam_percent);
    printf("\n Total Percentage in Sport : %.2f\n", sport_percent);
    printf("\n Total Percentage in Activities : %.2f\n", activity_percent);
    printf("\n-------------");
    printf("\n Total Percentage : %.2f\n", total_percent);

    return 0;
}