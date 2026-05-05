# learncpp meow

## 0.13

if run code with in built vscode button it's c++ 23, if use coderunner extension shortcut it used to be c++ 14. so i went to code runner and changed the cpp command to include -std=c++23:

```json
"cpp": "clang++ -std=c++23 src/*.cpp -o $fileNameWithoutExt && ./$fileNameWithoutExt #",
```

## 2.8

added this line to compile multiple files
```json
"${fileDirname}/**.cpp",
```
