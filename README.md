# lunar_calendar

## 1、介绍

**lunar_calendar** 是一个将公历日期转换成阴历的工具软件包。

### 1.1 目录结构

| 名称 | 说明 |
| ---- | ---- |
| examples | 例子目录 |
| inc  | 头文件目录 |
| src  | 源代码目录 |

### 1.2 许可证

`lunar_calendar` 软件包使用 `MIT` 软件包许可协议，请见 `lunar_calendar/LICENSE` 文件。

### 1.3 依赖

- RT-Thread 3.0+

## 2、如何打开 lunar_calendar

使用 lunar_calendar package 需要在 RT-Thread 的包管理器中选择它，具体路径如下：

```shell
RT-Thread online packages
    tools packages --->
        [*] lunar_calendar: A tool to convert a Gregorian calendar date into a lunar calendar.
```

然后让 RT-Thread 的包管理器自动更新，或者使用 `pkgs --update` 命令更新包到 BSP 中。

## 3、使用 lunar_calendar


在使用 lunar_calendar 软件包时首先要定义一个`char`数组来存储返回的阴历汉字，如：

```c
char str[32] = {'\0'};
```

调用的函数接口为：

```c
void sun2lunar(int year, int month, int day, char *str_lunar);
```

比如：

```c
static showlunar(int argc, char const *argv[]) {
    if (argc == 4) {
        char str[32] = {'\0'};
        sun2lunar(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), str);
        printf("%s\n", str);
    }
    return 0;
}
```

## 4、示例演示

在 MSH 中输入命令 `showlunar 2019 12 4`，可以在串口助手上看到输出了对应日期的阴历。

```
msh >showlunar 2019 12 4
冬月初九
msh >
```

## 5、注意事项

- 当前可以生成阴历日期对应的阳历范围为 1900-1-1 到2099-12-31。

## 6、联系方式 & 感谢

* 维护：[illusionlee](https://github.com/illusionlee)
* 主页：https://github.com/illusionlee/lunar_calendar.git
