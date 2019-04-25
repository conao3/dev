// printf関数を使用するために必要
#include <stdio.h>

// int型を返すmain関数の宣言
int main() {
    // int型の変数の宣言
    int i;
    int count;

    // int型変数の初期化
    count = 0;

    // for文.引数は(初期化文; 継続条件文; 再初期化式) {ループ文}
    // まず初期化文を実行した後,ループ文が実行される.
    // その後,継続条件文が評価され,それが真だった場合に.
    // 再初期化式を実行し,ループ文をもう一度実行する.
    for (i = 2000; i <= 10000; i++) {

        // if文.書式は 
        //
        // if(条件文) {
        //   条件文が真の時の実行文
        // } else {
        //   条件文が偽の時の実行文
        // }
        //
        // else部はなくても構わない.
        // 条件文は一致`==` 不一致`!=`
        // 以下`<=` 以上`>=`
        // 未満`<` 超過`>` を適宜使用する.
        // 条件文には論理和`||`,論理積`&&`を使用でき,式全体の値が採用される.
        if ((i % 3 != 0) && (i % 4 == 0)) {

            // int変数のインクリメント
            count++;
        }
    }
    // printf関数. ""で囲まれた文字列を端末に出力する.
    // \nは改行コードを意味する.
    printf("%d\n", count);

    // main関数の正常終了
    return 0;
}






