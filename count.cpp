//This is a program to count the number of vowes in an array

#include <iostream>
using namespace std;
int main()
{
char str[100]; 
char *ptr; 
int cntV,cntC; 

cout << “Enter a string: “;
cin >> str;

ptr=str; 

cntV=cntC=0;
while(*ptr!=’\0′) 
if(*ptr==’A’ ||*ptr==’E’ ||*ptr==’I’ ||*ptr==’O’ ||*ptr==’U’ ||*ptr==’a’ ||*ptr==’e’ ||*ptr==’i’ ||*ptr==’o’ ||*ptr==’u’)
cntV++; // increment vowel count
else
cntC++;

cout << “Total number of vowels : ” << cntV << “\nTotal number of consonants : ” << cntC << endl;
return 0;
}
