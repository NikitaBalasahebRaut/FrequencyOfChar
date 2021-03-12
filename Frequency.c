/*
    Problem statement : Accept string from user and one charcter return the frequency of that character.
 
 Input : "Hello"
                l
 Output : 2

 Input : "Hello World"
            o
 Output : 2
 
 Input : "AE Demo"
                e
 Output : 1

 Input : "AE Demo"
               H
 Output : 0

 */
 

 #include<stdio.h>
 
 int Frequency(char str[],char ch)
 {
     int i = 0;
	 int iCount = 0;
	 
     while(str[i] != '\0')
	 {
	    if(str[i] == ch)
		{
          iCount++;
		}
		i++;
	 }	
    return iCount;	
 }
 
 
 int main()
 {
   char carr[30];
   int iRet = 0;
   char ch = '\0';
   
   printf("Enter The String \n");
   scanf("%[^'\n']s",carr);            // // Accept the input till user enerets enter key //not necessary to write &ch because array name consider as first index
   
   printf("Enter the character to calculate the frequency \n");
   scanf(" %c",&ch);
   
   iRet = Frequency(carr,ch);
   
   printf(" frequency of given character is: %d\n", iRet);
 
 return 0;
 }
 
 /*
 
 output
 
 D:\ProgramTopicWise\LB\4ProblemsOnString\FrequencyOfCharacter>myexe
Enter The String
Hello
Enter the character to calculate the frequency
H
 frequency of given character is: 1
 
 */