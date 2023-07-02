#include<iostream>
#include<vector>
#include<string>
using namespace std;

void Separate_words(string str)
{
 string word = "";   
 for(auto x : str)
 {
    if(x == ' ')
    {
        cout<<"\n"<<endl;
        word="";
    }
    else
    {
        word+=x;
    }
 } 
}
int main()
{
    string str="Laksh The Great";
    Separate_words(str);
}