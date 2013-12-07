#ソースコードの記述  
実行コードはppbf_source.hpp内のPPBF_SOURCEに1命令ずつスペースで区切って記述する

#命令  
ip - ポインタをインクリメントする  
vp - ポインタをデクリメントする  
iv - ポインタの指す値をインクリメントする  
dv - ポインタの指す値をデクリメントする  
sh - ポインタの指す値を表示する  

#実行  
clang -E -P ppbf.hpp | tr -d '\n' または gcc -E -P ppbf.hpp | tr -d '\n'   
プリプロセッサで解釈し、tr -d '\n'で余計な改行の除去してやる

#実行例  
![screen shot](screenshot.png)  
