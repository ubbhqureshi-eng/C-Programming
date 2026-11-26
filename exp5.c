#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main(void) {
 int ids[MAX];
 char names[MAX][55];
 float percentage[MAX];
 char grades[MAX];
 float maths, em, cprog;
 int count = 0;
 int choice, searchId, found, i;
main_menu: Page 4
 printf("\n=============================================\n");
 printf("STUDENT GRADE & RESULT MANAGEMENT SYSTEM\n");
 printf("=============================================\n");
 printf("1. Enter Student Record\n");
 printf("2. Display All Student Records\n");
 printf("3. Search Student by ID\n");
 printf("4. EXIT\n");
 printf("---------------------------------------------\n");
 printf("Enter your choice (1-4): ");
 if (scanf("%d", &choice) != 1) {
 printf("Invalid input! Please enter a valid number.\n");
 while (getchar() != '\n');
 goto main_menu;
 }
 switch (choice) {
 case 1:
 if (count >= MAX) {
 printf("Record storage is full!\n");
 goto main_menu;
 }
 printf("\n----- Enter Student Record -----\n");
 printf("Enter student ID: ");
 if (scanf("%d", &ids[count]) != 1) {
 printf("Invalid ID!\n");
 while (getchar() != '\n');
 goto main_menu;
 }
 printf("Enter student name: ");
 if (scanf("%54s", names[count]) != 1) {
 printf("Invalid name!\n");
 while (getchar() != '\n');
 goto main_menu;
 }
 printf("Enter Maths marks (out of 100): ");
 if (scanf("%f", &maths) != 1) {
 printf("Invalid marks input!\n");
 while (getchar() != '\n');
 goto main_menu;
 }
 if (maths < 0 || maths > 100) {
 printf("Invalid marks! Enter marks from 0 to 100.\n");
 goto main_menu;
 }
 printf("Enter EM marks (out of 100): ");
 if (scanf("%f", &em) != 1) {
 printf("Invalid marks input!\n");
 while (getchar() != '\n');
 goto main_menu;
 }
 if (em < 0 || em > 100) {
 printf("Invalid marks! Enter marks from 0 to 100.\n");
 goto main_menu;
 }
 printf("Enter C-programming marks (out of 100): ");
 if (scanf("%f", &cprog) != 1) {
 printf("Invalid marks input!\n");
 while (getchar() != '\n');
 goto main_menu;
 }
 if (cprog < 0 || cprog > 100) {
 printf("Invalid marks! Enter marks from 0 to 100.\n");
 goto main_menu;
 }
 percentage[count] = (maths + em + cprog) / 3.0f;
 if (percentage[count] >= 90)
 grades[count] = 'A';
 else if (percentage[count] >= 75)
 grades[count] = 'B';
 else if (percentage[count] >= 60)
 grades[count] = 'C';
 else if (percentage[count] >= 40)
 grades[count] = 'D';
 else
 grades[count] = 'F';
 count++;
 printf("\nStudent record saved successfully!\n");
 goto main_menu;
 case 2:
 if (count == 0) {
 printf("\nNo student records found!\n");
 goto main_menu; Page 5
 }
 printf("\n--- All Student Records ---\n");
 printf("%-10s %-20s %-12s %-10s\n",
 "ID", "Name", "Percentage", "Grade");
 printf("-----------------------------------------------------\n");
 for (i = 0; i < count; i++) {
 printf("%-10d %-20s %-12.2f %-10c\n",
 ids[i], names[i], percentage[i], grades[i]);
 }
 goto main_menu;
 case 3:
 if (count == 0) {
 printf("\nNo student records found!\n");
 goto main_menu;
 }
 printf("\nEnter Student ID to search: ");
 if (scanf("%d", &searchId) != 1) {
 printf("Invalid ID!\n");
 while (getchar() != '\n');
 goto main_menu;
 }
 found = 0;
 for (i = 0; i < count; i++) {
 if (ids[i] == searchId) {
 printf("\nRecord Found:\n");
 printf("ID : %d\n", ids[i]);
 printf("Name : %s\n", names[i]);
 printf("Percentage : %.2f%%\n", percentage[i]);
 printf("Grade : %c\n", grades[i]);
 found = 1;
 break;
 }
 }
 if (!found) {
 printf("\nStudent with ID %d not found.\n", searchId);
 }
 goto main_menu;
 case 4:
 printf("\nExiting program. THANK YOU!\n");
 return 0;
 default:
 printf("\nInvalid choice! Select between 1 and 4.\n");
 goto main_menu;
 }
}