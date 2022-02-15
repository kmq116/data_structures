#include <stdio.h>

struct Student
{
  char name[10];
  int age;
  float score;
};

int main()
{
  struct Student s1 = {"Tom", 20, 80.5};
  printf("%s\n", s1.name);
  printf("%d\n", s1.age);
  printf("%f\n", s1.score);

  s1.age = 20;
  s1.score = 90.5;
  s1.name[0] = 'a';
  printf("%s\n", s1.name);
  printf("%d\n", s1.age);
  printf("%f\n", s1.score);

  struct Student *s2;
  s2 = &s1;
  s2->age = 10;
  s2->score = 80.5;
  s2->name[0] = 'b';
  printf("%s\n", s2->name);
  printf("%d\n", s2->age);
  printf("%f\n", s2->score);
}