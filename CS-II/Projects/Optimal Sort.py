import sys
import fileinput
words_list = []
for line in fileinput.input(files ='wordlist.txt'):
    words_list.append(line.replace("\n", "").lower())
    
    def merge_sort(inp):
        size = len(inp)
        if size > 1:
            middle = size // 2
            left_arr = inp[:middle]
            right_arr = inp[middle:]
            
            merge_sort(left_arr)
            merge_sort(right_arr)
            
            p = 0
            q = 0
            r = 0
            
            left_size = len(left_arr)
            right_size = len(right_arr)
            while p < left_size and q < right_size:
                if left_arr[p] < right_arr[q]:
                    inp[r] = left_arr[p]
                    p += 1
                else:
                    inp[r] = right_arr[q]
                    q += 1
                    
                    r += 1
                    
                    
            while p < left_size:
                inp[r] = left_arr[p]
                print(left_arr[p])
                p += 1
                r += 1
                
            while q < right_size:
                inp[r]=right_arr[q]
                print(right_arr[q] + "")
                q += 1
                r += 1
                
                merge_sort(words_list) 
