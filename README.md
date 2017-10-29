# 动态链接库总结

## 文档

[pdf链接](./documentation/out/documentation.pdf)

## demo

共有四个demo：

* [demo1](./demo1) 展示一般情形
* [demo2](./demo2) 展示手动打开无依赖信息的依赖树
* [demo3](./demo3) 展示手动打开有依赖信息的依赖树
* [demo4](./demo4) 展示手动打开有环状依赖、无依赖信息的依赖树

*此处的“依赖信息” 指`ELF` 文件中的 `NEEDED` 字段*


请在`g++` 环境下运行`./run.sh`以获得结果。

## Manual
[ld-linux(8) - Linux man page](https://linux.die.net/man/8/ld-linux)
