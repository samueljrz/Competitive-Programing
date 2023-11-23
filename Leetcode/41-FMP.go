// Without memory O(1)
func firstMissingPositive(nums []int) int {
	var tmp []int
	unique := make(map[int]bool)
	for _, num := range nums {
		if num > 0 && !unique[num] {
			unique[num] = true
			tmp = append(tmp, num)
		}
	}
	sort.Ints(tmp[:])
	for i := 1; i <= len(tmp); i++ {
		if tmp[i-1] != i {
			return i
		}
	}
	return len(tmp) + 1
}

// With memory O(1)
func firstMissingPositive(nums []int) int {
	sort.Ints(nums[:])
	var index int
	for i, num := range nums {
		if num > 0 {
			index = i
			break
		}
	}
	lastValue := 0
	for i := index; i < len(nums); i++ {
		if lastValue != nums[i] {
			lastValue++
		}
		if nums[i] != lastValue {
			return lastValue
		}
	}
	return lastValue + 1
}