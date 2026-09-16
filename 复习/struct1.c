# include <stdio.h>
int main()
{
    struct Student
    {
        char name[20];
        int id;
        double score;
    };
    struct Student stu = {"Alice", 1001, 95.5};
    printf("Name: %s\nId: %d\nScore: %.1f\n", stu.name, stu.id, stu.score);
    return 0; 
}