#include <stdio.h>
int main(){
    struct Student
    {
        char name[20];
        int id;
        double score;
    };
    struct Student student[3];
    
    for(int i = 0; i < 3; i++)
    {
        scanf("%s %d %lf", student[i].name, &student[i].id, &student[i].score);
    }
    for(int i = 0; i < 3; i++){
        printf("Name: %s\nId: %d\nScore: %.1f\n", student[i].name, student[i].id, student[i].score);
    }
    return 0;
}