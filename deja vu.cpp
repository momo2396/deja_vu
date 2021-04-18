#include<bits/stdc++.h>
using namespace std;
#define ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define endl "\n"
int main()
{
  struct details_of_family_members{
     char name[80];
     int age;
     char last_degree[80];
     char occupation[80];
     float salary;
}detail;
int n;
printf("How many members live in your family?\n");
cin>>n;
for(int i=1;i<=n;i++){

            printf("Name:\n");
            fflush(stdin);
            gets(detail.name);
            printf("Age:\n");
            scanf("%d",&detail.age);
            printf("Last degree:\n");
            fflush(stdin);
           gets(detail.last_degree);
           printf("Salary:\n");
            scanf("%f",&detail.salary);
            printf("Occupation:\n\n");
            fflush(stdin);
            gets(detail.occupation);
            printf("Name: %s\n",detail.name);
            printf("Age: %d\n",detail.age);
            printf("Last degree: %s\n",detail.last_degree);
            printf("Occupation: %s\n",detail.occupation);
            printf("Salary: %.3f\n\n",detail.salary);
}
}
