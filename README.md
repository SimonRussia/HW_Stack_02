## Homework II (Stack)
Данная домашняя работа посвящена изучению сборки проектов при помощи **cmake**.

## Tasks
- [X] 1. Необходимо добавить метод empty для класа stack.
- [X] 2. Необходимо добавить примеры для всех методов.
- [X] 3. Необходимо добавить конфигурационный файл CMakeLists.txt
- [X] 4. Обеспечить сборку с примерами и сборку без примеров

## Tutorial

```ShellSession
$ tree repo
examples/
- init.cpp
- push.cpp
- pop.cpp
- empty.cpp
include/
- stack.hpp
sources/
- main.cpp
CMakeLists.txt
README.md
```

```ShellSession
# сборка без примеров
$ cd repo
$ cmake -H. -B_builds
$ cmake --builds _builds
```

```ShellSession
# сборка с примерами
$ cd repo
$ cmake -H. -B_builds -DBUILD_EXAMPLES=ON
$ cmake --builds _builds
$ ls _builds/init  # [✔]
$ ls _builds/pop   # [✔] 
$ ls _builds/push  # [✔]
$ ls _builds/empty # [✔]
```