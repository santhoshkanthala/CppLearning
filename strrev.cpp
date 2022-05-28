#include <iostream>
#include<string>
using namespace std;

int main()
{
     std::string ch="stringtobereversed";
    cout<<"string value " << ch.length();
        char temp;
        int j=0;
        for(int i=ch.length();i>=0&&j<ch.length()/2;i--){
            cout<<"\n character at "<<i<<ch;
            temp= ch[i-1];
            ch[i-1]=ch[j];
            ch[j]=temp;
            cout<<"\n after character at "<<i<<ch;
            j++;
        temp=ch[ch.length()-1];
    }
    return 0;
}