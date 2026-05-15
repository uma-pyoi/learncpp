# learncpp meow

## (0.13) Changing c++ version

added this to tasks.json args

```json
"-std=c++23",
```

if run code with in built vscode button it's c++ 23, if use coderunner extension shortcut it used to be c++ 14. so i went to code runner and changed the cpp command to include -std=c++23:

```json
"cpp": "clang++ -std=c++23 src/*.cpp -o $fileNameWithoutExt && ./$fileNameWithoutExt #",
```

## (2.8) Compiling mutliple files

added this to tasks.json args

```json
"${fileDirname}/**.cpp",
```

## (2.11) Including header files

added this to tasks.json args

```json
"-I../src/include",
```

added this to c_cpp_properties.json includePath (should be for intellisense, although works without it too)

```json
"${workspaceFolder}/src/include"
```

for code runner extension changed the command to this (-Idirname will make it search for header files in the dirname directory):

```json
"cpp": "clang++ -Isrc/include -std=c++23 src/*.cpp -o $fileNameWithoutExt && ./$fileNameWithoutExt #",
```
