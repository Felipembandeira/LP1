#include <iostream>
#include <stack>
#include <deque>
#include <string>

using namespace std;

bool isPalindrome(const string& word);




int main(){

	isPalindrome("hannah");

	return 0;
}




bool isPalindrome(const string &word)
{
    int n = word.size();
    stack<char> s;

    for(int i = 0; i < n/2; i++)
    {
    	//cout << word[i];
        s.push(word[i]) ;
    }

    for(int i = (n+1)/2; i < n; i++)
    {
        if(s.top() != word[i])
        {
         	cout << "Nao eh palindromo" << endl;
            return false;
        }

        s.pop();
    }
    cout << "Eh palindromo" << endl;
    return true;
    

}

