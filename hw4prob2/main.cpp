/*A palindrome is a string that reads the same both forward and backward, ignoring punctuation and case. For example,
 
 Eva, can I see bees in a cave?

 is a palindrome.

 Write a recursive function that returns true if its string parameter is a palindrome and false if its string parameter is not a palindrome.

 Write a non-recursive function that returns true if its string parameter is a palindrome and false if its string parameter is not a palindrome.

 Do not use global variables.

 Write a program to test your functions.

*/

#include <iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;
string rsentence;
string formatstring(string sentence)//removes everything except letters and makes                                       them upper case
{
    int size = (int)sentence.length();
    for(int i = 0; i<size; i++)
    {
        if(isalpha(sentence[i])==0)
        {sentence.erase(remove(sentence.begin(), sentence.end(), sentence[i]), sentence.end());}
        sentence[i]=toupper(sentence[i]);
    }
    rsentence = sentence;
    return rsentence;
    
}


//funtion to find palindrome using recursive functions
bool rpalindrome(string sentence, int firstindex, int lastindex)
{
    if(sentence[firstindex]==sentence[lastindex])
    {
        if(firstindex==lastindex)
        {
            return true;
        }
        rpalindrome(sentence,firstindex+1, lastindex-1);
        return true;
    }
    return false;
}


//function to find palindrome using loop
bool palindrome(string sentence, int size)
{
    for(int i = 0 ; i<size; ++i)
    {
        if(sentence[i]==sentence[size-i-1])
        {
            if(i==size-i)
            {}
        }
        else
            return false;
    }
    return true;
}
string a = "Eva, can I see bees in a cave?";
int lastidx;
int main(int argc, const char * argv[]) {
    // insert code here...
    formatstring(a);
    lastidx = (int)rsentence.size()-1;
    rpalindrome(rsentence, 0, lastidx);
    palindrome(rsentence, lastidx+1);
    cout<<endl;
    return 0;
}
