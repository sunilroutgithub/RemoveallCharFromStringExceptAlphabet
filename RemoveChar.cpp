 #include<string>
 #include<cctype>
 #include<iostream>
 using namespace std;     
string remove_non_alphabets(string str){
    string result= " ";
    for(char ch:str){
        if(isalpha(ch)){
              result += ch;
        }
    }
    return result; 
}

 int main(){
    string str="Sunilk@#riuty#23";
     cout<<"Alphabets only Found: "<<remove_non_alphabets(str)<<endl;
    return 0;
 }
