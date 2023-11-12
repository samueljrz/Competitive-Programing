var mu sync.Mutex
var wg sync.WaitGroup

func processString(b byte, m map[byte]int) {
	defer wg.Done()
	mu.Lock()
	m[b] += 1
	mu.Unlock()
}

func firstUniqChar(s string) int {
	m := make(map[byte]int)
	for i := 0; i < len(s); i++ {
		wg.Add(1)
		go processString(s[i], m)
	}
	wg.Wait()
	for i := 0; i < len(s); i++ {
		if m[s[i]] == 1 {
			return i
		}
	}
	return -1
}