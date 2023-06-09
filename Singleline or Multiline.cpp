#include <iostream>
using namespace std;

 void check(string str)                                       //MOHAMMAD NAIMUL HAQUE
                                                            //21-44387-1 LABTASK-1    SEC- D
{
     if ((str[0]=='/') && (str[1]=='/'))
    {
        cout << "It is a comment";
        return;
    }
    else if ((str[0]=='/') && (str[1]=='*') && (str[str.size()-2])=='*' && (str[str.size()-1])=='/' )
    {
        cout << "It is a multiline comment";
        return;
    }

     else
        cout << "It is not a comment";
 }

int main()
{
	string input;
	cout<<"INPUT: ";
	getline(cin,input);
	check(input);
    return 0;

}
