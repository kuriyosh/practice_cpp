/**
 * @file string2charlist.cpp
 * @brief 数字stringをvector<int>にするラムダ式の作成
 * @date 2018-08-30
 * @author Yoshiki Kurihara <y-kurihara@ist.osaka-u.ac.jp>
 */

#include <string>
#include <vector>
#include <iostream>

int main(){
  std::string a = "123456";
  
  // 目的のラムダ式 ////////////////////////////////
  auto func_c = [](std::string a)->std::vector<int>
	{
	 std::vector<int> ;
	 for(int i = 0; i < a.size(); i++){
	   b.push_back((int) (a[i]-'0'));
	 }
	 return b;
	};
  // 以下テスト /////////////////////////////////////

  auto c = func_c(a);

  for (auto i = c.begin(); i != c.end(); ++i)
    std::cout << *i << ' ';
	
  return 0;
}

