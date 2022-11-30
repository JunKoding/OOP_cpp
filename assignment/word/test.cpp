#include <map>
#include<sstream>
#include<iostream>

using namespace std;

void wordsCount(string str){

      int count = 1;
      //key value pair map
      //key = word, value = count
      std::map<string,int> wordsMap;

      //extract words and push in map
      istringstream wordStream(str);

      string word;
      //Extract each words and add to map
      //if it does not exist in map
       while(wordStream >> word){
             //create a pair of map and bool
            // pair<map<string,int>::iterator,bool> retrunValue;
             auto retrunValue = wordsMap.insert(pair<string,int>(word,count));

             //insert element
            //retrunValue = wordsMap.insert( pair<string,int>(word,count));

            //Check if map contains value
            if (retrunValue.second==false)
            {
                  //Element already exists
                  ++retrunValue.first->second; 
            }     
       }//while

       //Iterate elements and print words 
       map<string,int>::iterator itr ;

       for (itr = wordsMap.begin(); itr != wordsMap.end(); ++itr){

               cout << '\t' << itr->first ;
               cout<< '\t' << itr->second << '\n';
       }
}

int main(){

      wordsCount("hello world !!! hello world !!! good day");    

      return 0;

}