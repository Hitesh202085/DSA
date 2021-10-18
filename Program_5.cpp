#include<iostream>
using namespace std;
class String{
    public:
    char str[30];
    char str2[30];

    int lengthOfString(char str[]){
        int i=0;
        while(str[i]!='\0'){
            i++;
        }
        return i;
    }
    void reverseString(){
        int size=lengthOfString(str);
        cout<<endl<<"Reverse string is "<<endl;
        for(int i=size;i>=0;i--){
        cout<<str[i];
    }
    cout<<endl;
    }
    void copyString(){
        int i;
        int size=lengthOfString(str);
        char cpystr[30];
        for(i=0;i<=size;i++){
            cpystr[i]=str[i];
        }
        cout<<endl<<"Copied string is "<<endl<<cpystr<<endl<<endl;
    }
    void concatenation(char str1[], char str2[]){
        int len1,len2;
        len1=lengthOfString(str1);
        len2=lengthOfString(str2);
        for(int i=0;i<=len2;i++){
            str1[len1+i]=str2[i];
        }
        cout<<"Concatenate string 1 and 2 "<<endl;
        cout<<str1<<endl;
    }
};
int main(){
    String s1;

    cout<<endl<<"Enter your string 1 "<<endl;
    cin>>s1.str;
    
    cout<<endl<<"The length of string 1 is "<<s1.lengthOfString(s1.str)<<endl;

    s1.reverseString();
    s1.copyString();

    cout<<"Enter your string 2 "<<endl;
    cin>>s1.str2;
    cout<<endl;
    s1.concatenation(s1.str,s1.str2);
    return 0;
}