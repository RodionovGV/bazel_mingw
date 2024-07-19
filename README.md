Запускается, если задать пути в командной строке:
> [!attention] 
> 
```
set PATH=C:\msys64\mingw64\bin;C:\WINDOWS\System32;C:\WINDOWS;C:\ProgramData\chocolatey\lib\bazel
```

Компиляция MinGW без abseil:
```
bazel run --config=gcc --define lib_abseil=off //:main --verbose_failures
```
Компиляция компилятором по умолчанию с abseil:
```
bazel run --define lib_abseil=on //:main --verbose_failures
```