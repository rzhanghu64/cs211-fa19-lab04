//Name
//Date
//Exercise or Project Number
//CS211 Lab

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    //CStrings:
    char str1[] = "Hello World"; //This is initialization
    //Equivalent to:
    char str2[12] = "Hello World"; //This is initialization
    /*
    str2 = "New cstring!" //This is assignment. It is ILLEGAL
    */
    
    //To assign a cstring a new value, use the strcpy OR strncopy functions
    //from the cstring library.
    
    //Ex:
    cout << "str2 currently contains: " << str2 << endl;
    strcpy(str2, "Hi!");
    cout << "After using strcpy(str2, \"Hi!\"); str2 now contains: " << str2 << endl;
    //or:
    strncpy(str2, "What's up?" , 11);
    cout << "After using strncpy(str2, \"What's up?\"); str2 now contains: " << str2 << endl;
    
    //Equivalence cannot be checked using ==
    //Instead, use strcmp from the cstring library
    
    //Ex:
    if(strcmp(str1, str2) == 0) cout << "str1 and str2 are the same!" << endl;
    
    //Concatenation doesn't work either with +
    //Use strcat or strncat
    
    //Ex:
    char str3[20] = "I Love ";
    strcat(str3, "Lucy");
    
    //Use strlen to find the length of a cstring
    
    //Ex:
    cout << "The length of str1 is: " << strlen(str1) << endl;
    
    //You can use cout on a cstring and it will automatically iterate through the whole word:
    //Ex:
    cout << "The content of str3 is: " << str3 << endl;
    
    int index = 0;
    while(str1[index] != '\0')
    {
        cout << str1[index] << endl;
        index++;
    }
    
    index = 0;
    while(str1[index] != '\0')
    {
        //Similarly, you can use tolower(int) to make all of the characters in the cstring lowercase
        str1[index] = toupper(str1[index]);
        cout << str1[index];
        index++;
    }
    cout << endl;
    
    /*
    In the cctype library:
    
    islower(int) returns true (boolean) if the int represents a lowercase letter in ASCII
    isupper(int) works similarly but for all uppercase letters
    isalpha(int) works similarly but for all alphabetical characters
    isdigit(int) works similarly but for all numeric characters
    */
    
    char str4[] = "The 0th character in this cstring is uppercase.";
    if(islower(str4[1])) cout << "The 1st character is lowercase" << endl;
    if(isupper(str4[0])) cout << "The 0th character is uppercase" << endl;
    if(isalpha(str4[2])) cout << "The 2nd character is alphabetical" << endl;
    if(isdigit(str4[4])) cout << "The 4th character is numeric" << endl;
    
    /*
    In the iostream library:
    
    cin.get() reads one character of input from the istream and stores it in a char variable
    */
    char nextChar;
    cout << "Input anything. We will read the first character input: ";
    cin.get(nextChar);
    cout << "The character you input was: " << nextChar << endl;
    
    return 0;
}
