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