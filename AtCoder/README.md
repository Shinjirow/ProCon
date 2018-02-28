# AtCoder系ディレクトリ
です。

---

## つかいかた

create.shを実行する

参加するコンテスト名を入力する

そのコンテスト名のディレクトリが作成され、

中にコンテストタイプに応じた問題用cppファイルとMakefile、input.txtが生成される

コンテストタイプは現時点ではABCとARCにのみ対応

shellscriptもMakefileも超テキトーに書いたので芸人さんとかC++に強い人はあんまりくわしくつっこまないでください

---

## プログラムのコンパイル、実行方法

`$make 問題`でコンパイルできる(C++14オプションです。)

ex)`$make A`

`$make do`でa.outにinput.txtを食わせて実行する

よって`$make 問題 do`でコンパイルして実行できます