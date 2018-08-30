#include <iostream>

/**
 * structのメンバ変数を順番に初期化したい時ってコンストラクタ要らないってまじ？
 * A. ちょっと勘違い。単純に代入で初期化すればいいでしょって話
 */

struct TEST{
  int memb_a;
  int memb_b;
};

int main(){
  TEST a = {100,102};

  std::cout << a.memb_a << a.memb_b << std::endl;

}
