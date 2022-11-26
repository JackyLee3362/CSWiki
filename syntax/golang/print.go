package main

import (
    "fmt"
)

func main() {
    // """输出字符串"""
	fmt.Println("hello" + "go") // 无空格
	fmt.Println("hello", "go")  // 有空格


    // """输出格式化浮点数
    // Go 语言中使用 fmt.Sprintf 格式化字符串并赋值给新串
    // """
    var pi = 3.1415926
    var s = fmt.Sprintf("%.2f", pi)
    fmt.Println(s)
}