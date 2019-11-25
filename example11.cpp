//Name
//Date
//Exercise or Project Number
//CS211 Lab

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //declaring a string (initialized empty)
    string phrase;
    //initialization method 1:
    string noun("squirrel");
    //initialization method 2:
    string verb = "jump";
    
    //string concatenation (this actually converts cstring literals into a string)
    phrase = "The " + noun + " will " + verb + " from tree to tree.";
    
    //output
    cout << phrase << endl;
    
    //reading a line of input:
    string nextLine;
    cout << "Please type a line of text: ";
    getline(cin, nextLine);
    cout << "You typed: " << nextLine << endl;
    
    //determining the length of a string:
    cout << "The length of the line of text is: " << nextLine.length() << endl;
    
    string s1 = "Hello World";
    string s2 = "Hello World";
    string s3 = "hello world";
    string s4 = "dog";
    string s5 = "cat";
    string s6 = "elephant";
    
    cout << "s1 contains: " << s1 << endl;
    cout << "s2 contains: " << s2 << endl;
    cout << "s3 contains: " << s3 << endl;
    cout << "s4 contains: " << s4 << endl;
    cout << "s5 contains: " << s5 << endl;
    cout << "s6 contains: " << s6 << endl;
    
    /*
    For strings, the <, >, <=, >= operators compare lexicographically.
    */
    
    if(s1 == s2) cout << "s1 == s2 returns: true" << endl;
    if(s1 != s3) cout << "s1 != s3 returns: true" << endl;
    if(s4 > s5) cout << "s4 > s5 returns: true" << endl;
    if(s5 < s6) cout << "s5 < s6 returns: true" << endl;
    if(s4 >= s5) cout << "s4 >= s5 returns: true" << endl;
    if(s5 <= s6) cout << "s5 <= s6 returns: true" << endl;
    
    return 0;
}
