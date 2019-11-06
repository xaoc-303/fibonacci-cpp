# fibonacci-cpp

[![Build Status](https://travis-ci.org/xaoc-303/fibonacci-cpp.svg?branch=master)](https://travis-ci.org/xaoc-303/fibonacci-cpp)

## recursive if-else

| v | # | 30 | 35 | 40 | 45 |
| --- | --- | --- | --- | --- | --- |
| clang 10.0.1 | [C++](./fibo.cpp) (compiled) | 0,011 | 0,068 | 0,612 | 0:06,557 |
| | [Total](https://github.com/xaoc-303/fibonacci) | | | | |

## optimization

| v | # | 30 | 35 | 40 | 45 |
| --- | --- | --- | --- | --- | --- |
| clang 10.0.1 | [C++](./fibo.cpp) (compiled) | 0,002 | 0,002 | 0,002 | 0,001 |
| | [Total](https://github.com/xaoc-303/fibonacci) | | | | |

## run

```
gcc -x c++ fibo.cpp -o fibo
time ./fibo f1 30
time ./fibo f2 30
```
