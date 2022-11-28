#include <algorithm>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
  int count = 1;              // 단어개수 1로 초기화
  string str;                 // 문자열
  map<string, int> words_map; // 단어, 단어개수 저장할 map

  while (cin >> str)
  {
    for (int i = 0; i < str.size(); i++)
    {
      str[i] = tolower(str[i]);
    }

    auto p = words_map.insert(make_pair(str, count));

    if (p.second == false)
    {
      ++p.first->second;
    }
    else
    {
      // empty
    }
  }

  for (map<string, int>::const_reverse_iterator it = words_map.rbegin(); it != words_map.rend(); it++)
  {
    cout << it->first << " " << it->second << endl;
  }
}