#include  <stdio.h>
#include  <string.h>
struct student {
  long  sno;
  char  name[10];
  float  score[3];
};
void fun(struct student  a[], int  n)
{
/**********found**********/
 //__1__ t;
  struct student t;
  int  i, j;
/**********found**********/
  //for (i=0; i<__2__; i++)
  //for (i = 0; i < n; i++)
  for (i = 0; i < n-1; i++)
    for (j=i+1; j<n; j++)
/**********found**********/
      //if (strcmp(__3__) > 0)
        if (strcmp(a[i].name , a[j].name ) > 0)
      {  t = a[i];   a[i] = a[j];  a[j] = t;  }
}
main()
{ struct student  s[4]={{10001,"ZhangSan", 95, 80, 88},{10002,"LiSi", 85, 70, 78},
                    {10003,"CaoKai", 75, 60, 88}, {10004,"FangFang", 90, 82, 87}};
  int  i, j;
  printf("\n\nThe original data :\n\n");
  for (j=0; j<4; j++)
  {  printf("\nNo: %ld  Name: %-8s      Scores:  ",s[j].sno, s[j].name);
     for (i=0; i<3; i++)  printf("%6.2f ", s[j].score[i]);
     printf("\n");
  }
  fun(s, 4);
  printf("\n\nThe data after sorting :\n\n");
  for (j=0; j<4; j++)
  {  printf("\nNo: %ld  Name: %-8s      Scores:  ",s[j].sno, s[j].name);
     for (i=0; i<3; i++)  printf("%6.2f ", s[j].score[i]);
     printf("\n");
  }
  getchar();
}
