package main

import (
    "fmt"
)

func main() {
    // 一维数组
		var nums = [5]int{1, 2, 3, 7, 5}
		nums2 := [5]int{1,5,6,8,9}
		fmt.Println(nums,nums2)  // 有空格

		// 数组长度
		fmt.Println(len(nums))

    // 遍历
		for idx, val := range nums {
			fmt.Println(idx, val)
		}
}