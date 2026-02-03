#include<stdio.h>
#include<string.h>
int main() {
   char username[20];
   char password[20];
   const char correct_username[] = "admin123";
   const int required_password_length = 8;
   printf("Enter username: ");
   scanf("%s", username);
   printf("Enter password: ");
   scanf("%s", password);
   if(strcmp(username, correct_username) == 0) {
      if(strlen(password) == required_password_length) {
         printf("login successful! welcome %s\n", username);
      } else {
         printf("login failed! incorrect password length.\n");
      }
   } else {
      printf("login failed! incorrect username.\n");
   }
      return 0;
   }
