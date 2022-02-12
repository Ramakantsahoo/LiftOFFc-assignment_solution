

   #include<stdio.h>

   int main(){
    char name[20];
    char regd[3];
    char branch[18];
    char hobbies[17];

    printf("Enter your name here : ");
    fgets(name, 20, stdin);

    printf("Enter your Regd. No. (Last three digits only) : ");
    scanf("%s", &regd);

    printf("Enter your branch here : ");
    fgets(branch, 18, stdin);
    fgets(branch, 18, stdin);

    printf("Enter your hobbies here : ");
    fgets(hobbies, 17, stdin);

    printf("Name :- %s", name);
    printf("Registration Number :- %s \n", regd);
    printf("Branch :- %s", branch);
    printf("Hobbies :- %s", hobbies);

    return 0;
   }